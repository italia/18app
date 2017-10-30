// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseNodes_bundle.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.App.RootViewHost.h>
#include <Fuse.AppBase.h>
#include <Fuse.AppRoot.h>
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Box.h>
#include <Fuse.CacheFramebuffer.h>
#include <Fuse.Collision.h>
#include <Fuse.ComputeException.h>
#include <Fuse.Computer.h>
#include <Fuse.Computer-1.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.DeferredManager.h>
#include <Fuse.Diagnostic.h>
#include <Fuse.DiagnosticHandler.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Diagnostics.Temporal.h>
#include <Fuse.DiagnosticType.h>
#include <Fuse.DrawContext.h>
#include <Fuse.DrawHelpers.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.FastProperty1.h>
#include <Fuse.FastProperty1Link.h>
#include <Fuse.FastProperty1Link-1.h>
#include <Fuse.FastProperty2.h>
#include <Fuse.FastProperty2Link.h>
#include <Fuse.FastProperty2Link-1.h>
#include <Fuse.FileSourceConverter.h>
#include <Fuse.FixedViewport.h>
#include <Fuse.Float2Computer.h>
#include <Fuse.Float3Computer.h>
#include <Fuse.Float4Computer.h>
#include <Fuse.Font.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.FramebufferPoolImpl.h>
#include <Fuse.FrustumViewport.h>
#include <Fuse.HitTestCallback.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestResult.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IArray.h>
#include <Fuse.IBeginRemoveVisualListener.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IDeferred.h>
#include <Fuse.IFrame.h>
#include <Fuse.IFrustum.h>
#include <Fuse.ILoading.h>
#include <Fuse.ILoadingStatic.h>
#include <Fuse.INameListener.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusNavigationDirection.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <Fuse.Internal.FrustumMatrix.h>
#include <Fuse.Internal.iOSSystemFont.h>
#include <Fuse.Internal.RawPointer-1.h>
#include <Fuse.Internal.SystemFont.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IObject.h>
#include <Fuse.iOSDevice.ScreenOrientation.h>
#include <Fuse.IParentObserver.h>
#include <Fuse.IProperties.h>
#include <Fuse.IRaw.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.ITransformMode.h>
#include <Fuse.ITransformRelative.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.IUpdateListener.h>
#include <Fuse.IViewport.h>
#include <Fuse.JSFileSource.h>
#include <Fuse.Json.h>
#include <Fuse.KeyboardBootstrapper.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutParams.Flags.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Marshal.h>
#include <Fuse.Marshal.IConverter.h>
#include <Fuse.Marshal.SingleArray.h>
#include <Fuse.MarshalException.h>
#include <Fuse.MobileBootstrapping.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.NameValuePair.h>
#include <Fuse.Node.DataFinder.h>
#include <Fuse.Node.DataWatcher.h>
#include <Fuse.Node.FirstDataEnumerator.h>
#include <Fuse.Node.h>
#include <Fuse.Node.IDataEnumerator.h>
#include <Fuse.Node.IDataListener.h>
#include <Fuse.Node.ISiblingDataProvider.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.NodeGroup.h>
#include <Fuse.NodeGroupBase.ConstructFlags.h>
#include <Fuse.NodeGroupBase.EmptyNode.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.NumberComputer.h>
#include <Fuse.OrthographicFrustum.h>
#include <Fuse.OSVersion.h>
#include <Fuse.PendingRemoveVisual.h>
#include <Fuse.PhoneUriHelper.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Platform.AppEvents.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Preview.SelectionManager.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Ray.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.RenderTargetEntry.h>
#include <Fuse.RequestBringIntoViewArgs.h>
#include <Fuse.RequestBringIntoViewHandler.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.Resources.DisposalRequest.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.RootStage.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Rotation.h>
#include <Fuse.Scaling.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.ScalingModes.IdentityMode.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Scripting.ScriptMethodInline.h>
#include <Fuse.Scripting.ScriptProperty-2.h>
#include <Fuse.Shear.h>
#include <Fuse.Size2Computer.h>
#include <Fuse.SizeComputer.h>
#include <Fuse.Stage.h>
#include <Fuse.StringComputer.h>
#include <Fuse.SystemFont.h>
#include <Fuse.SystemFont.Style.h>
#include <Fuse.SystemFont.Weight.h>
#include <Fuse.SystemUIFrame.h>
#include <Fuse.TemplateSourceImpl.h>
#include <Fuse.Time.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.TranslationModes.HeightMode.h>
#include <Fuse.TranslationModes.LocalMode.h>
#include <Fuse.TranslationModes.ParentSizeMode.h>
#include <Fuse.TranslationModes.SizeMode.h>
#include <Fuse.TranslationModes.WidthMode.h>
#include <Fuse.UnhandledExceptionArgs.h>
#include <Fuse.UnhandledExceptionHandler.h>
#include <Fuse.UpdateAction.h>
#include <Fuse.UpdateDispatcher.h>
#include <Fuse.UpdateListener.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEvent.h>
#include <Fuse.UserEventArgs.h>
#include <Fuse.UserEventDispatch.h>
#include <Fuse.UserEventHandler.h>
#include <Fuse.ViewportHelpers.h>
#include <Fuse.Visual.CancelInteractionsType.h>
#include <Fuse.Visual.Enumerator-1.h>
#include <Fuse.Visual.h>
#include <Fuse.Visual.HitTestRecord.h>
#include <Fuse.Visual.HitTestTransformMode.h>
#include <Fuse.Visual.InteractionItem.h>
#include <Fuse.Visual.ParameterProperty.h>
#include <Fuse.Visual.SafeIterator.h>
#include <Fuse.Visual.VisualBits.h>
#include <Fuse.VisualBounds.h>
#include <Fuse.VisualBounds.Type.h>
#include <Fuse.VisualContext.h>
#include <Fuse.VisualEvent-2.h>
#include <Fuse.VisualEventArgs.h>
#include <Fuse.VisualEventHandler.h>
#include <Fuse.VisualEventMode.h>
#include <Fuse.VisualListCache.h>
#include <Fuse.WrapException.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLClearBufferMask.h>
#include <OpenGL.GLEnableCap.h>
#include <OpenGL.GLError.h>
#include <OpenGL.GLFramebufferHandle.h>
#include <OpenGL.GLFramebufferTarget.h>
#include <OpenGL.GLInteger4Name.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-3.h>
#include <Uno.AggregateException.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.PriorityQueue-1.h>
#include <Uno.Collections.PriorityQueueType.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Collections.RootableList-1.h>
#include <Uno.Color.h>
#include <Uno.Comparison-1.h>
#include <Uno.Data.Json.JsonWriter.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Enum.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Func-4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.FramebufferFlags.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.IDisposable.h>
#include <Uno.IndexOutOfRangeException.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Stream.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Object.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.Display.h>
#include <Uno.Platform.Displays.h>
#include <Uno.Platform.EventSources.HardwareKeys.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Predicate-1.h>
#include <Uno.Quaternion.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UShort.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
#include <Uno.Vector.h>
static uString* STRINGS[84];
static uType* TYPES[92];

namespace g{
namespace Fuse{

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/AlternateRoot.uno
// ----------------------------------------------------------------

// public sealed class AlternateRoot :30
// {
static void AlternateRoot_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15,
        ::g::Uno::Bool_typeof(), offsetof(AlternateRoot, _isEnabled), 0,
        ::g::Fuse::Node_typeof(), offsetof(AlternateRoot, _node), 0,
        ::g::Fuse::Visual_typeof(), offsetof(AlternateRoot, _parentNode), 0,
        ::g::Uno::Bool_typeof(), offsetof(AlternateRoot, _preserveContext), 0);
}

::g::Fuse::Node_type* AlternateRoot_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(AlternateRoot);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.AlternateRoot", options);
    type->fp_build_ = AlternateRoot_build;
    type->fp_ctor_ = (void*)AlternateRoot__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))AlternateRoot__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))AlternateRoot__OnUnrooted_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated AlternateRoot() :30
void AlternateRoot__ctor_3_fn(AlternateRoot* __this)
{
    __this->ctor_3();
}

// private void Add() :136
void AlternateRoot__Add1_fn(AlternateRoot* __this)
{
    __this->Add1();
}

// public bool get_IsEnabled() :90
void AlternateRoot__get_IsEnabled_fn(AlternateRoot* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :91
void AlternateRoot__set_IsEnabled_fn(AlternateRoot* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public generated AlternateRoot New() :30
void AlternateRoot__New2_fn(AlternateRoot** __retval)
{
    *__retval = AlternateRoot::New2();
}

// public Fuse.Node get_Node() :60
void AlternateRoot__get_Node_fn(AlternateRoot* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// public void set_Node(Fuse.Node value) :61
void AlternateRoot__set_Node_fn(AlternateRoot* __this, ::g::Fuse::Node* value)
{
    __this->Node(value);
}

// protected override sealed void OnRooted() :116
void AlternateRoot__OnRooted_fn(AlternateRoot* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);

    if (__this->IsEnabled())
        __this->Add1();
}

// protected override sealed void OnUnrooted() :123
void AlternateRoot__OnUnrooted_fn(AlternateRoot* __this)
{
    __this->Remove1();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public Fuse.Visual get_ParentNode() :36
void AlternateRoot__get_ParentNode_fn(AlternateRoot* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->ParentNode();
}

// public void set_ParentNode(Fuse.Visual value) :37
void AlternateRoot__set_ParentNode_fn(AlternateRoot* __this, ::g::Fuse::Visual* value)
{
    __this->ParentNode(value);
}

// public bool get_PreserveContext() :112
void AlternateRoot__get_PreserveContext_fn(AlternateRoot* __this, bool* __retval)
{
    *__retval = __this->PreserveContext();
}

// public void set_PreserveContext(bool value) :113
void AlternateRoot__set_PreserveContext_fn(AlternateRoot* __this, bool* value)
{
    __this->PreserveContext(*value);
}

// private void Remove() :129
void AlternateRoot__Remove1_fn(AlternateRoot* __this)
{
    __this->Remove1();
}

// public generated AlternateRoot() [instance] :30
void AlternateRoot::ctor_3()
{
    _isEnabled = true;
    _preserveContext = true;
    ctor_2();
}

// private void Add() [instance] :136
void AlternateRoot::Add1()
{
    if ((ParentNode() == NULL) || (Node() == NULL))
        return;

    if (PreserveContext())
        uPtr(Node())->OverrideContextParent = Parent();

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ParentNode())->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), Node());
}

// public bool get_IsEnabled() [instance] :90
bool AlternateRoot::IsEnabled()
{
    return _isEnabled;
}

// public void set_IsEnabled(bool value) [instance] :91
void AlternateRoot::IsEnabled(bool value)
{
    if (_isEnabled == value)
        return;

    _isEnabled = value;

    if (!IsRootingCompleted())
        return;

    if (_isEnabled)
        Add1();
    else
        Remove1();
}

// public Fuse.Node get_Node() [instance] :60
::g::Fuse::Node* AlternateRoot::Node()
{
    return _node;
}

// public void set_Node(Fuse.Node value) [instance] :61
void AlternateRoot::Node(::g::Fuse::Node* value)
{
    if (value == _node)
        return;

    if (!IsRootingCompleted())
    {
        _node = value;
        return;
    }

    Remove1();
    _node = value;
    Add1();
}

// public Fuse.Visual get_ParentNode() [instance] :36
::g::Fuse::Visual* AlternateRoot::ParentNode()
{
    return _parentNode;
}

// public void set_ParentNode(Fuse.Visual value) [instance] :37
void AlternateRoot::ParentNode(::g::Fuse::Visual* value)
{
    if (value == _parentNode)
        return;

    if (!IsRootingCompleted())
    {
        _parentNode = value;
        return;
    }

    Remove1();
    _parentNode = value;
    Add1();
}

// public bool get_PreserveContext() [instance] :112
bool AlternateRoot::PreserveContext()
{
    return _preserveContext;
}

// public void set_PreserveContext(bool value) [instance] :113
void AlternateRoot::PreserveContext(bool value)
{
    _preserveContext = value;
}

// private void Remove() [instance] :129
void AlternateRoot::Remove1()
{
    if ((ParentNode() == NULL) || (Node() == NULL))
        return;

    uPtr(ParentNode())->BeginRemoveChild(Node(), NULL);
}

// public generated AlternateRoot New() [static] :30
AlternateRoot* AlternateRoot::New2()
{
    AlternateRoot* obj1 = (AlternateRoot*)uNew(AlternateRoot_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/AppBase.uno
// ----------------------------------------------------------

// public abstract class AppBase :36
// {
static void AppBase_build(uType* type)
{
    ::STRINGS[0] = uString::Const("No AppBase Current defined");
    ::STRINGS[1] = uString::Const("No RootViewport defined");
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Visual_typeof();
    ::TYPES[8] = ::g::Fuse::IViewport_typeof();
    ::TYPES[9] = ::g::Fuse::UnhandledExceptionHandler_typeof();
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof(),
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Fuse::Resources::DisposalManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(AppBase_type, interface0));
    type->SetFields(1,
        ::g::Uno::Bool_typeof(), offsetof(AppBase, _isInvalidateSelectionScheduled), 0,
        ::g::Fuse::Properties_typeof(), offsetof(AppBase, _properties), 0,
        ::TYPES[1/*Uno.Collections.List<Fuse.Visual>*/], offsetof(AppBase, _selection), 0,
        ::g::Uno::Float4_typeof(), offsetof(AppBase, _Background), 0,
        ::g::Fuse::RootViewport_typeof(), offsetof(AppBase, _RootViewport), 0,
        ::TYPES[9/*Fuse.UnhandledExceptionHandler*/], offsetof(AppBase, UnhandledException1), 0,
        ::g::Fuse::RootViewport_typeof(), (uintptr_t)&AppBase::_testRootViewport_, uFieldFlagsStatic);
}

AppBase_type* AppBase_typeof()
{
    static uSStrong<AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Application_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(AppBase);
    options.TypeSize = sizeof(AppBase_type);
    type = (AppBase_type*)uClassType::New("Fuse.AppBase", options);
    type->fp_build_ = AppBase_build;
    type->fp_OnUpdate = AppBase__OnUpdate_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))AppBase__get_Properties_fn;
    return type;
}

// protected AppBase() :47
void AppBase__ctor_2_fn(AppBase* __this)
{
    __this->ctor_2();
}

// public generated float4 get_Background() :262
void AppBase__get_Background_fn(AppBase* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Background();
}

// public generated void set_Background(float4 value) :262
void AppBase__set_Background_fn(AppBase* __this, ::g::Uno::Float4* value)
{
    __this->Background(*value);
}

// public static new Fuse.AppBase get_Current() :220
void AppBase__get_Current2_fn(AppBase** __retval)
{
    *__retval = AppBase::Current2();
}

// internal static Fuse.RootViewport get_CurrentRootViewport() :232
void AppBase__get_CurrentRootViewport_fn(::g::Fuse::RootViewport** __retval)
{
    *__retval = AppBase::CurrentRootViewport();
}

// private void DoInvalidateSelection() :144
void AppBase__DoInvalidateSelection_fn(AppBase* __this)
{
    __this->DoInvalidateSelection();
}

// public void DrawSelection(Fuse.DrawContext dc) :160
void AppBase__DrawSelection_fn(AppBase* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawSelection(dc);
}

// private void FindSelection(Fuse.Node n) :117
void AppBase__FindSelection_fn(AppBase* __this, ::g::Fuse::Node* n)
{
    __this->FindSelection(n);
}

// private void InvalidateGraphicsView(Fuse.Node n) :128
void AppBase__InvalidateGraphicsView_fn(AppBase* __this, ::g::Fuse::Node* n)
{
    __this->InvalidateGraphicsView(n);
}

// public void InvalidateSelection() :150
void AppBase__InvalidateSelection_fn(AppBase* __this)
{
    __this->InvalidateSelection();
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState s) :171
void AppBase__OnEnteringBackground_fn(AppBase* __this, int* s)
{
    __this->OnEnteringBackground(*s);
}

// private void OnLowMemory() :176
void AppBase__OnLowMemory_fn(AppBase* __this)
{
    __this->OnLowMemory();
}

// private void OnSelectionChanged(object sender, Uno.EventArgs args) :106
void AppBase__OnSelectionChanged_fn(AppBase* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnSelectionChanged(sender, args);
}

// public void OnUnhandledException(Uno.Exception e, [bool propagate]) :193
void AppBase__OnUnhandledException_fn(AppBase* __this, ::g::Uno::Exception* e, bool* propagate)
{
    __this->OnUnhandledException(e, *propagate);
}

// internal static void OnUnhandledExceptionInternal(Uno.Exception e) :210
void AppBase__OnUnhandledExceptionInternal_fn(::g::Uno::Exception* e)
{
    AppBase::OnUnhandledExceptionInternal(e);
}

// protected virtual void OnUpdate() :286
void AppBase__OnUpdate_fn(AppBase* __this)
{
    ::g::Fuse::UpdateManager::Update();
    ::g::Fuse::UpdateManager::IncreaseFrameIndex();
}

// internal float get_PixelsPerPoint() :86
void AppBase__get_PixelsPerPoint_fn(AppBase* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public Fuse.Properties get_Properties() :44
void AppBase__get_Properties_fn(AppBase* __this, ::g::Fuse::Properties** __retval)
{
    *__retval = __this->Properties();
}

// public generated Fuse.RootViewport get_RootViewport() :39
void AppBase__get_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport** __retval)
{
    *__retval = __this->RootViewport();
}

// protected generated void set_RootViewport(Fuse.RootViewport value) :39
void AppBase__set_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport* value)
{
    __this->RootViewport(value);
}

// public generated void add_UnhandledException(Fuse.UnhandledExceptionHandler value) :186
void AppBase__add_UnhandledException_fn(AppBase* __this, uDelegate* value)
{
    __this->add_UnhandledException(value);
}

// public generated void remove_UnhandledException(Fuse.UnhandledExceptionHandler value) :186
void AppBase__remove_UnhandledException_fn(AppBase* __this, uDelegate* value)
{
    __this->remove_UnhandledException(value);
}

uSStrong< ::g::Fuse::RootViewport*> AppBase::_testRootViewport_;

// protected AppBase() [instance] :47
void AppBase::ctor_2()
{
    _selection = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Visual>*/]));
    ctor_1();
    Background(::g::Uno::Float4__New1(1.0f));
    ::g::Fuse::Platform::Lifecycle::add_EnteringBackground(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)AppBase__OnEnteringBackground_fn, this));
    ::g::Fuse::Platform::AppEvents::add_LowMemoryWarning(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)AppBase__OnLowMemory_fn, this));
    ::g::Fuse::Preview::SelectionManager::add_SelectionChanged(uDelegate::New(::TYPES[4/*Uno.EventHandler<Uno.EventArgs>*/], (void*)AppBase__OnSelectionChanged_fn, this));
}

// public generated float4 get_Background() [instance] :262
::g::Uno::Float4 AppBase::Background()
{
    return _Background;
}

// public generated void set_Background(float4 value) [instance] :262
void AppBase::Background(::g::Uno::Float4 value)
{
    ::g::Uno::Float4 value_ = value;
    _Background = value_;
}

// private void DoInvalidateSelection() [instance] :144
void AppBase::DoInvalidateSelection()
{
    uPtr(RootViewport())->VisitSubtree(uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Node>*/], (void*)AppBase__InvalidateGraphicsView_fn, this));
    _isInvalidateSelectionScheduled = false;
}

// public void DrawSelection(Fuse.DrawContext dc) [instance] :160
void AppBase::DrawSelection(::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > ret3;

    if (uPtr(_selection)->Count() > 0)
    {
        ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_selection), &ret3), ret3);

        {
            const auto __finally_fun = [&]()
            {
                enum1.Dispose(::TYPES[6/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (enum1.MoveNext(::TYPES[6/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]))
            {
                ::g::Fuse::Visual* n = enum1.Current(::TYPES[6/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);
                uPtr(n)->DrawSelection(dc);
            }
        }

        InvalidateSelection();
    }
}

// private void FindSelection(Fuse.Node n) [instance] :117
void AppBase::FindSelection(::g::Fuse::Node* n)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[7/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (::g::Fuse::Preview::SelectionManager::IsSelected(v))
        ::g::Uno::Collections::List__Add_fn(uPtr(_selection), v);
}

// private void InvalidateGraphicsView(Fuse.Node n) [instance] :128
void AppBase::InvalidateGraphicsView(::g::Fuse::Node* n)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[7/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (!uIs(v, ::TYPES[8/*Fuse.IViewport*/]))
        return;

    uPtr(v)->InvalidateVisual();
}

// public void InvalidateSelection() [instance] :150
void AppBase::InvalidateSelection()
{
    if (_isInvalidateSelectionScheduled)
        return;

    ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)AppBase__DoInvalidateSelection_fn, this), 0);
    _isInvalidateSelectionScheduled = true;
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState s) [instance] :171
void AppBase::OnEnteringBackground(int s)
{
    ::g::Fuse::Resources::DisposalManager::Clean(1);
}

// private void OnLowMemory() [instance] :176
void AppBase::OnLowMemory()
{
    ::g::Fuse::Resources::DisposalManager::Clean(2);
}

// private void OnSelectionChanged(object sender, Uno.EventArgs args) [instance] :106
void AppBase::OnSelectionChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uPtr(_selection)->Clear();
    uPtr(RootViewport())->VisitSubtree(uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Node>*/], (void*)AppBase__FindSelection_fn, this));
    InvalidateSelection();
}

// public void OnUnhandledException(Uno.Exception e, [bool propagate]) [instance] :193
void AppBase::OnUnhandledException(::g::Uno::Exception* e, bool propagate)
{
    ::g::Uno::Diagnostics::Debug::Log4(uPtr(e)->ToString(), 3);

    if (::g::Uno::Delegate::op_Inequality(UnhandledException1, NULL))
    {
        ::g::Fuse::UnhandledExceptionArgs* args = ::g::Fuse::UnhandledExceptionArgs::New2(e);
        uPtr(UnhandledException1)->Invoke(2, this, args);

        if (args->IsHandled())
            return;
    }

    if (propagate)
        U_THROW(::g::Fuse::WrapException::New4(e));
}

// internal float get_PixelsPerPoint() [instance] :86
float AppBase::PixelsPerPoint()
{
    if (RootViewport() == NULL)
        return 1.0f;

    return uPtr(RootViewport())->PixelsPerPoint();
}

// public Fuse.Properties get_Properties() [instance] :44
::g::Fuse::Properties* AppBase::Properties()
{
    ::g::Fuse::Properties* ind2;
    ind2 = _properties;
    return (ind2 != NULL) ? ind2 : (::g::Fuse::Properties*)(_properties = ::g::Fuse::Properties::New1());
}

// public generated Fuse.RootViewport get_RootViewport() [instance] :39
::g::Fuse::RootViewport* AppBase::RootViewport()
{
    return _RootViewport;
}

// protected generated void set_RootViewport(Fuse.RootViewport value) [instance] :39
void AppBase::RootViewport(::g::Fuse::RootViewport* value)
{
    _RootViewport = value;
}

// public generated void add_UnhandledException(Fuse.UnhandledExceptionHandler value) [instance] :186
void AppBase::add_UnhandledException(uDelegate* value)
{
    UnhandledException1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UnhandledException1, value), ::TYPES[9/*Fuse.UnhandledExceptionHandler*/]);
}

// public generated void remove_UnhandledException(Fuse.UnhandledExceptionHandler value) [instance] :186
void AppBase::remove_UnhandledException(uDelegate* value)
{
    UnhandledException1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UnhandledException1, value), ::TYPES[9/*Fuse.UnhandledExceptionHandler*/]);
}

// internal static void OnUnhandledExceptionInternal(Uno.Exception e) [static] :210
void AppBase::OnUnhandledExceptionInternal(::g::Uno::Exception* e)
{
    AppBase* app = AppBase::Current2();

    if (app != NULL)
        uPtr(app)->OnUnhandledException(e, true);
}

// public static new Fuse.AppBase get_Current() [static] :220
AppBase* AppBase::Current2()
{
    return uAs<AppBase*>(::g::Uno::Platform::CoreApp::Current(), AppBase_typeof());
}

// internal static Fuse.RootViewport get_CurrentRootViewport() [static] :232
::g::Fuse::RootViewport* AppBase::CurrentRootViewport()
{
    if (AppBase::_testRootViewport_ != NULL)
        return AppBase::_testRootViewport_;

    if (AppBase::Current2() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"No AppBase ...*/]));

    ::g::Fuse::RootViewport* rv = uPtr(AppBase::Current2())->RootViewport();

    if (rv == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"No RootView...*/]));

    return rv;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Behavior.uno
// -----------------------------------------------------------

// public abstract class Behavior :6
// {
static void Behavior_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15);
}

::g::Fuse::Node_type* Behavior_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Behavior);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Behavior", options);
    type->fp_build_ = Behavior_build;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated Behavior() :6
void Behavior__ctor_2_fn(Behavior* __this)
{
    __this->ctor_2();
}

// protected generated Behavior() [instance] :6
void Behavior::ctor_2()
{
    ctor_1();
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Binding.uno
// ----------------------------------------------------------

// public abstract class Binding :5
// {
static void Binding_build(uType* type)
{
    ::STRINGS[2] = uString::Const("double Binding rooting detected");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Binding.uno");
    ::STRINGS[4] = uString::Const("Root");
    ::STRINGS[5] = uString::Const("double Binding unrooting detected");
    ::STRINGS[6] = uString::Const("Unroot");
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(Binding, _Parent), 0);
}

Binding_type* Binding_typeof()
{
    static uSStrong<Binding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Binding);
    options.TypeSize = sizeof(Binding_type);
    type = (Binding_type*)uClassType::New("Fuse.Binding", options);
    type->fp_build_ = Binding_build;
    type->fp_OnRooted = Binding__OnRooted_fn;
    type->fp_OnUnrooted = Binding__OnUnrooted_fn;
    return type;
}

// protected generated Binding() :5
void Binding__ctor__fn(Binding* __this)
{
    __this->ctor_();
}

// protected virtual void OnRooted() :10
void Binding__OnRooted_fn(Binding* __this)
{
}

// protected virtual void OnUnrooted() :11
void Binding__OnUnrooted_fn(Binding* __this)
{
}

// public generated Fuse.Node get_Parent() :8
void Binding__get_Parent_fn(Binding* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Parent();
}

// private generated void set_Parent(Fuse.Node value) :8
void Binding__set_Parent_fn(Binding* __this, ::g::Fuse::Node* value)
{
    __this->Parent(value);
}

// internal void Root(Fuse.Node parent) :13
void Binding__Root_fn(Binding* __this, ::g::Fuse::Node* parent)
{
    __this->Root(parent);
}

// internal void Unroot() :22
void Binding__Unroot_fn(Binding* __this)
{
    __this->Unroot();
}

// protected generated Binding() [instance] :5
void Binding::ctor_()
{
}

// public generated Fuse.Node get_Parent() [instance] :8
::g::Fuse::Node* Binding::Parent()
{
    return _Parent;
}

// private generated void set_Parent(Fuse.Node value) [instance] :8
void Binding::Parent(::g::Fuse::Node* value)
{
    _Parent = value;
}

// internal void Root(Fuse.Node parent) [instance] :13
void Binding::Root(::g::Fuse::Node* parent)
{
    if (Parent() != NULL)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[2/*"double Bind...*/], this, ::STRINGS[3/*"/usr/local/...*/], 16, ::STRINGS[4/*"Root"*/]);

    Parent(parent);
    OnRooted();
}

// internal void Unroot() [instance] :22
void Binding::Unroot()
{
    if (Parent() == NULL)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[5/*"double Bind...*/], this, ::STRINGS[3/*"/usr/local/...*/], 25, ::STRINGS[6/*"Unroot"*/]);

    OnUnrooted();
    Parent(NULL);
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Box.uno
// -------------------------------------------------------

// public struct Box :5
// {
static void Box_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(Box, Minimum), 0,
        ::g::Uno::Float3_typeof(), offsetof(Box, Maximum), 0);
}

uStructType* Box_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Box);
    options.ValueSize = sizeof(Box);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Box", options);
    type->fp_build_ = Box_build;
    return type;
}

// public Box(float3 min, float3 max) :9
void Box__ctor__fn(Box* __this, ::g::Uno::Float3* min, ::g::Uno::Float3* max)
{
    __this->ctor_(*min, *max);
}

// public Box New(float3 min, float3 max) :9
void Box__New1_fn(::g::Uno::Float3* min, ::g::Uno::Float3* max, Box* __retval)
{
    *__retval = Box__New1(*min, *max);
}

// public Box(float3 min, float3 max) [instance] :9
void Box::ctor_(::g::Uno::Float3 min, ::g::Uno::Float3 max)
{
    Minimum = min;
    Maximum = max;
}

// public Box New(float3 min, float3 max) [static] :9
Box Box__New1(::g::Uno::Float3 min, ::g::Uno::Float3 max)
{
    Box obj9;
    obj9.ctor_(min, max);
    return obj9;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/CacheFramebuffer.uno
// --------------------------------------------------------------------

// internal sealed class CacheFramebuffer :8
// {
static void CacheFramebuffer_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Cannot access unpinned CacheFramebuffer");
    type->SetFields(0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(CacheFramebuffer, _fb), 0,
        ::g::Uno::Bool_typeof(), offsetof(CacheFramebuffer, _isContentValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(CacheFramebuffer, _isPinned), 0,
        ::g::Uno::Int_typeof(), offsetof(CacheFramebuffer, _lastFrameUsed), 0,
        ::g::Uno::Graphics::FramebufferFlags_typeof(), offsetof(CacheFramebuffer, _Flags), 0,
        ::g::Uno::Graphics::Format_typeof(), offsetof(CacheFramebuffer, _Format), 0,
        ::g::Uno::Int_typeof(), offsetof(CacheFramebuffer, _Height), 0,
        ::g::Uno::Int_typeof(), offsetof(CacheFramebuffer, _Width), 0);
}

uType* CacheFramebuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(CacheFramebuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.CacheFramebuffer", options);
    type->fp_build_ = CacheFramebuffer_build;
    return type;
}

// public CacheFramebuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :107
void CacheFramebuffer__ctor__fn(CacheFramebuffer* __this, int* width, int* height, int* format, int* flags)
{
    __this->ctor_(*width, *height, *format, *flags);
}

// internal void Collect() :27
void CacheFramebuffer__Collect_fn(CacheFramebuffer* __this)
{
    __this->Collect();
}

// public void Dispose() :34
void CacheFramebuffer__Dispose_fn(CacheFramebuffer* __this)
{
    __this->Dispose();
}

// private void EnsurePinned() :20
void CacheFramebuffer__EnsurePinned_fn(CacheFramebuffer* __this)
{
    __this->EnsurePinned();
}

// public generated Uno.Graphics.FramebufferFlags get_Flags() :105
void CacheFramebuffer__get_Flags_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// private generated void set_Flags(Uno.Graphics.FramebufferFlags value) :105
void CacheFramebuffer__set_Flags_fn(CacheFramebuffer* __this, int* value)
{
    __this->Flags(*value);
}

// public generated Uno.Graphics.Format get_Format() :104
void CacheFramebuffer__get_Format_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Format();
}

// private generated void set_Format(Uno.Graphics.Format value) :104
void CacheFramebuffer__set_Format_fn(CacheFramebuffer* __this, int* value)
{
    __this->Format(*value);
}

// public framebuffer get_Framebuffer() :48
void CacheFramebuffer__get_Framebuffer_fn(CacheFramebuffer* __this, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Framebuffer();
}

// internal int get_FramesSinceLastUse() :76
void CacheFramebuffer__get_FramesSinceLastUse_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->FramesSinceLastUse();
}

// public generated int get_Height() :103
void CacheFramebuffer__get_Height_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Height();
}

// private generated void set_Height(int value) :103
void CacheFramebuffer__set_Height_fn(CacheFramebuffer* __this, int* value)
{
    __this->Height(*value);
}

// public bool get_IsContentValid() :58
void CacheFramebuffer__get_IsContentValid_fn(CacheFramebuffer* __this, bool* __retval)
{
    *__retval = __this->IsContentValid();
}

// public bool get_IsPinned() :14
void CacheFramebuffer__get_IsPinned_fn(CacheFramebuffer* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// public CacheFramebuffer New(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :107
void CacheFramebuffer__New1_fn(int* width, int* height, int* format, int* flags, CacheFramebuffer** __retval)
{
    *__retval = CacheFramebuffer::New1(*width, *height, *format, *flags);
}

// public void Pin() :82
void CacheFramebuffer__Pin_fn(CacheFramebuffer* __this)
{
    __this->Pin();
}

// public void Unpin(bool validate) :94
void CacheFramebuffer__Unpin_fn(CacheFramebuffer* __this, bool* validate)
{
    __this->Unpin(*validate);
}

// public generated int get_Width() :102
void CacheFramebuffer__get_Width_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Width();
}

// private generated void set_Width(int value) :102
void CacheFramebuffer__set_Width_fn(CacheFramebuffer* __this, int* value)
{
    __this->Width(*value);
}

// public CacheFramebuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [instance] :107
void CacheFramebuffer::ctor_(int width, int height, int format, int flags)
{
    Width(width);
    Height(height);
    Format(format);
    Flags(flags);
}

// internal void Collect() [instance] :27
void CacheFramebuffer::Collect()
{
    if (_fb != NULL)
        ::g::Fuse::FramebufferPool::Release(_fb);

    _fb = NULL;
    _isContentValid = false;
}

// public void Dispose() [instance] :34
void CacheFramebuffer::Dispose()
{
    Collect();
    ::g::Fuse::FramebufferPool::UnRegister(this);
}

// private void EnsurePinned() [instance] :20
void CacheFramebuffer::EnsurePinned()
{
    if (!IsPinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[7/*"Cannot acce...*/]));
}

// public generated Uno.Graphics.FramebufferFlags get_Flags() [instance] :105
int CacheFramebuffer::Flags()
{
    return _Flags;
}

// private generated void set_Flags(Uno.Graphics.FramebufferFlags value) [instance] :105
void CacheFramebuffer::Flags(int value)
{
    _Flags = value;
}

// public generated Uno.Graphics.Format get_Format() [instance] :104
int CacheFramebuffer::Format()
{
    return _Format;
}

// private generated void set_Format(Uno.Graphics.Format value) [instance] :104
void CacheFramebuffer::Format(int value)
{
    _Format = value;
}

// public framebuffer get_Framebuffer() [instance] :48
::g::Uno::Graphics::Framebuffer* CacheFramebuffer::Framebuffer()
{
    EnsurePinned();
    return _fb;
}

// internal int get_FramesSinceLastUse() [instance] :76
int CacheFramebuffer::FramesSinceLastUse()
{
    return ::g::Fuse::FramebufferPool::Frame() - _lastFrameUsed;
}

// public generated int get_Height() [instance] :103
int CacheFramebuffer::Height()
{
    return _Height;
}

// private generated void set_Height(int value) [instance] :103
void CacheFramebuffer::Height(int value)
{
    _Height = value;
}

// public bool get_IsContentValid() [instance] :58
bool CacheFramebuffer::IsContentValid()
{
    EnsurePinned();
    return _isContentValid;
}

// public bool get_IsPinned() [instance] :14
bool CacheFramebuffer::IsPinned()
{
    return _isPinned;
}

// public void Pin() [instance] :82
void CacheFramebuffer::Pin()
{
    _isPinned = true;
    _lastFrameUsed = ::g::Fuse::FramebufferPool::Frame();

    if (_fb == NULL)
    {
        _fb = ::g::Fuse::FramebufferPool::Lock(Width(), Height(), Format(), (Flags() & 1) == 1);
        ::g::Fuse::FramebufferPool::Register(this);
    }
}

// public void Unpin(bool validate) [instance] :94
void CacheFramebuffer::Unpin(bool validate)
{
    EnsurePinned();
    _isPinned = false;

    if (validate)
        _isContentValid = true;

    _lastFrameUsed = ::g::Fuse::FramebufferPool::Frame();
}

// public generated int get_Width() [instance] :102
int CacheFramebuffer::Width()
{
    return _Width;
}

// private generated void set_Width(int value) [instance] :102
void CacheFramebuffer::Width(int value)
{
    _Width = value;
}

// public CacheFramebuffer New(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [static] :107
CacheFramebuffer* CacheFramebuffer::New1(int width, int height, int format, int flags)
{
    CacheFramebuffer* obj1 = (CacheFramebuffer*)uNew(CacheFramebuffer_typeof());
    obj1->ctor_(width, height, format, flags);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Interacting.uno
// ---------------------------------------------------------------------

// public enum Visual.CancelInteractionsType :54
uEnumType* Visual__CancelInteractionsType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Visual.CancelInteractionsType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Local", 0LL,
        "Recursive", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Collision.uno
// -------------------------------------------------------------

// public static class Collision :4
// {
static void Collision_build(uType* type)
{
}

uClassType* Collision_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Collision", options);
    type->fp_build_ = Collision_build;
    return type;
}

// public static bool RayIntersectsBox(Fuse.Ray ray, Fuse.Box box, float& distance) :6
void Collision__RayIntersectsBox_fn(::g::Fuse::Ray* ray, ::g::Fuse::Box* box, float* distance, bool* __retval)
{
    *__retval = Collision::RayIntersectsBox(*ray, *box, distance);
}

// public static bool RayIntersectsBox(Fuse.Ray ray, Fuse.Box box, float& distance) [static] :6
bool Collision::RayIntersectsBox(::g::Fuse::Ray ray, ::g::Fuse::Box box, float* distance)
{
    float zeroTolerance = 1e-05f;
    *distance = 0.0f;
    float tmax = 3.402823e+38f;

    if (::g::Uno::Math::Abs1(ray.Direction.X) < 1e-05f)
    {
        if ((ray.Position.X < box.Minimum.X) || (ray.Position.X > box.Maximum.X))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse = 1.0f / ray.Direction.X;
        float t1 = (box.Minimum.X - ray.Position.X) * inverse;
        float t2 = (box.Maximum.X - ray.Position.X) * inverse;

        if (t1 > t2)
        {
            float temp = t1;
            t1 = t2;
            t2 = temp;
        }

        *distance = ::g::Uno::Math::Max1(t1, *distance);
        tmax = ::g::Uno::Math::Min1(t2, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::g::Uno::Math::Abs1(ray.Direction.Y) < 1e-05f)
    {
        if ((ray.Position.Y < box.Minimum.Y) || (ray.Position.Y > box.Maximum.Y))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse1 = 1.0f / ray.Direction.Y;
        float t11 = (box.Minimum.Y - ray.Position.Y) * inverse1;
        float t21 = (box.Maximum.Y - ray.Position.Y) * inverse1;

        if (t11 > t21)
        {
            float temp1 = t11;
            t11 = t21;
            t21 = temp1;
        }

        *distance = ::g::Uno::Math::Max1(t11, *distance);
        tmax = ::g::Uno::Math::Min1(t21, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::g::Uno::Math::Abs1(ray.Direction.Z) < 1e-05f)
    {
        if ((ray.Position.Z < box.Minimum.Z) || (ray.Position.Z > box.Maximum.Z))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse2 = 1.0f / ray.Direction.Z;
        float t12 = (box.Minimum.Z - ray.Position.Z) * inverse2;
        float t22 = (box.Maximum.Z - ray.Position.Z) * inverse2;

        if (t12 > t22)
        {
            float temp2 = t12;
            t12 = t22;
            t22 = temp2;
        }

        *distance = ::g::Uno::Math::Max1(t12, *distance);
        tmax = ::g::Uno::Math::Min1(t22, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    return true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno
// -------------------------------------------------------------

// public sealed class ComputeException :7
// {
static void ComputeException_build(uType* type)
{
    ::STRINGS[8] = uString::Const("Cannot '");
    ::STRINGS[9] = uString::Const("'' objects of type '");
    ::STRINGS[10] = uString::Const("'' and '");
    ::STRINGS[11] = uString::Const("'");
    type->SetFields(4);
}

::g::Uno::Exception_type* ComputeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ComputeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.ComputeException", options);
    type->fp_build_ = ComputeException_build;
    return type;
}

// public ComputeException(string op, object a, object b) :9
void ComputeException__ctor_3_fn(ComputeException* __this, uString* op, uObject* a, uObject* b)
{
    __this->ctor_3(op, a, b);
}

// public ComputeException New(string op, object a, object b) :9
void ComputeException__New4_fn(uString* op, uObject* a, uObject* b, ComputeException** __retval)
{
    *__retval = ComputeException::New4(op, a, b);
}

// public ComputeException(string op, object a, object b) [instance] :9
void ComputeException::ctor_3(uString* op, uObject* a, uObject* b)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[8/*"Cannot '"*/], op), ::STRINGS[9/*"'' objects ...*/]), ::g::Uno::Object::GetType(uPtr(a))), ::STRINGS[10/*"'' and '"*/]), ::g::Uno::Object::GetType(uPtr(b))), ::STRINGS[11/*"'"*/]));
}

// public ComputeException New(string op, object a, object b) [static] :9
ComputeException* ComputeException::New4(uString* op, uObject* a, uObject* b)
{
    ComputeException* obj1 = (ComputeException*)uNew(ComputeException_typeof());
    obj1->ctor_3(op, a, b);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno
// -------------------------------------------------------------

// internal abstract class Computer :14
// {
static void Computer_build(uType* type)
{
}

Computer_type* Computer_typeof()
{
    static uSStrong<Computer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Computer);
    options.TypeSize = sizeof(Computer_type);
    type = (Computer_type*)uClassType::New("Fuse.Computer", options);
    type->fp_build_ = Computer_build;
    return type;
}

// protected generated Computer() :14
void Computer__ctor__fn(Computer* __this)
{
    __this->ctor_();
}

// protected generated Computer() [instance] :14
void Computer::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno
// -------------------------------------------------------------

// internal abstract class Computer<T> :29
// {
static void Computer1_build(uType* type)
{
    ::STRINGS[12] = uString::Const("Add");
    ::STRINGS[13] = uString::Const("Divide");
    ::STRINGS[14] = uString::Const("EqualTo");
    ::STRINGS[15] = uString::Const("GreaterThan");
    ::STRINGS[16] = uString::Const("LessThan");
    ::STRINGS[17] = uString::Const("Multiply");
    ::STRINGS[18] = uString::Const("Subtract");
}

Computer1_type* Computer1_typeof()
{
    static uSStrong<Computer1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer_typeof();
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Computer1);
    options.TypeSize = sizeof(Computer1_type);
    type = (Computer1_type*)uClassType::New("Fuse.Computer`1", options);
    type->fp_build_ = Computer1_build;
    type->fp_Add = (void(*)(::g::Fuse::Computer*, uObject*, uObject*, uObject**))Computer1__Add_fn;
    type->fp_Add1 = Computer1__Add1_fn;
    type->fp_Divide = (void(*)(::g::Fuse::Computer*, uObject*, uObject*, uObject**))Computer1__Divide_fn;
    type->fp_Divide1 = Computer1__Divide1_fn;
    type->fp_EqualTo = (void(*)(::g::Fuse::Computer*, uObject*, uObject*, bool*))Computer1__EqualTo_fn;
    type->fp_EqualTo1 = Computer1__EqualTo1_fn;
    type->fp_GreaterThan = (void(*)(::g::Fuse::Computer*, uObject*, uObject*, bool*))Computer1__GreaterThan_fn;
    type->fp_GreaterThan1 = Computer1__GreaterThan1_fn;
    type->fp_LessThan = (void(*)(::g::Fuse::Computer*, uObject*, uObject*, bool*))Computer1__LessThan_fn;
    type->fp_LessThan1 = Computer1__LessThan1_fn;
    type->fp_Multiply = (void(*)(::g::Fuse::Computer*, uObject*, uObject*, uObject**))Computer1__Multiply_fn;
    type->fp_Multiply1 = Computer1__Multiply1_fn;
    type->fp_Subtract = (void(*)(::g::Fuse::Computer*, uObject*, uObject*, uObject**))Computer1__Subtract_fn;
    type->fp_Subtract1 = Computer1__Subtract1_fn;
    return type;
}

// protected generated Computer() :29
void Computer1__ctor_1_fn(Computer1* __this)
{
    __this->ctor_1();
}

// public override sealed object Add(object a, object b) :32
void Computer1__Add_fn(Computer1* __this, uObject* a, uObject* b, uObject** __retval)
{
    uT ret1(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    uT ret2(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    uT ret3(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    return *__retval = uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), (__this->Add1_ex((__this->Convert_ex(a, &ret2), ret2), (__this->Convert_ex(b, &ret3), ret3), &ret1), ret1)), void();
}

// public virtual T Add(T a, T b) :43
void Computer1__Add1_fn(Computer1* __this, void* a, void* b, uTRef __retval)
{
    U_THROW(::g::Fuse::ComputeException::New4(::STRINGS[12/*"Add"*/], uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), a), uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), b)));
}

// public override sealed object Divide(object a, object b) :35
void Computer1__Divide_fn(Computer1* __this, uObject* a, uObject* b, uObject** __retval)
{
    uT ret4(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    uT ret5(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    uT ret6(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    return *__retval = uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), (__this->Divide1_ex((__this->Convert_ex(a, &ret5), ret5), (__this->Convert_ex(b, &ret6), ret6), &ret4), ret4)), void();
}

// public virtual T Divide(T a, T b) :46
void Computer1__Divide1_fn(Computer1* __this, void* a, void* b, uTRef __retval)
{
    U_THROW(::g::Fuse::ComputeException::New4(::STRINGS[13/*"Divide"*/], uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), a), uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), b)));
}

// public override sealed bool EqualTo(object a, object b) :40
void Computer1__EqualTo_fn(Computer1* __this, uObject* a, uObject* b, bool* __retval)
{
    uT ret8(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    uT ret9(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    bool ret7;
    return *__retval = (__this->EqualTo1_ex((__this->Convert_ex(a, &ret8), ret8), (__this->Convert_ex(b, &ret9), ret9), &ret7), ret7), void();
}

// public virtual bool EqualTo(T a, T b) :51
void Computer1__EqualTo1_fn(Computer1* __this, void* a, void* b, bool* __retval)
{
    U_THROW(::g::Fuse::ComputeException::New4(::STRINGS[14/*"EqualTo"*/], uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), a), uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), b)));
}

// public override sealed bool GreaterThan(object a, object b) :38
void Computer1__GreaterThan_fn(Computer1* __this, uObject* a, uObject* b, bool* __retval)
{
    uT ret14(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    uT ret15(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    bool ret13;
    return *__retval = (__this->GreaterThan1_ex((__this->Convert_ex(a, &ret14), ret14), (__this->Convert_ex(b, &ret15), ret15), &ret13), ret13), void();
}

// public virtual bool GreaterThan(T a, T b) :49
void Computer1__GreaterThan1_fn(Computer1* __this, void* a, void* b, bool* __retval)
{
    U_THROW(::g::Fuse::ComputeException::New4(::STRINGS[15/*"GreaterThan"*/], uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), a), uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), b)));
}

// public override sealed bool LessThan(object a, object b) :36
void Computer1__LessThan_fn(Computer1* __this, uObject* a, uObject* b, bool* __retval)
{
    uT ret20(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    uT ret21(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    bool ret19;
    return *__retval = (__this->LessThan1_ex((__this->Convert_ex(a, &ret20), ret20), (__this->Convert_ex(b, &ret21), ret21), &ret19), ret19), void();
}

// public virtual bool LessThan(T a, T b) :47
void Computer1__LessThan1_fn(Computer1* __this, void* a, void* b, bool* __retval)
{
    U_THROW(::g::Fuse::ComputeException::New4(::STRINGS[16/*"LessThan"*/], uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), a), uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), b)));
}

// public override sealed object Multiply(object a, object b) :34
void Computer1__Multiply_fn(Computer1* __this, uObject* a, uObject* b, uObject** __retval)
{
    uT ret28(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    uT ret29(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    uT ret30(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    return *__retval = uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), (__this->Multiply1_ex((__this->Convert_ex(a, &ret29), ret29), (__this->Convert_ex(b, &ret30), ret30), &ret28), ret28)), void();
}

// public virtual T Multiply(T a, T b) :45
void Computer1__Multiply1_fn(Computer1* __this, void* a, void* b, uTRef __retval)
{
    U_THROW(::g::Fuse::ComputeException::New4(::STRINGS[17/*"Multiply"*/], uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), a), uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), b)));
}

// public override sealed object Subtract(object a, object b) :33
void Computer1__Subtract_fn(Computer1* __this, uObject* a, uObject* b, uObject** __retval)
{
    uT ret31(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    uT ret32(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    uT ret33(__this->__type->GetBase(Computer1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Computer1_typeof())->T(0)->ValueSize));
    return *__retval = uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), (__this->Subtract1_ex((__this->Convert_ex(a, &ret32), ret32), (__this->Convert_ex(b, &ret33), ret33), &ret31), ret31)), void();
}

// public virtual T Subtract(T a, T b) :44
void Computer1__Subtract1_fn(Computer1* __this, void* a, void* b, uTRef __retval)
{
    U_THROW(::g::Fuse::ComputeException::New4(::STRINGS[18/*"Subtract"*/], uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), a), uBoxPtr(__this->__type->GetBase(Computer1_typeof())->T(0), b)));
}

// protected generated Computer() [instance] :29
void Computer1::ctor_1()
{
    ctor_();
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/NodeGroup.uno
// ------------------------------------------------------------

// internal enum NodeGroupBase.ConstructFlags :46
uEnumType* NodeGroupBase__ConstructFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.NodeGroupBase.ConstructFlags", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "DontUseTemplates", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.DataContext.uno
// -------------------------------------------------------------------

// internal abstract class Node.DataFinder :33
// {
static void Node__DataFinder_build(uType* type)
{
    ::STRINGS[19] = uString::Const("");
    ::TYPES[10] = ::g::Fuse::IObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Node__IDataEnumerator_typeof(), offsetof(Node__DataFinder_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Node__DataFinder, _key), 0);
}

Node__DataFinder_type* Node__DataFinder_typeof()
{
    static uSStrong<Node__DataFinder_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Node__DataFinder);
    options.TypeSize = sizeof(Node__DataFinder_type);
    type = (Node__DataFinder_type*)uClassType::New("Fuse.Node.DataFinder", options);
    type->fp_build_ = Node__DataFinder_build;
    type->interface0.fp_NextData = (void(*)(uObject*, uObject*, bool*))Node__DataFinder__NextData_fn;
    return type;
}

// protected DataFinder(string key) :37
void Node__DataFinder__ctor__fn(Node__DataFinder* __this, uString* key)
{
    __this->ctor_(key);
}

// protected string get_Key() :36
void Node__DataFinder__get_Key_fn(Node__DataFinder* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// public bool NextData(object data) :38
void Node__DataFinder__NextData_fn(Node__DataFinder* __this, uObject* data, bool* __retval)
{
    *__retval = __this->NextData(data);
}

// protected DataFinder(string key) [instance] :37
void Node__DataFinder::ctor_(uString* key)
{
    _key = key;
}

// protected string get_Key() [instance] :36
uString* Node__DataFinder::Key()
{
    return _key;
}

// public bool NextData(object data) [instance] :38
bool Node__DataFinder::NextData(uObject* data)
{
    if (::g::Uno::String::op_Equality(_key, ::STRINGS[19/*""*/]))
    {
        Resolve(data);
        return false;
    }
    else
    {
        uObject* obj = uAs<uObject*>(data, ::TYPES[10/*Fuse.IObject*/]);

        if (obj != NULL)
        {
            if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(obj), ::TYPES[10/*Fuse.IObject*/]), _key))
            {
                Resolve(::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[10/*Fuse.IObject*/]), _key));
                return false;
            }
        }
    }

    return true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.ScriptClass.uno
// -------------------------------------------------------------------

// private sealed class Node.DataWatcher :35
// {
static void Node__DataWatcher_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[11] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[12] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Node__IDataEnumerator_typeof(), offsetof(Node__DataWatcher_type, interface0),
        ::g::Fuse::Node__IDataListener_typeof(), offsetof(Node__DataWatcher_type, interface1));
    type->SetFields(1,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(Node__DataWatcher, _context), 0,
        uObject_typeof(), offsetof(Node__DataWatcher, _data), 0,
        ::g::Fuse::Node_typeof(), offsetof(Node__DataWatcher, _node), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(Node__DataWatcher, _updateCallback), 0);
}

Node__DataWatcher_type* Node__DataWatcher_typeof()
{
    static uSStrong<Node__DataWatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node__DataFinder_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Node__DataWatcher);
    options.TypeSize = sizeof(Node__DataWatcher_type);
    type = (Node__DataWatcher_type*)uClassType::New("Fuse.Node.DataWatcher", options);
    type->fp_build_ = Node__DataWatcher_build;
    type->fp_Resolve = (void(*)(::g::Fuse::Node__DataFinder*, uObject*))Node__DataWatcher__Resolve_fn;
    type->interface1.fp_OnDataChanged = (void(*)(uObject*))Node__DataWatcher__FuseNodeIDataListenerOnDataChanged_fn;
    type->interface0.fp_NextData = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Node__DataFinder__NextData_fn;
    return type;
}

// public DataWatcher(Fuse.Node node, Fuse.Scripting.Context context, Fuse.Scripting.Function updateCallback, string key) :41
void Node__DataWatcher__ctor_1_fn(Node__DataWatcher* __this, ::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key)
{
    __this->ctor_1(node, context, updateCallback, key);
}

// public void Dispose() :66
void Node__DataWatcher__Dispose_fn(Node__DataWatcher* __this)
{
    __this->Dispose();
}

// private void Fuse.Node.IDataListener.OnDataChanged() :61
void Node__DataWatcher__FuseNodeIDataListenerOnDataChanged_fn(Node__DataWatcher* __this)
{
    uPtr(__this->_node)->EnumerateData((uObject*)__this);
}

// public DataWatcher New(Fuse.Node node, Fuse.Scripting.Context context, Fuse.Scripting.Function updateCallback, string key) :41
void Node__DataWatcher__New1_fn(::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key, Node__DataWatcher** __retval)
{
    *__retval = Node__DataWatcher::New1(node, context, updateCallback, key);
}

// protected override sealed void Resolve(object data) :72
void Node__DataWatcher__Resolve_fn(Node__DataWatcher* __this, uObject* data)
{
    __this->_data = data;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(__this->_context)->Dispatcher()), ::TYPES[11/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)Node__DataWatcher__Update_fn, __this));
}

// private void Subscribe() :50
void Node__DataWatcher__Subscribe_fn(Node__DataWatcher* __this)
{
    __this->Subscribe();
}

// private void Unsubscribe() :56
void Node__DataWatcher__Unsubscribe_fn(Node__DataWatcher* __this)
{
    __this->Unsubscribe();
}

// private void Update() :78
void Node__DataWatcher__Update_fn(Node__DataWatcher* __this)
{
    __this->Update();
}

// public DataWatcher(Fuse.Node node, Fuse.Scripting.Context context, Fuse.Scripting.Function updateCallback, string key) [instance] :41
void Node__DataWatcher::ctor_1(::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key)
{
    ctor_(key);
    _node = node;
    _context = context;
    _updateCallback = updateCallback;
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)Node__DataWatcher__Subscribe_fn, this));
}

// public void Dispose() [instance] :66
void Node__DataWatcher::Dispose()
{
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)Node__DataWatcher__Unsubscribe_fn, this));
}

// private void Subscribe() [instance] :50
void Node__DataWatcher::Subscribe()
{
    uPtr(_node)->EnumerateData((uObject*)this);
    uPtr(_node)->AddDataListener(Key(), (uObject*)this);
}

// private void Unsubscribe() [instance] :56
void Node__DataWatcher::Unsubscribe()
{
    uPtr(_node)->RemoveDataListener(Key(), (uObject*)this);
}

// private void Update() [instance] :78
void Node__DataWatcher::Update()
{
    uPtr(_updateCallback)->Call(uArray::Init<uObject*>(::TYPES[12/*object[]*/], 1, (uObject*)uPtr(_context)->Unwrap(_data)));
}

// public DataWatcher New(Fuse.Node node, Fuse.Scripting.Context context, Fuse.Scripting.Function updateCallback, string key) [static] :41
Node__DataWatcher* Node__DataWatcher::New1(::g::Fuse::Node* node, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* updateCallback, uString* key)
{
    Node__DataWatcher* obj1 = (Node__DataWatcher*)uNew(Node__DataWatcher_typeof());
    obj1->ctor_1(node, context, updateCallback, key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Deferred.uno
// --------------------------------------------------------------

// internal static class DeferredManager :20
// {
// static generated DeferredManager() :20
static void DeferredManager__cctor__fn(uType* __type)
{
    DeferredManager::_pending_ = ((::g::Uno::Collections::PriorityQueue*)::g::Uno::Collections::PriorityQueue::New1(::TYPES[13/*Uno.Collections.PriorityQueue<Fuse.IDeferred>*/], 0));
    DeferredManager::TimeLimit_ = 0.002;
}

static void DeferredManager_build(uType* type)
{
    ::TYPES[13] = ::g::Uno::Collections::PriorityQueue_typeof()->MakeType(::g::Fuse::IDeferred_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[14] = ::g::Fuse::IDeferred_typeof();
    type->SetFields(0,
        ::TYPES[13/*Uno.Collections.PriorityQueue<Fuse.IDeferred>*/], (uintptr_t)&DeferredManager::_pending_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&DeferredManager::_startFrame_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&DeferredManager::_update_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&DeferredManager::TimeLimit_, uFieldFlagsStatic);
}

uClassType* DeferredManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.DeferredManager", options);
    type->fp_build_ = DeferredManager_build;
    type->fp_cctor_ = DeferredManager__cctor__fn;
    return type;
}

// public static void AddPending(Fuse.IDeferred d, [float2 priority]) :29
void DeferredManager__AddPending_fn(uObject* d, ::g::Uno::Float2* priority)
{
    DeferredManager::AddPending(d, *priority);
}

// private static void CheckUpdate() :43
void DeferredManager__CheckUpdate_fn()
{
    DeferredManager::CheckUpdate();
}

// private static void OnUpdate() :69
void DeferredManager__OnUpdate_fn()
{
    DeferredManager::OnUpdate();
}

uSStrong< ::g::Uno::Collections::PriorityQueue*> DeferredManager::_pending_;
int DeferredManager::_startFrame_;
bool DeferredManager::_update_;
double DeferredManager::TimeLimit_;

// public static void AddPending(Fuse.IDeferred d, [float2 priority]) [static] :29
void DeferredManager::AddPending(uObject* d, ::g::Uno::Float2 priority)
{
    ::g::Uno::Collections::PriorityQueue__Add2_fn(uPtr(DeferredManager::_pending_), d, uCRef(priority));
    DeferredManager::CheckUpdate();
}

// private static void CheckUpdate() [static] :43
void DeferredManager::CheckUpdate()
{
    bool needUpdate = uPtr(DeferredManager::_pending_)->Count() > 0;

    if (needUpdate == DeferredManager::_update_)
        return;

    DeferredManager::_update_ = needUpdate;

    if (DeferredManager::_update_)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)DeferredManager__OnUpdate_fn), 0);
        DeferredManager::_startFrame_ = (::g::Fuse::UpdateManager::FrameIndex() + 1);
    }
    else
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)DeferredManager__OnUpdate_fn), 0);
}

// private static void OnUpdate() [static] :69
void DeferredManager::OnUpdate()
{
    uObject* ret1;

    if (::g::Fuse::UpdateManager::FrameIndex() < DeferredManager::_startFrame_)
        return;

    double startTime = ::g::Uno::Diagnostics::Clock::GetSeconds();

    while (!uPtr(DeferredManager::_pending_)->Empty())
    {
        ::g::Uno::Float4 prio;
        uObject* r = (::g::Uno::Collections::PriorityQueue__PopTop1_fn(uPtr(DeferredManager::_pending_), &prio, &ret1), ret1);

        if (!::g::Fuse::IDeferred::Perform(uInterface(uPtr(r), ::TYPES[14/*Fuse.IDeferred*/])))
            ::g::Uno::Collections::PriorityQueue__Add4_fn(uPtr(DeferredManager::_pending_), r, uCRef(prio));

        double elapsed = ::g::Uno::Diagnostics::Clock::GetSeconds() - startTime;

        if (elapsed > DeferredManager::TimeLimit_)
            break;
    }

    DeferredManager::CheckUpdate();
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Diagnostics.uno
// ---------------------------------------------------------------

// public sealed class Diagnostic :21
// {
static void Diagnostic_build(uType* type)
{
    ::STRINGS[20] = uString::Const("Success");
    ::STRINGS[21] = uString::Const("Error");
    ::STRINGS[22] = uString::Const("Warning");
    ::STRINGS[23] = uString::Const(": ");
    ::STRINGS[24] = uString::Const(" in ");
    ::STRINGS[25] = uString::Const("<");
    ::STRINGS[26] = uString::Const(":");
    ::STRINGS[27] = uString::Const(">");
    ::STRINGS[28] = uString::Const("invalid Type: ");
    type->SetFields(0,
        ::g::Uno::Exception_typeof(), offsetof(Diagnostic, Exception), 0,
        ::g::Uno::String_typeof(), offsetof(Diagnostic, FilePath), 0,
        ::g::Uno::Int_typeof(), offsetof(Diagnostic, LineNumber), 0,
        ::g::Uno::String_typeof(), offsetof(Diagnostic, MemberName), 0,
        ::g::Uno::String_typeof(), offsetof(Diagnostic, Message), 0,
        uObject_typeof(), offsetof(Diagnostic, SourceObject), 0,
        ::g::Fuse::DiagnosticType_typeof(), offsetof(Diagnostic, Type), 0);
}

uType* Diagnostic_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Diagnostic);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Diagnostic", options);
    type->fp_build_ = Diagnostic_build;
    type->fp_ToString = (void(*)(uObject*, uString**))Diagnostic__ToString_fn;
    return type;
}

// public Diagnostic(Fuse.DiagnosticType type, string message, object sourceObject, string filePath, int lineNumber, string memberName, [Uno.Exception exception]) :58
void Diagnostic__ctor__fn(Diagnostic* __this, int* type, uString* message, uObject* sourceObject, uString* filePath, int* lineNumber, uString* memberName, ::g::Uno::Exception* exception)
{
    __this->ctor_(*type, message, sourceObject, filePath, *lineNumber, memberName, exception);
}

// public Diagnostic New(Fuse.DiagnosticType type, string message, object sourceObject, string filePath, int lineNumber, string memberName, [Uno.Exception exception]) :58
void Diagnostic__New1_fn(int* type, uString* message, uObject* sourceObject, uString* filePath, int* lineNumber, uString* memberName, ::g::Uno::Exception* exception, Diagnostic** __retval)
{
    *__retval = Diagnostic::New1(*type, message, sourceObject, filePath, *lineNumber, memberName, exception);
}

// public override sealed string ToString() :70
void Diagnostic__ToString_fn(Diagnostic* __this, uString** __retval)
{
    uString* msg = ::g::Uno::String::Empty_;

    switch (__this->Type)
    {
        case 0:
        {
            msg = ::g::Uno::String::op_Addition2(msg, ::STRINGS[20/*"Success"*/]);
            break;
        }
        case 1:
        {
            msg = ::g::Uno::String::op_Addition2(msg, ::STRINGS[21/*"Error"*/]);
            break;
        }
        case 2:
        {
            msg = ::g::Uno::String::op_Addition2(msg, ::STRINGS[22/*"Warning"*/]);
            break;
        }
        default:
        {
            msg = ::g::Uno::String::op_Addition1(msg, uBox<int>(::g::Fuse::DiagnosticType_typeof(), __this->Type));
            break;
        }
    }

    msg = ::g::Uno::String::op_Addition2(msg, ::STRINGS[23/*": "*/]);

    if (::g::Uno::String::op_Inequality(__this->Message, NULL))
        msg = ::g::Uno::String::op_Addition2(msg, __this->Message);

    if (__this->Exception != NULL)
        msg = ::g::Uno::String::op_Addition2(msg, ::g::Uno::String::op_Addition2(::STRINGS[23/*": "*/], uPtr(__this->Exception)->Message()));

    if (__this->SourceObject != NULL)
        msg = ::g::Uno::String::op_Addition2(msg, ::g::Uno::String::op_Addition1(::STRINGS[24/*" in "*/], __this->SourceObject));

    if (::g::Uno::String::op_Inequality(__this->FilePath, NULL))
        msg = ::g::Uno::String::op_Addition2(msg, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[25/*"<"*/], __this->FilePath), ::STRINGS[26/*":"*/]), uBox<int>(::TYPES[42/*int*/], __this->LineNumber)), ::STRINGS[27/*">"*/]));

    return *__retval = msg, void();
}

// internal Uno.Diagnostics.DebugMessageType get_UnoType() :35
void Diagnostic__get_UnoType_fn(Diagnostic* __this, int* __retval)
{
    *__retval = __this->UnoType();
}

// public Diagnostic(Fuse.DiagnosticType type, string message, object sourceObject, string filePath, int lineNumber, string memberName, [Uno.Exception exception]) [instance] :58
void Diagnostic::ctor_(int type, uString* message, uObject* sourceObject, uString* filePath, int lineNumber, uString* memberName, ::g::Uno::Exception* exception)
{
    Type = type;
    Message = message;
    SourceObject = sourceObject;
    FilePath = filePath;
    LineNumber = lineNumber;
    MemberName = memberName;
    Exception = ::g::Fuse::WrapException::Unwrap(exception);
}

// internal Uno.Diagnostics.DebugMessageType get_UnoType() [instance] :35
int Diagnostic::UnoType()
{
    switch (Type)
    {
        case 0:
            return 1;
        case 2:
        case 4:
        case 5:
        case 6:
            return 2;
        case 1:
        case 3:
            return 3;
        default:
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[28/*"invalid Typ...*/], uBox<int>(::g::Fuse::DiagnosticType_typeof(), Type))));
    }
}

// public Diagnostic New(Fuse.DiagnosticType type, string message, object sourceObject, string filePath, int lineNumber, string memberName, [Uno.Exception exception]) [static] :58
Diagnostic* Diagnostic::New1(int type, uString* message, uObject* sourceObject, uString* filePath, int lineNumber, uString* memberName, ::g::Uno::Exception* exception)
{
    Diagnostic* obj1 = (Diagnostic*)uNew(Diagnostic_typeof());
    obj1->ctor_(type, message, sourceObject, filePath, lineNumber, memberName, exception);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Diagnostics.uno
// ---------------------------------------------------------------

// public delegate void DiagnosticHandler(Fuse.Diagnostic d) :106
uDelegateType* DiagnosticHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.DiagnosticHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Diagnostic_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Diagnostics.uno
// ---------------------------------------------------------------

// public static class Diagnostics :126
// {
static void Diagnostics_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(0,
        ::g::Fuse::DiagnosticHandler_typeof(), (uintptr_t)&Diagnostics::DiagnosticDismissed1_, uFieldFlagsStatic,
        ::g::Fuse::DiagnosticHandler_typeof(), (uintptr_t)&Diagnostics::DiagnosticReported1_, uFieldFlagsStatic);
}

uClassType* Diagnostics_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Diagnostics", options);
    type->fp_build_ = Diagnostics_build;
    return type;
}

// public static void Deprecated(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :276
void Diagnostics__Deprecated_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::Deprecated(msg, obj, filePath, *lineNumber, memberName);
}

// public static generated void add_DiagnosticDismissed(Fuse.DiagnosticHandler value) :129
void Diagnostics__add_DiagnosticDismissed_fn(uDelegate* value)
{
    Diagnostics::add_DiagnosticDismissed(value);
}

// public static generated void remove_DiagnosticDismissed(Fuse.DiagnosticHandler value) :129
void Diagnostics__remove_DiagnosticDismissed_fn(uDelegate* value)
{
    Diagnostics::remove_DiagnosticDismissed(value);
}

// public static generated void add_DiagnosticReported(Fuse.DiagnosticHandler value) :128
void Diagnostics__add_DiagnosticReported_fn(uDelegate* value)
{
    Diagnostics::add_DiagnosticReported(value);
}

// public static generated void remove_DiagnosticReported(Fuse.DiagnosticHandler value) :128
void Diagnostics__remove_DiagnosticReported_fn(uDelegate* value)
{
    Diagnostics::remove_DiagnosticReported(value);
}

// private static void Dismiss(Fuse.Diagnostic d) :131
void Diagnostics__Dismiss_fn(::g::Fuse::Diagnostic* d)
{
    Diagnostics::Dismiss(d);
}

// public static void InternalError(string msg, [object obj], [string filePath], [int lineNumber], [string memberName]) :258
void Diagnostics__InternalError_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::InternalError(msg, obj, filePath, *lineNumber, memberName);
}

// public static void Report(Fuse.Diagnostic d) :137
void Diagnostics__Report_fn(::g::Fuse::Diagnostic* d)
{
    Diagnostics::Report(d);
}

// public static Uno.IDisposable ReportTemporal(Fuse.Diagnostic d) :167
void Diagnostics__ReportTemporal_fn(::g::Fuse::Diagnostic* d, uObject** __retval)
{
    *__retval = Diagnostics::ReportTemporal(d);
}

// public static Uno.IDisposable ReportTemporalUserWarning(string message, object origin) :196
void Diagnostics__ReportTemporalUserWarning_fn(uString* message, uObject* origin, uObject** __retval)
{
    *__retval = Diagnostics::ReportTemporalUserWarning(message, origin);
}

// public static void UnknownException(string msg, Uno.Exception ex, object obj, [string filePath], [int lineNumber], [string memberName]) :269
void Diagnostics__UnknownException_fn(uString* msg, ::g::Uno::Exception* ex, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::UnknownException(msg, ex, obj, filePath, *lineNumber, memberName);
}

// public static void Unsupported(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :283
void Diagnostics__Unsupported_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::Unsupported(msg, obj, filePath, *lineNumber, memberName);
}

// public static void UserError(string msg, object obj, [string filePath], [int lineNumber], [string memberName], [Uno.Exception e]) :208
void Diagnostics__UserError_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName, ::g::Uno::Exception* e)
{
    Diagnostics::UserError(msg, obj, filePath, *lineNumber, memberName, e);
}

// public static void UserRootError(string expectedType, object actualParent, object obj, [string filePath], [int lineNumber], [string memberName]) :246
void Diagnostics__UserRootError_fn(uString* expectedType, uObject* actualParent, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::UserRootError(expectedType, actualParent, obj, filePath, *lineNumber, memberName);
}

// public static void UserSuccess(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :219
void Diagnostics__UserSuccess_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::UserSuccess(msg, obj, filePath, *lineNumber, memberName);
}

// private static string UserTypeOf(object a) :231
void Diagnostics__UserTypeOf_fn(uObject* a, uString** __retval)
{
    *__retval = Diagnostics::UserTypeOf(a);
}

// public static void UserWarning(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :304
void Diagnostics__UserWarning_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::UserWarning(msg, obj, filePath, *lineNumber, memberName);
}

uSStrong<uDelegate*> Diagnostics::DiagnosticDismissed1_;
uSStrong<uDelegate*> Diagnostics::DiagnosticReported1_;

// public static void Deprecated(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :276
void Diagnostics::Deprecated(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(4, msg, obj, filePath, lineNumber, memberName, NULL));
}

// private static void Dismiss(Fuse.Diagnostic d) [static] :131
void Diagnostics::Dismiss(::g::Fuse::Diagnostic* d)
{
    if (::g::Uno::Delegate::op_Inequality(Diagnostics::DiagnosticDismissed1_, NULL))
        uPtr(Diagnostics::DiagnosticDismissed1_)->InvokeVoid(d);
}

// public static void InternalError(string msg, [object obj], [string filePath], [int lineNumber], [string memberName]) [static] :258
void Diagnostics::InternalError(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(3, msg, obj, filePath, lineNumber, memberName, NULL));
}

// public static void Report(Fuse.Diagnostic d) [static] :137
void Diagnostics::Report(::g::Fuse::Diagnostic* d)
{
    if (::g::Uno::Delegate::op_Inequality(Diagnostics::DiagnosticReported1_, NULL))
        uPtr(Diagnostics::DiagnosticReported1_)->InvokeVoid(d);
    else
        ::g::Uno::Diagnostics::Debug::Log4(uPtr(d)->ToString(), uPtr(d)->UnoType());
}

// public static Uno.IDisposable ReportTemporal(Fuse.Diagnostic d) [static] :167
uObject* Diagnostics::ReportTemporal(::g::Fuse::Diagnostic* d)
{
    return (uObject*)Diagnostics__Temporal::New1(d);
}

// public static Uno.IDisposable ReportTemporalUserWarning(string message, object origin) [static] :196
uObject* Diagnostics::ReportTemporalUserWarning(uString* message, uObject* origin)
{
    return Diagnostics::ReportTemporal(::g::Fuse::Diagnostic::New1(2, message, origin, NULL, 0, NULL, NULL));
}

// public static void UnknownException(string msg, Uno.Exception ex, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :269
void Diagnostics::UnknownException(uString* msg, ::g::Uno::Exception* ex, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(3, msg, obj, filePath, lineNumber, memberName, ex));
}

// public static void Unsupported(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :283
void Diagnostics::Unsupported(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(5, msg, obj, filePath, lineNumber, memberName, NULL));
}

// public static void UserError(string msg, object obj, [string filePath], [int lineNumber], [string memberName], [Uno.Exception e]) [static] :208
void Diagnostics::UserError(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName, ::g::Uno::Exception* e)
{
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(1, msg, obj, filePath, lineNumber, memberName, e));
}

// public static void UserRootError(string expectedType, object actualParent, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :246
void Diagnostics::UserRootError(uString* expectedType, uObject* actualParent, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(Diagnostics::UserTypeOf(obj), uString::Const(" cannot be used in a ")), Diagnostics::UserTypeOf(actualParent)), ::STRINGS[63/*"."*/]), uString::Const(" A ")), expectedType), uString::Const(" parent is expected")), obj, filePath, lineNumber, memberName, NULL);
}

// public static void UserSuccess(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :219
void Diagnostics::UserSuccess(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(0, msg, obj, filePath, lineNumber, memberName, NULL));
}

// private static string UserTypeOf(object a) [static] :231
uString* Diagnostics::UserTypeOf(uObject* a)
{
    uString* q = ::g::Uno::String::op_Addition1(::STRINGS[19/*""*/], a);
    int e = ::g::Uno::String::LastIndexOf(uPtr(q), '.');

    if (e == -1)
        e = 0;
    else
        e = e + 1;

    return ::g::Uno::String::Substring(q, e);
}

// public static void UserWarning(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :304
void Diagnostics::UserWarning(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(2, msg, obj, filePath, lineNumber, memberName, NULL));
}

// public static generated void add_DiagnosticDismissed(Fuse.DiagnosticHandler value) [static] :129
void Diagnostics::add_DiagnosticDismissed(uDelegate* value)
{
    Diagnostics::DiagnosticDismissed1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Diagnostics::DiagnosticDismissed1_, value), ::g::Fuse::DiagnosticHandler_typeof());
}

// public static generated void remove_DiagnosticDismissed(Fuse.DiagnosticHandler value) [static] :129
void Diagnostics::remove_DiagnosticDismissed(uDelegate* value)
{
    Diagnostics::DiagnosticDismissed1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Diagnostics::DiagnosticDismissed1_, value), ::g::Fuse::DiagnosticHandler_typeof());
}

// public static generated void add_DiagnosticReported(Fuse.DiagnosticHandler value) [static] :128
void Diagnostics::add_DiagnosticReported(uDelegate* value)
{
    Diagnostics::DiagnosticReported1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Diagnostics::DiagnosticReported1_, value), ::g::Fuse::DiagnosticHandler_typeof());
}

// public static generated void remove_DiagnosticReported(Fuse.DiagnosticHandler value) [static] :128
void Diagnostics::remove_DiagnosticReported(uDelegate* value)
{
    Diagnostics::DiagnosticReported1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Diagnostics::DiagnosticReported1_, value), ::g::Fuse::DiagnosticHandler_typeof());
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Diagnostics.uno
// ---------------------------------------------------------------

// public enum DiagnosticType :7
uEnumType* DiagnosticType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.DiagnosticType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "UserSuccess", 0LL,
        "UserError", 1LL,
        "UserWarning", 2LL,
        "InternalError", 3LL,
        "Deprecated", 4LL,
        "Unsupported", 5LL,
        "PerformanceWarning", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/DrawContext.uno
// --------------------------------------------------------------

// public sealed class DrawContext :28
// {
static void DrawContext_build(uType* type)
{
    ::STRINGS[29] = uString::Const("/usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/DrawContext.uno");
    ::STRINGS[30] = uString::Const("CaptureRootbuffer");
    ::STRINGS[19] = uString::Const("");
    ::STRINGS[31] = uString::Const("Clear");
    ::STRINGS[32] = uString::Const("PopRenderTarget");
    ::STRINGS[33] = uString::Const("PushRenderTarget");
    ::STRINGS[34] = uString::Const("Unpopped Scissor");
    ::STRINGS[35] = uString::Const("ReleaseRootbuffer");
    ::STRINGS[36] = uString::Const("Unpopped CullFace");
    ::STRINGS[37] = uString::Const("Unpopped Viewport");
    ::STRINGS[38] = uString::Const("Unpopped RenderTarget");
    ::STRINGS[39] = uString::Const("set_GLFramebuffer");
    ::STRINGS[40] = uString::Const("set_GLScissor");
    ::STRINGS[41] = uString::Const("set_GLViewportPixelSize");
    ::TYPES[15] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IRenderViewport_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::RenderTargetEntry_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int4_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::PolygonFace_typeof(), NULL);
    ::TYPES[19] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[20] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(0/*RemoveLast<Fuse.RenderTargetEntry>*/, ::g::Fuse::RenderTargetEntry_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(0/*RemoveLast<int4>*/, ::g::Uno::Int4_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(0/*RemoveLast<Fuse.IRenderViewport>*/, ::TYPES[19/*Fuse.IRenderViewport*/], NULL);
    ::TYPES[23] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[24] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Uno::EventArgs_typeof(),
        ::g::Fuse::Platform::SystemUI_typeof());
    type->SetFields(0,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(DrawContext, _cullFace), 0,
        ::TYPES[18/*Uno.Collections.List<Uno.Graphics.PolygonFace>*/], offsetof(DrawContext, _cullFaces), 0,
        ::g::OpenGL::GLFramebufferHandle_typeof(), offsetof(DrawContext, _glFramebuffer), 0,
        ::g::Uno::Int4_typeof(), offsetof(DrawContext, _glScissor), 0,
        ::TYPES[17/*Uno.Collections.List<int4>*/], offsetof(DrawContext, _glScissors), 0,
        ::g::Uno::Int4_typeof(), offsetof(DrawContext, _glViewport), 0,
        ::g::Uno::Runtime::Implementation::GraphicsContextHandle_typeof(), offsetof(DrawContext, _handle), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(DrawContext, _renderTarget), 0,
        ::TYPES[16/*Uno.Collections.List<Fuse.RenderTargetEntry>*/], offsetof(DrawContext, _renderTargets), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(DrawContext, _rootbuffer), 0,
        ::TYPES[19/*Fuse.IRenderViewport*/], offsetof(DrawContext, _viewport), 0,
        ::TYPES[15/*Uno.Collections.List<Fuse.IRenderViewport>*/], offsetof(DrawContext, _viewports), 0,
        ::g::Uno::Bool_typeof(), offsetof(DrawContext, _IsCaching), 0,
        ::TYPES[24/*Uno.EventHandler*/], offsetof(DrawContext, RenderTargetChange1), 0);
}

uType* DrawContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(DrawContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.DrawContext", options);
    type->fp_build_ = DrawContext_build;
    return type;
}

// public DrawContext(Fuse.IRenderViewport viewport) :61
void DrawContext__ctor__fn(DrawContext* __this, uObject* viewport)
{
    __this->ctor_(viewport);
}

// internal void CaptureRootbuffer() :81
void DrawContext__CaptureRootbuffer_fn(DrawContext* __this)
{
    __this->CaptureRootbuffer();
}

// private void CheckGLError([string filePath], [int lineNumber], [string memberName]) :367
void DrawContext__CheckGLError_fn(DrawContext* __this, uString* filePath, int* lineNumber, uString* memberName)
{
    __this->CheckGLError(filePath, *lineNumber, memberName);
}

// public void Clear(float4 color, [float depth]) :232
void DrawContext__Clear_fn(DrawContext* __this, ::g::Uno::Float4* color, float* depth)
{
    __this->Clear(*color, *depth);
}

// public Uno.Graphics.PolygonFace get_CullFace() :353
void DrawContext__get_CullFace_fn(DrawContext* __this, int* __retval)
{
    *__retval = __this->CullFace();
}

// public float4x4 GetLocalToClipTransform(Fuse.Visual n) :51
void DrawContext__GetLocalToClipTransform_fn(DrawContext* __this, ::g::Fuse::Visual* n, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetLocalToClipTransform(n);
}

// internal Fuse.RenderTargetEntry GetRenderTargetEntry() :156
void DrawContext__GetRenderTargetEntry_fn(DrawContext* __this, ::g::Fuse::RenderTargetEntry** __retval)
{
    *__retval = __this->GetRenderTargetEntry();
}

// private extern OpenGL.GLFramebufferHandle get_GLFramebuffer() :138
void DrawContext__get_GLFramebuffer_fn(DrawContext* __this, uint32_t* __retval)
{
    *__retval = __this->GLFramebuffer();
}

// private extern void set_GLFramebuffer(OpenGL.GLFramebufferHandle value) :148
void DrawContext__set_GLFramebuffer_fn(DrawContext* __this, uint32_t* value)
{
    __this->GLFramebuffer(*value);
}

// private int4 get_GLScissor() :264
void DrawContext__get_GLScissor_fn(DrawContext* __this, ::g::Uno::Int4* __retval)
{
    *__retval = __this->GLScissor();
}

// private void set_GLScissor(int4 value) :275
void DrawContext__set_GLScissor_fn(DrawContext* __this, ::g::Uno::Int4* value)
{
    __this->GLScissor(*value);
}

// public int2 get_GLViewportPixelSize() :308
void DrawContext__get_GLViewportPixelSize_fn(DrawContext* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->GLViewportPixelSize();
}

// private void set_GLViewportPixelSize(int2 value) :319
void DrawContext__set_GLViewportPixelSize_fn(DrawContext* __this, ::g::Uno::Int2* value)
{
    __this->GLViewportPixelSize(*value);
}

// public generated bool get_IsCaching() :347
void DrawContext__get_IsCaching_fn(DrawContext* __this, bool* __retval)
{
    *__retval = __this->IsCaching();
}

// public generated void set_IsCaching(bool value) :347
void DrawContext__set_IsCaching_fn(DrawContext* __this, bool* value)
{
    __this->IsCaching(*value);
}

// public DrawContext New(Fuse.IRenderViewport viewport) :61
void DrawContext__New1_fn(uObject* viewport, DrawContext** __retval)
{
    *__retval = DrawContext::New1(viewport);
}

// internal void OnRenderTargetChange() :75
void DrawContext__OnRenderTargetChange_fn(DrawContext* __this)
{
    __this->OnRenderTargetChange();
}

// public void PopRenderTarget() :194
void DrawContext__PopRenderTarget_fn(DrawContext* __this)
{
    __this->PopRenderTarget();
}

// public void PopRenderTargetFrustum() :220
void DrawContext__PopRenderTargetFrustum_fn(DrawContext* __this)
{
    __this->PopRenderTargetFrustum();
}

// public void PopScissor() :294
void DrawContext__PopScissor_fn(DrawContext* __this)
{
    __this->PopScissor();
}

// public void PopViewport() :45
void DrawContext__PopViewport_fn(DrawContext* __this)
{
    __this->PopViewport();
}

// public void PushRenderTarget(framebuffer fb) :164
void DrawContext__PushRenderTarget_fn(DrawContext* __this, ::g::Uno::Graphics::Framebuffer* fb)
{
    __this->PushRenderTarget(fb);
}

// public void PushRenderTarget(Uno.Graphics.RenderTarget rt) :169
void DrawContext__PushRenderTarget1_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget* rt)
{
    __this->PushRenderTarget1(rt);
}

// private void PushRenderTarget(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glscissor) :174
void DrawContext__PushRenderTarget2_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glscissor)
{
    __this->PushRenderTarget2(rt, *viewportPixelSize, *glscissor);
}

// public void PushRenderTargetFrustum(framebuffer fb, Fuse.IFrustum frustum) :208
void DrawContext__PushRenderTargetFrustum_fn(DrawContext* __this, ::g::Uno::Graphics::Framebuffer* fb, uObject* frustum)
{
    __this->PushRenderTargetFrustum(fb, frustum);
}

// public void PushScissor(Uno.Recti scissor) :288
void DrawContext__PushScissor_fn(DrawContext* __this, ::g::Uno::Recti* scissor)
{
    __this->PushScissor(*scissor);
}

// public void PushViewport(Fuse.IRenderViewport v) :38
void DrawContext__PushViewport_fn(DrawContext* __this, uObject* v)
{
    __this->PushViewport(v);
}

// internal void ReleaseRootbuffer() :107
void DrawContext__ReleaseRootbuffer_fn(DrawContext* __this)
{
    __this->ReleaseRootbuffer();
}

// public Uno.Graphics.RenderTarget get_RenderTarget() :132
void DrawContext__get_RenderTarget_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget** __retval)
{
    *__retval = __this->RenderTarget();
}

// public generated void add_RenderTargetChange(Uno.EventHandler value) :73
void DrawContext__add_RenderTargetChange_fn(DrawContext* __this, uDelegate* value)
{
    __this->add_RenderTargetChange(value);
}

// public generated void remove_RenderTargetChange(Uno.EventHandler value) :73
void DrawContext__remove_RenderTargetChange_fn(DrawContext* __this, uDelegate* value)
{
    __this->remove_RenderTargetChange(value);
}

// public Uno.Recti get_Scissor() :246
void DrawContext__get_Scissor_fn(DrawContext* __this, ::g::Uno::Recti* __retval)
{
    *__retval = __this->Scissor();
}

// internal void set_Scissor(Uno.Recti value) :254
void DrawContext__set_Scissor_fn(DrawContext* __this, ::g::Uno::Recti* value)
{
    __this->Scissor(*value);
}

// public Fuse.IRenderViewport get_Viewport() :34
void DrawContext__get_Viewport_fn(DrawContext* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// public float get_ViewportPixelsPerPoint() :341
void DrawContext__get_ViewportPixelsPerPoint_fn(DrawContext* __this, float* __retval)
{
    *__retval = __this->ViewportPixelsPerPoint();
}

// public DrawContext(Fuse.IRenderViewport viewport) [instance] :61
void DrawContext::ctor_(uObject* viewport)
{
    _viewports = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[15/*Uno.Collections.List<Fuse.IRenderViewport>*/]));
    _renderTargets = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[16/*Uno.Collections.List<Fuse.RenderTargetEntry>*/]));
    _glScissors = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[17/*Uno.Collections.List<int4>*/]));
    _cullFaces = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[18/*Uno.Collections.List<Uno.Graphics.PolygonFace>*/]));
    _handle = (void*)NULL;
    _viewport = viewport;
    _rootbuffer = ::g::Uno::Graphics::RenderTarget::New1();
    _renderTarget = _rootbuffer;
}

// internal void CaptureRootbuffer() [instance] :81
void DrawContext::CaptureRootbuffer()
{
    ::g::OpenGL::GL::Enable(3089);
    CheckGLError(::STRINGS[29/*"/usr/local/...*/], 86, ::STRINGS[30/*"CaptureRoot...*/]);
    _glScissor = ::g::OpenGL::GL::GetInteger(3088);
    _glViewport = ::g::OpenGL::GL::GetInteger(2978);
    _glFramebuffer = ::g::OpenGL::GL::GetFramebufferBinding();
    uPtr(_rootbuffer)->GLFramebufferHandle(_glFramebuffer);
    ::g::Uno::Float2 size = ::g::Fuse::Platform::SystemUI::Frame().Size();
    uPtr(_rootbuffer)->Size(::g::Uno::Int2__New2((int)size.X, (int)size.Y));
    uPtr(_rootbuffer)->HasDepth(true);
}

// private void CheckGLError([string filePath], [int lineNumber], [string memberName]) [instance] :367
void DrawContext::CheckGLError(uString* filePath, int lineNumber, uString* memberName)
{
    int e = ::g::OpenGL::GL::GetError();

    if (e != 0)
        ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(::STRINGS[19/*""*/], uBox<int>(::g::OpenGL::GLError_typeof(), e)), this, filePath, lineNumber, memberName);
}

// public void Clear(float4 color, [float depth]) [instance] :232
void DrawContext::Clear(::g::Uno::Float4 color, float depth)
{
    ::g::OpenGL::GL::ClearDepth(depth);
    ::g::OpenGL::GL::ClearColor(color.X, color.Y, color.Z, color.W);
    ::g::OpenGL::GL::Clear(17664);
    CheckGLError(::STRINGS[29/*"/usr/local/...*/], 240, ::STRINGS[31/*"Clear"*/]);
}

// public Uno.Graphics.PolygonFace get_CullFace() [instance] :353
int DrawContext::CullFace()
{
    return _cullFace;
}

// public float4x4 GetLocalToClipTransform(Fuse.Visual n) [instance] :51
::g::Uno::Float4x4 DrawContext::GetLocalToClipTransform(::g::Fuse::Visual* n)
{
    ::g::Uno::Float4x4 m = uPtr(n)->WorldTransform();
    ::g::Uno::Float4x4 p = ::g::Uno::Matrix::Mul8(m, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(_viewport), ::TYPES[19/*Fuse.IRenderViewport*/])));
    return p;
}

// internal Fuse.RenderTargetEntry GetRenderTargetEntry() [instance] :156
::g::Fuse::RenderTargetEntry* DrawContext::GetRenderTargetEntry()
{
    return ::g::Fuse::RenderTargetEntry::New1(RenderTarget(), GLViewportPixelSize(), GLScissor(), GLFramebuffer());
    return NULL;
}

// private extern OpenGL.GLFramebufferHandle get_GLFramebuffer() [instance] :138
uint32_t DrawContext::GLFramebuffer()
{
    return _glFramebuffer;
}

// private extern void set_GLFramebuffer(OpenGL.GLFramebufferHandle value) [instance] :148
void DrawContext::GLFramebuffer(uint32_t value)
{
    _glFramebuffer = value;
    ::g::OpenGL::GL::BindFramebuffer(36160, value);
    CheckGLError(::STRINGS[29/*"/usr/local/...*/], 152, ::STRINGS[39/*"set_GLFrame...*/]);
}

// private int4 get_GLScissor() [instance] :264
::g::Uno::Int4 DrawContext::GLScissor()
{
    return _glScissor;
}

// private void set_GLScissor(int4 value) [instance] :275
void DrawContext::GLScissor(::g::Uno::Int4 value)
{
    _glScissor = value;
    ::g::OpenGL::GL::Scissor(value.Item(0), value.Item(1), value.Item(2), value.Item(3));
    CheckGLError(::STRINGS[29/*"/usr/local/...*/], 281, ::STRINGS[40/*"set_GLScissor"*/]);
}

// public int2 get_GLViewportPixelSize() [instance] :308
::g::Uno::Int2 DrawContext::GLViewportPixelSize()
{
    ::g::Uno::Int4 ind1;
    ind1 = _glViewport;
    return ::g::Uno::Int2__New2(ind1.Z, ind1.W);
}

// private void set_GLViewportPixelSize(int2 value) [instance] :319
void DrawContext::GLViewportPixelSize(::g::Uno::Int2 value)
{
    _glViewport = ::g::Uno::Int4__New2(0, 0, value.X, value.Y);
    ::g::OpenGL::GL::Viewport(0, 0, value.X, value.Y);
    CheckGLError(::STRINGS[29/*"/usr/local/...*/], 325, ::STRINGS[41/*"set_GLViewp...*/]);
}

// public generated bool get_IsCaching() [instance] :347
bool DrawContext::IsCaching()
{
    return _IsCaching;
}

// public generated void set_IsCaching(bool value) [instance] :347
void DrawContext::IsCaching(bool value)
{
    _IsCaching = value;
}

// internal void OnRenderTargetChange() [instance] :75
void DrawContext::OnRenderTargetChange()
{
    if (::g::Uno::Delegate::op_Inequality(RenderTargetChange1, NULL))
        uPtr(RenderTargetChange1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// public void PopRenderTarget() [instance] :194
void DrawContext::PopRenderTarget()
{
    ::g::Fuse::RenderTargetEntry* ret4;
    OnRenderTargetChange();
    ::g::Fuse::RenderTargetEntry* old = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[20/*Uno.Collections.IListExtensions.RemoveLast<Fuse.RenderTargetEntry>*/], (uObject*)_renderTargets, &ret4), ret4);
    _renderTarget = uPtr(old)->RenderTarget;
    GLFramebuffer(uPtr(old)->GLFramebuffer);
    CheckGLError(::STRINGS[29/*"/usr/local/...*/], 202, ::STRINGS[32/*"PopRenderTa...*/]);
    GLViewportPixelSize(old->GLViewportPixelSize);
    GLScissor(old->GLScissor);
}

// public void PopRenderTargetFrustum() [instance] :220
void DrawContext::PopRenderTargetFrustum()
{
    PopViewport();
    PopRenderTarget();
}

// public void PopScissor() [instance] :294
void DrawContext::PopScissor()
{
    ::g::Uno::Int4 ret5;
    ::g::Uno::Int4 s = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[21/*Uno.Collections.IListExtensions.RemoveLast<int4>*/], (uObject*)_glScissors, &ret5), ret5);
    GLScissor(s);
}

// public void PopViewport() [instance] :45
void DrawContext::PopViewport()
{
    uObject* ret6;
    OnRenderTargetChange();
    _viewport = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[22/*Uno.Collections.IListExtensions.RemoveLast<Fuse.IRenderViewport>*/], (uObject*)_viewports, &ret6), ret6);
}

// public void PushRenderTarget(framebuffer fb) [instance] :164
void DrawContext::PushRenderTarget(::g::Uno::Graphics::Framebuffer* fb)
{
    PushRenderTarget1(uPtr(fb)->RenderTarget());
}

// public void PushRenderTarget(Uno.Graphics.RenderTarget rt) [instance] :169
void DrawContext::PushRenderTarget1(::g::Uno::Graphics::RenderTarget* rt)
{
    PushRenderTarget2(rt, uPtr(rt)->Size(), ::g::Uno::Int4__New2(0, 0, uPtr(rt)->Size().X, uPtr(rt)->Size().Y));
}

// private void PushRenderTarget(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glscissor) [instance] :174
void DrawContext::PushRenderTarget2(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glscissor)
{
    OnRenderTargetChange();
    ::g::Uno::Collections::List__Add_fn(uPtr(_renderTargets), GetRenderTargetEntry());
    GLFramebuffer(uPtr(rt)->GLFramebufferHandle());
    CheckGLError(::STRINGS[29/*"/usr/local/...*/], 181, ::STRINGS[33/*"PushRenderT...*/]);
    _renderTarget = rt;
    GLViewportPixelSize(viewportPixelSize);
    GLScissor(glscissor);
}

// public void PushRenderTargetFrustum(framebuffer fb, Fuse.IFrustum frustum) [instance] :208
void DrawContext::PushRenderTargetFrustum(::g::Uno::Graphics::Framebuffer* fb, uObject* frustum)
{
    PushRenderTarget2(uPtr(fb)->RenderTarget(), uPtr(fb)->Size(), ::g::Uno::Int4__New7(::g::Uno::Int2__New2(0, 0), uPtr(fb)->Size()));
    PushViewport((uObject*)::g::Fuse::FixedViewport::New1(fb->Size(), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(Viewport()), ::TYPES[23/*Fuse.ICommonViewport*/])), frustum));
}

// public void PushScissor(Uno.Recti scissor) [instance] :288
void DrawContext::PushScissor(::g::Uno::Recti scissor)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_glScissors), uCRef(GLScissor()));
    Scissor(scissor);
}

// public void PushViewport(Fuse.IRenderViewport v) [instance] :38
void DrawContext::PushViewport(uObject* v)
{
    OnRenderTargetChange();
    ::g::Uno::Collections::List__Add_fn(uPtr(_viewports), _viewport);
    _viewport = v;
}

// internal void ReleaseRootbuffer() [instance] :107
void DrawContext::ReleaseRootbuffer()
{
    if (uPtr(_glScissors)->Count() > 0)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[34/*"Unpopped Sc...*/], this, ::STRINGS[29/*"/usr/local/...*/], 112, ::STRINGS[35/*"ReleaseRoot...*/]);

    uPtr(_glScissors)->Clear();

    if (uPtr(_cullFaces)->Count() > 0)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[36/*"Unpopped Cu...*/], this, ::STRINGS[29/*"/usr/local/...*/], 116, ::STRINGS[35/*"ReleaseRoot...*/]);

    uPtr(_cullFaces)->Clear();

    if (uPtr(_viewports)->Count() > 0)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[37/*"Unpopped Vi...*/], this, ::STRINGS[29/*"/usr/local/...*/], 120, ::STRINGS[35/*"ReleaseRoot...*/]);

    uPtr(_viewports)->Clear();

    if (uPtr(_renderTargets)->Count() > 0)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[38/*"Unpopped Re...*/], this, ::STRINGS[29/*"/usr/local/...*/], 124, ::STRINGS[35/*"ReleaseRoot...*/]);

    uPtr(_renderTargets)->Clear();
}

// public Uno.Graphics.RenderTarget get_RenderTarget() [instance] :132
::g::Uno::Graphics::RenderTarget* DrawContext::RenderTarget()
{
    return _renderTarget;
}

// public generated void add_RenderTargetChange(Uno.EventHandler value) [instance] :73
void DrawContext::add_RenderTargetChange(uDelegate* value)
{
    RenderTargetChange1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RenderTargetChange1, value), ::TYPES[24/*Uno.EventHandler*/]);
}

// public generated void remove_RenderTargetChange(Uno.EventHandler value) [instance] :73
void DrawContext::remove_RenderTargetChange(uDelegate* value)
{
    RenderTargetChange1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RenderTargetChange1, value), ::TYPES[24/*Uno.EventHandler*/]);
}

// public Uno.Recti get_Scissor() [instance] :246
::g::Uno::Recti DrawContext::Scissor()
{
    ::g::Uno::Int2 vsz = GLViewportPixelSize();
    ::g::Uno::Int4 gl = GLScissor();
    int x = gl.X;
    int y = -gl.W - (gl.Y - vsz.Y);
    return ::g::Uno::Recti__New1(x, y, x + gl.Z, y + gl.W);
}

// internal void set_Scissor(Uno.Recti value) [instance] :254
void DrawContext::Scissor(::g::Uno::Recti value)
{
    ::g::Uno::Int2 vsz = GLViewportPixelSize();
    GLScissor(::g::Uno::Int4__New2(value.Left, vsz.Y - (value.Top + value.Size().Y), value.Size().X, value.Size().Y));
}

// public Fuse.IRenderViewport get_Viewport() [instance] :34
uObject* DrawContext::Viewport()
{
    return _viewport;
}

// public float get_ViewportPixelsPerPoint() [instance] :341
float DrawContext::ViewportPixelsPerPoint()
{
    return ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(Viewport()), ::TYPES[23/*Fuse.ICommonViewport*/]));
}

// public DrawContext New(Fuse.IRenderViewport viewport) [static] :61
DrawContext* DrawContext::New1(uObject* viewport)
{
    DrawContext* obj2 = (DrawContext*)uNew(DrawContext_typeof());
    obj2->ctor_(viewport);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.DrawSelection.uno
// -----------------------------------------------------------------------

// internal sealed class DrawHelpers :7
// {
static void DrawHelpers_build(uType* type)
{
    ::TYPES[25] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(DrawHelpers, _draw_1e24cb92), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(DrawHelpers, DrawLocalRect_Coord_1e24cb92_1_2_1), 0,
        ::TYPES[25/*float2[]*/], offsetof(DrawHelpers, DrawLocalRect_Vertices_1e24cb92_1_1_4), 0,
        type, (uintptr_t)&DrawHelpers::_instance_, uFieldFlagsStatic);
}

uType* DrawHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(DrawHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.DrawHelpers", options);
    type->fp_build_ = DrawHelpers_build;
    type->fp_ctor_ = (void*)DrawHelpers__New1_fn;
    return type;
}

// public generated DrawHelpers() :7
void DrawHelpers__ctor__fn(DrawHelpers* __this)
{
    __this->ctor_();
}

// internal void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float4x4 transform, float lineWidth, float4 color) :21
void DrawHelpers__DrawLocalRect_fn(DrawHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect, ::g::Uno::Float4x4* transform, float* lineWidth, ::g::Uno::Float4* color)
{
    __this->DrawLocalRect(dc, *rect, *transform, *lineWidth, *color);
}

// private generated void init_DrawCalls() :7
void DrawHelpers__init_DrawCalls_fn(DrawHelpers* __this)
{
    __this->init_DrawCalls();
}

// public generated DrawHelpers New() :7
void DrawHelpers__New1_fn(DrawHelpers** __retval)
{
    *__retval = DrawHelpers::New1();
}

// internal static Fuse.DrawHelpers get_Singelton() :13
void DrawHelpers__get_Singelton_fn(DrawHelpers** __retval)
{
    *__retval = DrawHelpers::Singelton();
}

uSStrong<DrawHelpers*> DrawHelpers::_instance_;

// public generated DrawHelpers() [instance] :7
void DrawHelpers::ctor_()
{
    init_DrawCalls();
}

// internal void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float4x4 transform, float lineWidth, float4 color) [instance] :21
void DrawHelpers::DrawLocalRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect, ::g::Uno::Float4x4 transform, float lineWidth, ::g::Uno::Float4 color)
{
    _draw_1e24cb92.BlendEnabled(true);
    _draw_1e24cb92.DepthTestEnabled(false);
    _draw_1e24cb92.LineWidth(lineWidth);
    _draw_1e24cb92.PrimitiveType(5);
    _draw_1e24cb92.BlendSrcRgb(2);
    _draw_1e24cb92.BlendDstRgb(3);
    _draw_1e24cb92.BlendDstAlpha(3);
    _draw_1e24cb92.Use();
    _draw_1e24cb92.Attrib1(0, 2, DrawLocalRect_Coord_1e24cb92_1_2_1, 8, 0);
    _draw_1e24cb92.Uniform2(1, rect.Size());
    _draw_1e24cb92.Uniform2(2, rect.Position());
    _draw_1e24cb92.Uniform12(3, transform);
    _draw_1e24cb92.Uniform10(4, color);
    _draw_1e24cb92.DrawArrays(uPtr(DrawLocalRect_Vertices_1e24cb92_1_1_4)->Length());
}

// private generated void init_DrawCalls() [instance] :7
void DrawHelpers::init_DrawCalls()
{
    uArray* Vertices_1e24cb92_1_1_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[25/*float2[]*/], 5, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 0.0f));
    DrawLocalRect_Coord_1e24cb92_1_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_1e24cb92_1_1_0), 0);
    DrawLocalRect_Vertices_1e24cb92_1_1_4 = Vertices_1e24cb92_1_1_0;
    _draw_1e24cb92 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseNodes_bundle::DrawHelpers4c5c39ae());
}

// public generated DrawHelpers New() [static] :7
DrawHelpers* DrawHelpers::New1()
{
    DrawHelpers* obj1 = (DrawHelpers*)uNew(DrawHelpers_typeof());
    obj1->ctor_();
    return obj1;
}

// internal static Fuse.DrawHelpers get_Singelton() [static] :13
DrawHelpers* DrawHelpers::Singelton()
{
    if (DrawHelpers::_instance_ == NULL)
        DrawHelpers::_instance_ = DrawHelpers::New1();

    return DrawHelpers::_instance_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/NodeGroup.uno
// ------------------------------------------------------------

// private sealed class NodeGroupBase.EmptyNode :151
// {
static void NodeGroupBase__EmptyNode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15);
}

::g::Fuse::Node_type* NodeGroupBase__EmptyNode_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(NodeGroupBase__EmptyNode);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.NodeGroupBase.EmptyNode", options);
    type->fp_build_ = NodeGroupBase__EmptyNode_build;
    type->fp_ctor_ = (void*)NodeGroupBase__EmptyNode__New2_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated EmptyNode() :151
void NodeGroupBase__EmptyNode__ctor_2_fn(NodeGroupBase__EmptyNode* __this)
{
    __this->ctor_2();
}

// public generated EmptyNode New() :151
void NodeGroupBase__EmptyNode__New2_fn(NodeGroupBase__EmptyNode** __retval)
{
    *__retval = NodeGroupBase__EmptyNode::New2();
}

// public generated EmptyNode() [instance] :151
void NodeGroupBase__EmptyNode::ctor_2()
{
    ctor_1();
}

// public generated EmptyNode New() [static] :151
NodeGroupBase__EmptyNode* NodeGroupBase__EmptyNode::New2()
{
    NodeGroupBase__EmptyNode* obj1 = (NodeGroupBase__EmptyNode*)uNew(NodeGroupBase__EmptyNode_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Children.Enumerable.uno
// -----------------------------------------------------------------------------

// private sealed class Visual.Enumerator<T> :24
// {
static void Visual__Enumerator_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Visual_typeof();
    ::TYPES[26] = ::g::Fuse::Node_typeof();
    type->SetPrecalc(
        ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<T>*/, type->T(0), NULL),
        ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<T>*/, type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(Visual__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Visual__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Visual__Enumerator_type, interface2));
    type->SetFields(0,
        type->T(0), offsetof(Visual__Enumerator, _current), 0,
        ::TYPES[7/*Fuse.Visual*/], offsetof(Visual__Enumerator, _parent), 0,
        ::g::Uno::Bool_typeof(), offsetof(Visual__Enumerator, _reachedEnd), 0);
}

Visual__Enumerator_type* Visual__Enumerator_typeof()
{
    static uSStrong<Visual__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(Visual__Enumerator);
    options.TypeSize = sizeof(Visual__Enumerator_type);
    type = (Visual__Enumerator_type*)uClassType::New("Fuse.Visual.Enumerator`1", options);
    type->fp_build_ = Visual__Enumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))Visual__Enumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Visual__Enumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))Visual__Enumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))Visual__Enumerator__MoveNext_fn;
    return type;
}

// public Enumerator(Fuse.Visual parent) :30
void Visual__Enumerator__ctor__fn(Visual__Enumerator* __this, ::g::Fuse::Visual* parent)
{
    __this->ctor_(parent);
}

// public T get_Current() :46
void Visual__Enumerator__get_Current_fn(Visual__Enumerator* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Current();
}

// public void Dispose() :48
void Visual__Enumerator__Dispose_fn(Visual__Enumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :35
void Visual__Enumerator__MoveNext_fn(Visual__Enumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public Enumerator New(Fuse.Visual parent) :30
void Visual__Enumerator__New1_fn(uType* __type, ::g::Fuse::Visual* parent, Visual__Enumerator** __retval)
{
    *__retval = Visual__Enumerator::New1(__type, parent);
}

// public void Reset() :47
void Visual__Enumerator__Reset_fn(Visual__Enumerator* __this)
{
    __this->Reset();
}

// public Enumerator(Fuse.Visual parent) [instance] :30
void Visual__Enumerator::ctor_(::g::Fuse::Visual* parent)
{
    _parent = parent;
}

// public T get_Current() [instance] :46
::g::Fuse::Node* Visual__Enumerator::Current()
{
    return _current;
}

// public void Dispose() [instance] :48
void Visual__Enumerator::Dispose()
{
    Reset();
    _parent = NULL;
}

// public bool MoveNext() [instance] :35
bool Visual__Enumerator::MoveNext()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Visual.FirstChild<T>*/),
        __type->Precalced(1/*Fuse.Node.NextSibling<T>*/),
    };

    if (_reachedEnd)
        return false;

    if (_current == NULL)
        _current = ((::g::Fuse::Node*)uPtr(_parent)->FirstChild(__types[0]));
    else
        _current = ((::g::Fuse::Node*)uPtr(_current)->NextSibling(__types[1]));

    if (_current == NULL)
        _reachedEnd = true;

    return !_reachedEnd;
}

// public void Reset() [instance] :47
void Visual__Enumerator::Reset()
{
    _current = NULL;
    _reachedEnd = false;
}

// public Enumerator New(Fuse.Visual parent) [static] :30
Visual__Enumerator* Visual__Enumerator::New1(uType* __type, ::g::Fuse::Visual* parent)
{
    Visual__Enumerator* obj1 = (Visual__Enumerator*)uNew(__type);
    obj1->ctor_(parent);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/FastMatrix.uno
// --------------------------------------------------------------

// public sealed class FastMatrix :5
// {
static void FastMatrix_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(FastMatrix, _hasNonTranslation), 0,
        ::g::Uno::Bool_typeof(), offsetof(FastMatrix, _isValid), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(FastMatrix, _matrix), 0);
}

uType* FastMatrix_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FastMatrix);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastMatrix", options);
    type->fp_build_ = FastMatrix_build;
    type->fp_ctor_ = (void*)FastMatrix__New1_fn;
    return type;
}

// private FastMatrix() :35
void FastMatrix__ctor__fn(FastMatrix* __this)
{
    __this->ctor_();
}

// private FastMatrix(Fuse.FastMatrix orig) :40
void FastMatrix__ctor_1_fn(FastMatrix* __this, FastMatrix* orig)
{
    __this->ctor_1(orig);
}

// public void AppendFastMatrix(Fuse.FastMatrix fm) :214
void FastMatrix__AppendFastMatrix_fn(FastMatrix* __this, FastMatrix* fm)
{
    __this->AppendFastMatrix(fm);
}

// public void AppendRotation(float zRadians) :93
void FastMatrix__AppendRotation_fn(FastMatrix* __this, float* zRadians)
{
    __this->AppendRotation(*zRadians);
}

// public void AppendRotationQuaternion(float4 q) :170
void FastMatrix__AppendRotationQuaternion_fn(FastMatrix* __this, ::g::Uno::Float4* q)
{
    __this->AppendRotationQuaternion(*q);
}

// public void AppendScale(float factor) :105
void FastMatrix__AppendScale_fn(FastMatrix* __this, float* factor)
{
    __this->AppendScale(*factor);
}

// public void AppendScale(float3 scale) :164
void FastMatrix__AppendScale1_fn(FastMatrix* __this, ::g::Uno::Float3* scale)
{
    __this->AppendScale1(*scale);
}

// public void AppendShear(float xRadians, float yRadians) :123
void FastMatrix__AppendShear_fn(FastMatrix* __this, float* xRadians, float* yRadians)
{
    __this->AppendShear(*xRadians, *yRadians);
}

// public void AppendTranslation(float x, float y, float z) :69
void FastMatrix__AppendTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->AppendTranslation(*x, *y, *z);
}

// public Fuse.FastMatrix Copy() :49
void FastMatrix__Copy_fn(FastMatrix* __this, FastMatrix** __retval)
{
    *__retval = __this->Copy();
}

// public static Fuse.FastMatrix FromFloat4x4(float4x4 m) :61
void FastMatrix__FromFloat4x4_fn(::g::Uno::Float4x4* m, FastMatrix** __retval)
{
    *__retval = FastMatrix::FromFloat4x4(*m);
}

// public bool get_HasNonTranslation() :13
void FastMatrix__get_HasNonTranslation_fn(FastMatrix* __this, bool* __retval)
{
    *__retval = __this->HasNonTranslation();
}

// public static Fuse.FastMatrix Identity() :47
void FastMatrix__Identity_fn(FastMatrix** __retval)
{
    *__retval = FastMatrix::Identity();
}

// public void Invert() :148
void FastMatrix__Invert_fn(FastMatrix* __this)
{
    __this->Invert();
}

// public bool get_IsValid() :20
void FastMatrix__get_IsValid_fn(FastMatrix* __this, bool* __retval)
{
    *__retval = __this->IsValid();
}

// public float4x4 get_Matrix() :8
void FastMatrix__get_Matrix_fn(FastMatrix* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->Matrix();
}

// public Fuse.FastMatrix Mul(Fuse.FastMatrix m) :136
void FastMatrix__Mul_fn(FastMatrix* __this, FastMatrix* m, FastMatrix** __retval)
{
    *__retval = __this->Mul(m);
}

// private FastMatrix New() :35
void FastMatrix__New1_fn(FastMatrix** __retval)
{
    *__retval = FastMatrix::New1();
}

// private FastMatrix New(Fuse.FastMatrix orig) :40
void FastMatrix__New2_fn(FastMatrix* orig, FastMatrix** __retval)
{
    *__retval = FastMatrix::New2(orig);
}

// public void PrependFastMatrix(Fuse.FastMatrix fm) :198
void FastMatrix__PrependFastMatrix_fn(FastMatrix* __this, FastMatrix* fm)
{
    __this->PrependFastMatrix(fm);
}

// public void PrependRotation(float zRadians) :99
void FastMatrix__PrependRotation_fn(FastMatrix* __this, float* zRadians)
{
    __this->PrependRotation(*zRadians);
}

// public void PrependRotationQuaternion(float4 q) :187
void FastMatrix__PrependRotationQuaternion_fn(FastMatrix* __this, ::g::Uno::Float4* q)
{
    __this->PrependRotationQuaternion(*q);
}

// public void PrependScale(float factor) :111
void FastMatrix__PrependScale_fn(FastMatrix* __this, float* factor)
{
    __this->PrependScale(*factor);
}

// public void PrependScale(float3 scale) :181
void FastMatrix__PrependScale1_fn(FastMatrix* __this, ::g::Uno::Float3* scale)
{
    __this->PrependScale1(*scale);
}

// public void PrependShear(float xRadians, float yRadians) :117
void FastMatrix__PrependShear_fn(FastMatrix* __this, float* xRadians, float* yRadians)
{
    __this->PrependShear(*xRadians, *yRadians);
}

// public void PrependTranslation(float x, float y, float z) :81
void FastMatrix__PrependTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->PrependTranslation(*x, *y, *z);
}

// public void PrependTranslation(float3 offset) :193
void FastMatrix__PrependTranslation1_fn(FastMatrix* __this, ::g::Uno::Float3* offset)
{
    __this->PrependTranslation1(*offset);
}

// public void ResetIdentity() :54
void FastMatrix__ResetIdentity_fn(FastMatrix* __this)
{
    __this->ResetIdentity();
}

// private void SimpleTranslation(float x, float y, float z) :129
void FastMatrix__SimpleTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->SimpleTranslation(*x, *y, *z);
}

// public float3 TransformVector(float3 v) :230
void FastMatrix__TransformVector_fn(FastMatrix* __this, ::g::Uno::Float3* v, ::g::Uno::Float3* __retval)
{
    *__retval = __this->TransformVector(*v);
}

// internal float3 get_Translation() :10
void FastMatrix__get_Translation_fn(FastMatrix* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Translation();
}

// private FastMatrix() [instance] :35
void FastMatrix::ctor_()
{
    _isValid = true;
    _matrix = ::g::Uno::Float4x4__Identity();
}

// private FastMatrix(Fuse.FastMatrix orig) [instance] :40
void FastMatrix::ctor_1(FastMatrix* orig)
{
    _isValid = true;
    _matrix = uPtr(orig)->_matrix;
    _hasNonTranslation = orig->_hasNonTranslation;
    _isValid = orig->_isValid;
}

// public void AppendFastMatrix(Fuse.FastMatrix fm) [instance] :214
void FastMatrix::AppendFastMatrix(FastMatrix* fm)
{
    _isValid = (_isValid && uPtr(fm)->_isValid);

    if (_hasNonTranslation || fm->_hasNonTranslation)
    {
        _matrix = ::g::Uno::Matrix::Mul8(_matrix, uPtr(fm)->Matrix());
        _hasNonTranslation = true;
    }
    else
    {
        _matrix.M41 = (_matrix.M41 + uPtr(fm)->_matrix.M41);
        _matrix.M42 = (_matrix.M42 + fm->_matrix.M42);
        _matrix.M43 = (_matrix.M43 + fm->_matrix.M43);
    }
}

// public void AppendRotation(float zRadians) [instance] :93
void FastMatrix::AppendRotation(float zRadians)
{
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::RotationZ(zRadians));
    _hasNonTranslation = true;
}

// public void AppendRotationQuaternion(float4 q) [instance] :170
void FastMatrix::AppendRotationQuaternion(::g::Uno::Float4 q)
{
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::RotationQuaternion(q));
    _hasNonTranslation = true;
}

// public void AppendScale(float factor) [instance] :105
void FastMatrix::AppendScale(float factor)
{
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Scaling2(::g::Uno::Float3__New2(factor, factor, factor)));
    _hasNonTranslation = true;
}

// public void AppendScale(float3 scale) [instance] :164
void FastMatrix::AppendScale1(::g::Uno::Float3 scale)
{
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Scaling2(scale));
    _hasNonTranslation = true;
}

// public void AppendShear(float xRadians, float yRadians) [instance] :123
void FastMatrix::AppendShear(float xRadians, float yRadians)
{
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Shear(::g::Uno::Float2__New2(xRadians, yRadians)));
    _hasNonTranslation = true;
}

// public void AppendTranslation(float x, float y, float z) [instance] :69
void FastMatrix::AppendTranslation(float x, float y, float z)
{
    if (!_hasNonTranslation)
        SimpleTranslation(x, y, z);
    else
        _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Translation1(::g::Uno::Float3__New2(x, y, z)));
}

// public Fuse.FastMatrix Copy() [instance] :49
FastMatrix* FastMatrix::Copy()
{
    return FastMatrix::New2(this);
}

// public bool get_HasNonTranslation() [instance] :13
bool FastMatrix::HasNonTranslation()
{
    return _hasNonTranslation;
}

// public void Invert() [instance] :148
void FastMatrix::Invert()
{
    if (!_hasNonTranslation)
    {
        _matrix.M41 = -_matrix.M41;
        _matrix.M42 = -_matrix.M42;
        _matrix.M43 = -_matrix.M43;
    }
    else
    {
        ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
        _isValid = (_isValid && ::g::Uno::Matrix::TryInvert2(_matrix, &result));
        _matrix = result;
    }
}

// public bool get_IsValid() [instance] :20
bool FastMatrix::IsValid()
{
    return _isValid;
}

// public float4x4 get_Matrix() [instance] :8
::g::Uno::Float4x4 FastMatrix::Matrix()
{
    return _matrix;
}

// public Fuse.FastMatrix Mul(Fuse.FastMatrix m) [instance] :136
FastMatrix* FastMatrix::Mul(FastMatrix* m)
{
    FastMatrix* res = FastMatrix::New1();
    res->_matrix = ::g::Uno::Matrix::Mul8(_matrix, uPtr(m)->_matrix);
    res->_hasNonTranslation = (_hasNonTranslation || m->_hasNonTranslation);
    res->_isValid = (_isValid && m->_isValid);
    return res;
}

// public void PrependFastMatrix(Fuse.FastMatrix fm) [instance] :198
void FastMatrix::PrependFastMatrix(FastMatrix* fm)
{
    _isValid = (_isValid && uPtr(fm)->_isValid);

    if (_hasNonTranslation || fm->_hasNonTranslation)
    {
        _matrix = ::g::Uno::Matrix::Mul8(uPtr(fm)->Matrix(), _matrix);
        _hasNonTranslation = true;
    }
    else
    {
        _matrix.M41 = (_matrix.M41 + uPtr(fm)->_matrix.M41);
        _matrix.M42 = (_matrix.M42 + fm->_matrix.M42);
        _matrix.M43 = (_matrix.M43 + fm->_matrix.M43);
    }
}

// public void PrependRotation(float zRadians) [instance] :99
void FastMatrix::PrependRotation(float zRadians)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::RotationZ(zRadians), _matrix);
    _hasNonTranslation = true;
}

// public void PrependRotationQuaternion(float4 q) [instance] :187
void FastMatrix::PrependRotationQuaternion(::g::Uno::Float4 q)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::RotationQuaternion(q), _matrix);
    _hasNonTranslation = true;
}

// public void PrependScale(float factor) [instance] :111
void FastMatrix::PrependScale(float factor)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Scaling2(::g::Uno::Float3__New2(factor, factor, factor)), _matrix);
    _hasNonTranslation = true;
}

// public void PrependScale(float3 scale) [instance] :181
void FastMatrix::PrependScale1(::g::Uno::Float3 scale)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Scaling2(scale), _matrix);
    _hasNonTranslation = true;
}

// public void PrependShear(float xRadians, float yRadians) [instance] :117
void FastMatrix::PrependShear(float xRadians, float yRadians)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Shear(::g::Uno::Float2__New2(xRadians, yRadians)), _matrix);
    _hasNonTranslation = true;
}

// public void PrependTranslation(float x, float y, float z) [instance] :81
void FastMatrix::PrependTranslation(float x, float y, float z)
{
    if (!_hasNonTranslation)
        SimpleTranslation(x, y, z);
    else
        _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Translation1(::g::Uno::Float3__New2(x, y, z)), _matrix);
}

// public void PrependTranslation(float3 offset) [instance] :193
void FastMatrix::PrependTranslation1(::g::Uno::Float3 offset)
{
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Translation1(offset), _matrix);
}

// public void ResetIdentity() [instance] :54
void FastMatrix::ResetIdentity()
{
    _matrix = ::g::Uno::Float4x4__Identity();
    _hasNonTranslation = false;
    _isValid = true;
}

// private void SimpleTranslation(float x, float y, float z) [instance] :129
void FastMatrix::SimpleTranslation(float x, float y, float z)
{
    _matrix.M41 = (_matrix.M41 + x);
    _matrix.M42 = (_matrix.M42 + y);
    _matrix.M43 = (_matrix.M43 + z);
}

// public float3 TransformVector(float3 v) [instance] :230
::g::Uno::Float3 FastMatrix::TransformVector(::g::Uno::Float3 v)
{
    if (_hasNonTranslation)
        return ::g::Uno::Vector::TransformCoordinate1(v, Matrix());
    else
        return ::g::Uno::Float3__op_Addition2(v, Translation());
}

// internal float3 get_Translation() [instance] :10
::g::Uno::Float3 FastMatrix::Translation()
{
    ::g::Uno::Float4x4 ind1;
    ind1 = _matrix;
    return ::g::Uno::Float3__New2(ind1.M41, ind1.M42, ind1.M43);
}

// public static Fuse.FastMatrix FromFloat4x4(float4x4 m) [static] :61
FastMatrix* FastMatrix::FromFloat4x4(::g::Uno::Float4x4 m)
{
    FastMatrix* k = FastMatrix::New1();
    k->_matrix = m;
    k->_hasNonTranslation = true;
    return k;
}

// public static Fuse.FastMatrix Identity() [static] :47
FastMatrix* FastMatrix::Identity()
{
    return FastMatrix::New1();
}

// private FastMatrix New() [static] :35
FastMatrix* FastMatrix::New1()
{
    FastMatrix* obj3 = (FastMatrix*)uNew(FastMatrix_typeof());
    obj3->ctor_();
    return obj3;
}

// private FastMatrix New(Fuse.FastMatrix orig) [static] :40
FastMatrix* FastMatrix::New2(FastMatrix* orig)
{
    FastMatrix* obj4 = (FastMatrix*)uNew(FastMatrix_typeof());
    obj4->ctor_1(orig);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.FastProperties1.uno
// -------------------------------------------------------------------------

// internal enum FastProperty1 :4
uEnumType* FastProperty1_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.FastProperty1", ::g::Uno::Int_typeof(), 29);
    type->SetLiterals(
        "IsEnabled", 1LL,
        "IsContextEnabledCache", 2LL,
        "IsLocalFlat", 4LL,
        "IsLocalFlatCached", 8LL,
        "AreChildrenFlatCached", 16LL,
        "AreChildrenFlat", 32LL,
        "MinWidth", 64LL,
        "MinHeight", 128LL,
        "MaxWidth", 256LL,
        "MaxHeight", 512LL,
        "Margin", 1024LL,
        "Padding", 2048LL,
        "Anchor", 4096LL,
        "Offset", 8192LL,
        "X", 16384LL,
        "Y", 32768LL,
        "Aspect", 65536LL,
        "AspectConstraint", 131072LL,
        "CachingMode", 262144LL,
        "HitTestMode", 524288LL,
        "ClipToBounds", 1048576LL,
        "TransformOrigin", 2097152LL,
        "Opacity", 4194304LL,
        "LimitWidth", 8388608LL,
        "LimitHeight", 16777216LL,
        "SnapToPixels", 33554432LL,
        "ContextSnapToPixelsCache", 67108864LL,
        "HasSnapToPixels", 134217728LL,
        "PendingRemove", 268435456LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.FastProperties1.uno
// -------------------------------------------------------------------------

// internal class FastProperty1Link :46
// {
static void FastProperty1Link_build(uType* type)
{
    type->SetFields(0,
        type, offsetof(FastProperty1Link, Next), 0,
        ::g::Fuse::FastProperty1_typeof(), offsetof(FastProperty1Link, Property), 0);
}

uType* FastProperty1Link_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FastProperty1Link);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastProperty1Link", options);
    type->fp_build_ = FastProperty1Link_build;
    return type;
}

// public FastProperty1Link(Fuse.FastProperty1 p) :51
void FastProperty1Link__ctor__fn(FastProperty1Link* __this, int* p)
{
    __this->ctor_(*p);
}

// public FastProperty1Link(Fuse.FastProperty1 p) [instance] :51
void FastProperty1Link::ctor_(int p)
{
    Property = p;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.FastProperties1.uno
// -------------------------------------------------------------------------

// internal sealed class FastProperty1Link<T> :57
// {
static void FastProperty1Link1_build(uType* type)
{
    type->SetFields(2,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* FastProperty1Link1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::FastProperty1Link_typeof();
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(FastProperty1Link1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastProperty1Link`1", options);
    type->fp_build_ = FastProperty1Link1_build;
    return type;
}

// public FastProperty1Link(Fuse.FastProperty1 p, T value) :60
void FastProperty1Link1__ctor_1_fn(FastProperty1Link1* __this, int* p, void* value)
{
    int p_ = *p;
    __this->ctor_(p_);
    __this->Value() = value;
}

// public FastProperty1Link New(Fuse.FastProperty1 p, T value) :60
void FastProperty1Link1__New2_fn(uType* __type, int* p, void* value, FastProperty1Link1** __retval)
{
    int p_ = *p;
    FastProperty1Link1* obj1 = (FastProperty1Link1*)uNew(__type);
    FastProperty1Link1__ctor_1_fn(obj1, uCRef<int>(p_), value);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.FastProperties2.uno
// -------------------------------------------------------------------------

// internal enum FastProperty2 :4
uEnumType* FastProperty2_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.FastProperty2", ::g::Uno::Int_typeof(), 16);
    type->SetLiterals(
        "Color", 1LL,
        "TextWrapping", 2LL,
        "IsMultiline", 4LL,
        "InputHint", 8LL,
        "PlaceholderText", 16LL,
        "PlaceholderColor", 32LL,
        "ActionStyle", 64LL,
        "CaretColor", 128LL,
        "SelectionColor", 256LL,
        "LineSpacing", 512LL,
        "TextAlignment", 1024LL,
        "TextTruncation", 2048LL,
        "IsPassword", 4096LL,
        "IsReadOnly", 8192LL,
        "AutoCorrectHint", 16384LL,
        "AutoCapitalizationHint", 32768LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.FastProperties2.uno
// -------------------------------------------------------------------------

// internal class FastProperty2Link :26
// {
static void FastProperty2Link_build(uType* type)
{
    type->SetFields(0,
        type, offsetof(FastProperty2Link, Next), 0,
        ::g::Fuse::FastProperty2_typeof(), offsetof(FastProperty2Link, Property), 0);
}

uType* FastProperty2Link_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FastProperty2Link);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastProperty2Link", options);
    type->fp_build_ = FastProperty2Link_build;
    return type;
}

// public FastProperty2Link(Fuse.FastProperty2 p) :31
void FastProperty2Link__ctor__fn(FastProperty2Link* __this, int* p)
{
    __this->ctor_(*p);
}

// public FastProperty2Link(Fuse.FastProperty2 p) [instance] :31
void FastProperty2Link::ctor_(int p)
{
    Property = p;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.FastProperties2.uno
// -------------------------------------------------------------------------

// internal sealed class FastProperty2Link<T> :37
// {
static void FastProperty2Link1_build(uType* type)
{
    type->SetFields(2,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* FastProperty2Link1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::FastProperty2Link_typeof();
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(FastProperty2Link1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastProperty2Link`1", options);
    type->fp_build_ = FastProperty2Link1_build;
    return type;
}

// public FastProperty2Link(Fuse.FastProperty2 p, T value) :40
void FastProperty2Link1__ctor_1_fn(FastProperty2Link1* __this, int* p, void* value)
{
    int p_ = *p;
    __this->ctor_(p_);
    __this->Value() = value;
}

// public FastProperty2Link New(Fuse.FastProperty2 p, T value) :40
void FastProperty2Link1__New2_fn(uType* __type, int* p, void* value, FastProperty2Link1** __retval)
{
    int p_ = *p;
    FastProperty2Link1* obj1 = (FastProperty2Link1*)uNew(__type);
    FastProperty2Link1__ctor_1_fn(obj1, uCRef<int>(p_), value);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/FileSourceConverter.uno
// ------------------------------------------------------------------------

// internal sealed class FileSourceConverter :8
// {
static void FileSourceConverter_build(uType* type)
{
    ::STRINGS[42] = uString::Const("path");
    ::TYPES[27] = ::g::Uno::Type_typeof();
    ::TYPES[28] = ::g::Uno::String_typeof();
    ::TYPES[29] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[30] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[31] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[32] = ::g::Uno::IDisposable_typeof();
    ::TYPES[10] = ::g::Fuse::IObject_typeof();
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->SetInterfaces(
        ::g::Fuse::Marshal__IConverter_typeof(), offsetof(FileSourceConverter_type, interface0));
}

FileSourceConverter_type* FileSourceConverter_typeof()
{
    static uSStrong<FileSourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FileSourceConverter);
    options.TypeSize = sizeof(FileSourceConverter_type);
    type = (FileSourceConverter_type*)uClassType::New("Fuse.FileSourceConverter", options);
    type->fp_build_ = FileSourceConverter_build;
    type->fp_ctor_ = (void*)FileSourceConverter__New1_fn;
    type->interface0.fp_CanConvert = (void(*)(uObject*, uType*, bool*))FileSourceConverter__CanConvert_fn;
    type->interface0.fp_TryConvert = (void(*)(uObject*, uType*, uObject*, uObject**))FileSourceConverter__TryConvert_fn;
    return type;
}

// public generated FileSourceConverter() :8
void FileSourceConverter__ctor__fn(FileSourceConverter* __this)
{
    __this->ctor_();
}

// public bool CanConvert(Uno.Type t) :10
void FileSourceConverter__CanConvert_fn(FileSourceConverter* __this, uType* t, bool* __retval)
{
    *__retval = __this->CanConvert(t);
}

// public generated FileSourceConverter New() :8
void FileSourceConverter__New1_fn(FileSourceConverter** __retval)
{
    *__retval = FileSourceConverter::New1();
}

// public object TryConvert(Uno.Type t, object obj) :11
void FileSourceConverter__TryConvert_fn(FileSourceConverter* __this, uType* t, uObject* obj, uObject** __retval)
{
    *__retval = __this->TryConvert(t, obj);
}

// public generated FileSourceConverter() [instance] :8
void FileSourceConverter::ctor_()
{
}

// public bool CanConvert(Uno.Type t) [instance] :10
bool FileSourceConverter::CanConvert(uType* t)
{
    return ::g::Uno::Type::op_Equality(t, ::g::Uno::UX::FileSource_typeof()) || ::g::Uno::Type::IsSubclassOf(uPtr(t), ::g::Uno::UX::FileSource_typeof());
}

// public object TryConvert(Uno.Type t, object obj) [instance] :11
uObject* FileSourceConverter::TryConvert(uType* t, uObject* obj)
{
    ::g::Uno::IO::BundleFile* ret3;

    if (!CanConvert(t))
        return NULL;

    if (uIs(obj, ::TYPES[28/*string*/]))
    {
        uString* path = uCast<uString*>(obj, ::TYPES[28/*string*/]);
        uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Uno::IO::Bundle::AllFiles()), ::TYPES[29/*Uno.Collections.IEnumerable<Uno.IO.BundleFile>*/]));

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[32/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[30/*Uno.Collections.IEnumerator*/])))
            {
                ::g::Uno::IO::BundleFile* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[31/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret3), ret3);

                if (::g::Uno::String::op_Equality(uPtr(f)->SourcePath(), path))
                    return ::g::Uno::UX::BundleFileSource::New1(f);
            }
        }

        return ::g::Fuse::JSFileSource::New1(uCast<uString*>(obj, ::TYPES[28/*string*/]));
    }
    else if (uIs(obj, ::TYPES[10/*Fuse.IObject*/]))
        return ::g::Fuse::JSFileSource::New1(uAs<uString*>(::g::Fuse::IObject::Item(uInterface(uPtr((uObject*)obj), ::TYPES[10/*Fuse.IObject*/]), ::STRINGS[42/*"path"*/]), ::TYPES[28/*string*/]));

    return NULL;
}

// public generated FileSourceConverter New() [static] :8
FileSourceConverter* FileSourceConverter::New1()
{
    FileSourceConverter* obj2 = (FileSourceConverter*)uNew(FileSourceConverter_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.DataContext.uno
// -------------------------------------------------------------------

// private sealed class Node.FirstDataEnumerator :27
// {
static void Node__FirstDataEnumerator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Node__IDataEnumerator_typeof(), offsetof(Node__FirstDataEnumerator_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(Node__FirstDataEnumerator, _Data), 0);
}

Node__FirstDataEnumerator_type* Node__FirstDataEnumerator_typeof()
{
    static uSStrong<Node__FirstDataEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Node__FirstDataEnumerator);
    options.TypeSize = sizeof(Node__FirstDataEnumerator_type);
    type = (Node__FirstDataEnumerator_type*)uClassType::New("Fuse.Node.FirstDataEnumerator", options);
    type->fp_build_ = Node__FirstDataEnumerator_build;
    type->fp_ctor_ = (void*)Node__FirstDataEnumerator__New1_fn;
    type->interface0.fp_NextData = (void(*)(uObject*, uObject*, bool*))Node__FirstDataEnumerator__NextData_fn;
    return type;
}

// public generated FirstDataEnumerator() :27
void Node__FirstDataEnumerator__ctor__fn(Node__FirstDataEnumerator* __this)
{
    __this->ctor_();
}

// public generated object get_Data() :29
void Node__FirstDataEnumerator__get_Data_fn(Node__FirstDataEnumerator* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// private generated void set_Data(object value) :29
void Node__FirstDataEnumerator__set_Data_fn(Node__FirstDataEnumerator* __this, uObject* value)
{
    __this->Data(value);
}

// public generated FirstDataEnumerator New() :27
void Node__FirstDataEnumerator__New1_fn(Node__FirstDataEnumerator** __retval)
{
    *__retval = Node__FirstDataEnumerator::New1();
}

// public bool NextData(object data) :30
void Node__FirstDataEnumerator__NextData_fn(Node__FirstDataEnumerator* __this, uObject* data, bool* __retval)
{
    *__retval = __this->NextData(data);
}

// public generated FirstDataEnumerator() [instance] :27
void Node__FirstDataEnumerator::ctor_()
{
}

// public generated object get_Data() [instance] :29
uObject* Node__FirstDataEnumerator::Data()
{
    return _Data;
}

// private generated void set_Data(object value) [instance] :29
void Node__FirstDataEnumerator::Data(uObject* value)
{
    _Data = value;
}

// public bool NextData(object data) [instance] :30
bool Node__FirstDataEnumerator::NextData(uObject* data)
{
    Data(data);
    return false;
}

// public generated FirstDataEnumerator New() [static] :27
Node__FirstDataEnumerator* Node__FirstDataEnumerator::New1()
{
    Node__FirstDataEnumerator* obj1 = (Node__FirstDataEnumerator*)uNew(Node__FirstDataEnumerator_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/IViewport.uno
// ------------------------------------------------------------

// internal sealed class FixedViewport :181
// {
static void FixedViewport_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IRenderViewport_typeof(), offsetof(FixedViewport_type, interface0),
        ::g::Fuse::IViewport_typeof(), offsetof(FixedViewport_type, interface1),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(FixedViewport_type, interface2));
    type->SetFields(0,
        ::g::Fuse::IFrustum_typeof(), offsetof(FixedViewport, _frustum), 0,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(FixedViewport, _frustumViewport), 0,
        ::g::Uno::Float2_typeof(), offsetof(FixedViewport, _pixelSize), 0,
        ::g::Uno::Float_typeof(), offsetof(FixedViewport, _pixelsPerPoint), 0);
}

FixedViewport_type* FixedViewport_typeof()
{
    static uSStrong<FixedViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(FixedViewport);
    options.TypeSize = sizeof(FixedViewport_type);
    type = (FixedViewport_type*)uClassType::New("Fuse.FixedViewport", options);
    type->fp_build_ = FixedViewport_build;
    type->interface0.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))FixedViewport__get_ViewProjectionTransform_fn;
    type->interface1.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Fuse::Ray*))FixedViewport__PointToWorldRay_fn;
    type->interface1.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Fuse::Ray*, ::g::Fuse::Visual*, ::g::Fuse::Ray*))FixedViewport__WorldToLocalRay_fn;
    type->interface2.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))FixedViewport__get_PixelsPerPoint_fn;
    type->interface2.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))FixedViewport__get_Size_fn;
    return type;
}

// public FixedViewport(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) :220
void FixedViewport__ctor__fn(FixedViewport* __this, ::g::Uno::Int2* pixelSize, float* pixelsPerPoint, uObject* frustum)
{
    __this->ctor_(*pixelSize, *pixelsPerPoint, frustum);
}

// public FixedViewport New(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) :220
void FixedViewport__New1_fn(::g::Uno::Int2* pixelSize, float* pixelsPerPoint, uObject* frustum, FixedViewport** __retval)
{
    *__retval = FixedViewport::New1(*pixelSize, *pixelsPerPoint, frustum);
}

// public float2 get_PixelSize() :189
void FixedViewport__get_PixelSize_fn(FixedViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// public float get_PixelsPerPoint() :184
void FixedViewport__get_PixelsPerPoint_fn(FixedViewport* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public Fuse.Ray PointToWorldRay(float2 pointPos) :209
void FixedViewport__PointToWorldRay_fn(FixedViewport* __this, ::g::Uno::Float2* pointPos, ::g::Fuse::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pointPos);
}

// public float2 get_Size() :186
void FixedViewport__get_Size_fn(FixedViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public float4x4 get_ViewProjectionTransform() :198
void FixedViewport__get_ViewProjectionTransform_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransform();
}

// public Fuse.Ray WorldToLocalRay(Fuse.IViewport world, Fuse.Ray worldRay, Fuse.Visual where) :213
void FixedViewport__WorldToLocalRay_fn(FixedViewport* __this, uObject* world, ::g::Fuse::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Fuse::Ray* __retval)
{
    *__retval = __this->WorldToLocalRay(world, *worldRay, where);
}

// public FixedViewport(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) [instance] :220
void FixedViewport::ctor_(::g::Uno::Int2 pixelSize, float pixelsPerPoint, uObject* frustum)
{
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    _frustum = frustum;
    _pixelSize = ::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y);
    _pixelsPerPoint = pixelsPerPoint;
    uPtr(_frustumViewport)->Update((uObject*)this, frustum);
}

// public float2 get_PixelSize() [instance] :189
::g::Uno::Float2 FixedViewport::PixelSize()
{
    return _pixelSize;
}

// public float get_PixelsPerPoint() [instance] :184
float FixedViewport::PixelsPerPoint()
{
    return _pixelsPerPoint;
}

// public Fuse.Ray PointToWorldRay(float2 pointPos) [instance] :209
::g::Fuse::Ray FixedViewport::PointToWorldRay(::g::Uno::Float2 pointPos)
{
    return ::g::Fuse::ViewportHelpers::PointToWorldRay((uObject*)this, uPtr(_frustumViewport)->ViewProjectionTransformInverse, pointPos);
}

// public float2 get_Size() [instance] :186
::g::Uno::Float2 FixedViewport::Size()
{
    return ::g::Uno::Float2__op_Division1(PixelSize(), PixelsPerPoint());
}

// public float4x4 get_ViewProjectionTransform() [instance] :198
::g::Uno::Float4x4 FixedViewport::ViewProjectionTransform()
{
    return uPtr(_frustumViewport)->ViewProjectionTransform;
}

// public Fuse.Ray WorldToLocalRay(Fuse.IViewport world, Fuse.Ray worldRay, Fuse.Visual where) [instance] :213
::g::Fuse::Ray FixedViewport::WorldToLocalRay(uObject* world, ::g::Fuse::Ray worldRay, ::g::Fuse::Visual* where)
{
    return ::g::Fuse::ViewportHelpers::WorldToLocalRay((uObject*)this, world, worldRay, where);
}

// public FixedViewport New(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) [static] :220
FixedViewport* FixedViewport::New1(::g::Uno::Int2 pixelSize, float pixelsPerPoint, uObject* frustum)
{
    FixedViewport* obj1 = (FixedViewport*)uNew(FixedViewport_typeof());
    obj1->ctor_(pixelSize, pixelsPerPoint, frustum);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/LayoutParams.uno
// ---------------------------------------------------------------

// private enum LayoutParams.Flags :14
uEnumType* LayoutParams__Flags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutParams.Flags", ::g::Uno::Int_typeof(), 12);
    type->SetLiterals(
        "None", 0LL,
        "X", 1LL,
        "Y", 2LL,
        "Temporary", 4LL,
        "MaxX", 8LL,
        "MaxY", 16LL,
        "MinX", 32LL,
        "MinY", 64LL,
        "RelativeX", 128LL,
        "RelativeY", 256LL,
        "NoRelativeX", 512LL,
        "NoRelativeY", 1024LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno
// -------------------------------------------------------------

// internal sealed class Float2Computer :105
// {
static void Float2Computer_build(uType* type)
{
    type->SetBase(::g::Fuse::Computer1_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL));
}

::g::Fuse::Computer1_type* Float2Computer_typeof()
{
    static uSStrong< ::g::Fuse::Computer1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer1_typeof();
    options.ObjectSize = sizeof(Float2Computer);
    options.TypeSize = sizeof(::g::Fuse::Computer1_type);
    type = (::g::Fuse::Computer1_type*)uClassType::New("Fuse.Float2Computer", options);
    type->fp_build_ = Float2Computer_build;
    type->fp_ctor_ = (void*)Float2Computer__New1_fn;
    type->fp_Add1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Float2Computer__Add1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Computer1*, uObject*, uTRef))Float2Computer__Convert_fn;
    type->fp_Divide1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Float2Computer__Divide1_fn;
    type->fp_EqualTo1 = (void(*)(::g::Fuse::Computer1*, void*, void*, bool*))Float2Computer__EqualTo1_fn;
    type->fp_Multiply1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Float2Computer__Multiply1_fn;
    type->fp_Subtract1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Float2Computer__Subtract1_fn;
    return type;
}

// public generated Float2Computer() :105
void Float2Computer__ctor_2_fn(Float2Computer* __this)
{
    __this->ctor_2();
}

// public override sealed float2 Add(float2 a, float2 b) :108
void Float2Computer__Add1_fn(Float2Computer* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Addition2(a_, b_), void();
}

// public override sealed float2 Convert(object obj) :107
void Float2Computer__Convert_fn(Float2Computer* __this, uObject* obj, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Fuse::Marshal::ToFloat2(obj), void();
}

// public override sealed float2 Divide(float2 a, float2 b) :111
void Float2Computer__Divide1_fn(Float2Computer* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Division2(a_, b_), void();
}

// public override sealed bool EqualTo(float2 a, float2 b) :112
void Float2Computer__EqualTo1_fn(Float2Computer* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, bool* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Equality(a_, b_), void();
}

// public override sealed float2 Multiply(float2 a, float2 b) :110
void Float2Computer__Multiply1_fn(Float2Computer* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Multiply2(a_, b_), void();
}

// public generated Float2Computer New() :105
void Float2Computer__New1_fn(Float2Computer** __retval)
{
    *__retval = Float2Computer::New1();
}

// public override sealed float2 Subtract(float2 a, float2 b) :109
void Float2Computer__Subtract1_fn(Float2Computer* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Subtraction2(a_, b_), void();
}

// public generated Float2Computer() [instance] :105
void Float2Computer::ctor_2()
{
    ctor_1();
}

// public generated Float2Computer New() [static] :105
Float2Computer* Float2Computer::New1()
{
    Float2Computer* obj1 = (Float2Computer*)uNew(Float2Computer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno
// -------------------------------------------------------------

// internal sealed class Float3Computer :115
// {
static void Float3Computer_build(uType* type)
{
    type->SetBase(::g::Fuse::Computer1_typeof()->MakeType(::g::Uno::Float3_typeof(), NULL));
}

::g::Fuse::Computer1_type* Float3Computer_typeof()
{
    static uSStrong< ::g::Fuse::Computer1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer1_typeof();
    options.ObjectSize = sizeof(Float3Computer);
    options.TypeSize = sizeof(::g::Fuse::Computer1_type);
    type = (::g::Fuse::Computer1_type*)uClassType::New("Fuse.Float3Computer", options);
    type->fp_build_ = Float3Computer_build;
    type->fp_ctor_ = (void*)Float3Computer__New1_fn;
    type->fp_Add1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Float3Computer__Add1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Computer1*, uObject*, uTRef))Float3Computer__Convert_fn;
    type->fp_Divide1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Float3Computer__Divide1_fn;
    type->fp_EqualTo1 = (void(*)(::g::Fuse::Computer1*, void*, void*, bool*))Float3Computer__EqualTo1_fn;
    type->fp_Multiply1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Float3Computer__Multiply1_fn;
    type->fp_Subtract1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Float3Computer__Subtract1_fn;
    return type;
}

// public generated Float3Computer() :115
void Float3Computer__ctor_2_fn(Float3Computer* __this)
{
    __this->ctor_2();
}

// public override sealed float3 Add(float3 a, float3 b) :118
void Float3Computer__Add1_fn(Float3Computer* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Addition2(a_, b_), void();
}

// public override sealed float3 Convert(object obj) :117
void Float3Computer__Convert_fn(Float3Computer* __this, uObject* obj, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Fuse::Marshal::ToFloat3(obj), void();
}

// public override sealed float3 Divide(float3 a, float3 b) :121
void Float3Computer__Divide1_fn(Float3Computer* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Division2(a_, b_), void();
}

// public override sealed bool EqualTo(float3 a, float3 b) :122
void Float3Computer__EqualTo1_fn(Float3Computer* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, bool* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Equality(a_, b_), void();
}

// public override sealed float3 Multiply(float3 a, float3 b) :120
void Float3Computer__Multiply1_fn(Float3Computer* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Multiply2(a_, b_), void();
}

// public generated Float3Computer New() :115
void Float3Computer__New1_fn(Float3Computer** __retval)
{
    *__retval = Float3Computer::New1();
}

// public override sealed float3 Subtract(float3 a, float3 b) :119
void Float3Computer__Subtract1_fn(Float3Computer* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Subtraction2(a_, b_), void();
}

// public generated Float3Computer() [instance] :115
void Float3Computer::ctor_2()
{
    ctor_1();
}

// public generated Float3Computer New() [static] :115
Float3Computer* Float3Computer::New1()
{
    Float3Computer* obj1 = (Float3Computer*)uNew(Float3Computer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno
// -------------------------------------------------------------

// internal sealed class Float4Computer :125
// {
static void Float4Computer_build(uType* type)
{
    type->SetBase(::g::Fuse::Computer1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
}

::g::Fuse::Computer1_type* Float4Computer_typeof()
{
    static uSStrong< ::g::Fuse::Computer1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer1_typeof();
    options.ObjectSize = sizeof(Float4Computer);
    options.TypeSize = sizeof(::g::Fuse::Computer1_type);
    type = (::g::Fuse::Computer1_type*)uClassType::New("Fuse.Float4Computer", options);
    type->fp_build_ = Float4Computer_build;
    type->fp_ctor_ = (void*)Float4Computer__New1_fn;
    type->fp_Add1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Float4Computer__Add1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Computer1*, uObject*, uTRef))Float4Computer__Convert_fn;
    type->fp_Divide1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Float4Computer__Divide1_fn;
    type->fp_EqualTo1 = (void(*)(::g::Fuse::Computer1*, void*, void*, bool*))Float4Computer__EqualTo1_fn;
    type->fp_Multiply1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Float4Computer__Multiply1_fn;
    type->fp_Subtract1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Float4Computer__Subtract1_fn;
    return type;
}

// public generated Float4Computer() :125
void Float4Computer__ctor_2_fn(Float4Computer* __this)
{
    __this->ctor_2();
}

// public override sealed float4 Add(float4 a, float4 b) :128
void Float4Computer__Add1_fn(Float4Computer* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Addition2(a_, b_), void();
}

// public override sealed float4 Convert(object obj) :127
void Float4Computer__Convert_fn(Float4Computer* __this, uObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = ::g::Fuse::Marshal::ToFloat4(obj), void();
}

// public override sealed float4 Divide(float4 a, float4 b) :131
void Float4Computer__Divide1_fn(Float4Computer* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Division2(a_, b_), void();
}

// public override sealed bool EqualTo(float4 a, float4 b) :132
void Float4Computer__EqualTo1_fn(Float4Computer* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, bool* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Equality(a_, b_), void();
}

// public override sealed float4 Multiply(float4 a, float4 b) :130
void Float4Computer__Multiply1_fn(Float4Computer* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Multiply2(a_, b_), void();
}

// public generated Float4Computer New() :125
void Float4Computer__New1_fn(Float4Computer** __retval)
{
    *__retval = Float4Computer::New1();
}

// public override sealed float4 Subtract(float4 a, float4 b) :129
void Float4Computer__Subtract1_fn(Float4Computer* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Subtraction2(a_, b_), void();
}

// public generated Float4Computer() [instance] :125
void Float4Computer::ctor_2()
{
    ctor_1();
}

// public generated Float4Computer New() [static] :125
Float4Computer* Float4Computer::New1()
{
    Float4Computer* obj1 = (Float4Computer*)uNew(Float4Computer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Font.uno
// --------------------------------------------------------

// public class Font :27
// {
// static generated Font() :27
static void Font__cctor__fn(uType* __type)
{
    ::g::Fuse::Internal::iOSSystemFont_typeof()->Init();
    Font::Thin_ = ::g::Fuse::SystemFont::New3(::g::Fuse::Internal::iOSSystemFont::DefaultFontName(), 0, 1);
    Font::Light_ = ::g::Fuse::SystemFont::New3(::g::Fuse::Internal::iOSSystemFont::DefaultFontName(), 0, 2);
    Font::Regular_ = ::g::Fuse::SystemFont::New3(::g::Fuse::Internal::iOSSystemFont::DefaultFontName(), 0, 3);
    Font::Medium_ = ::g::Fuse::SystemFont::New3(::g::Fuse::Internal::iOSSystemFont::DefaultFontName(), 0, 4);
    Font::Bold_ = ::g::Fuse::SystemFont::New3(::g::Fuse::Internal::iOSSystemFont::DefaultFontName(), 0, 6);
    Font::ThinItalic_ = ::g::Fuse::SystemFont::New3(::g::Fuse::Internal::iOSSystemFont::DefaultFontName(), 1, 2);
    Font::LightItalic_ = ::g::Fuse::SystemFont::New3(::g::Fuse::Internal::iOSSystemFont::DefaultFontName(), 1, 1);
    Font::Italic_ = ::g::Fuse::SystemFont::New3(::g::Fuse::Internal::iOSSystemFont::DefaultFontName(), 1, 3);
    Font::MediumItalic_ = ::g::Fuse::SystemFont::New3(::g::Fuse::Internal::iOSSystemFont::DefaultFontName(), 1, 4);
    Font::BoldItalic_ = ::g::Fuse::SystemFont::New3(::g::Fuse::Internal::iOSSystemFont::DefaultFontName(), 1, 6);
}

static void Font_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Internal::SystemFont_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), NULL), offsetof(Font, Descriptors), 0,
        type, (uintptr_t)&Font::_fallback_, uFieldFlagsStatic,
        type, (uintptr_t)&Font::Bold_, uFieldFlagsStatic,
        type, (uintptr_t)&Font::BoldItalic_, uFieldFlagsStatic,
        type, (uintptr_t)&Font::Italic_, uFieldFlagsStatic,
        type, (uintptr_t)&Font::Light_, uFieldFlagsStatic,
        type, (uintptr_t)&Font::LightItalic_, uFieldFlagsStatic,
        type, (uintptr_t)&Font::Medium_, uFieldFlagsStatic,
        type, (uintptr_t)&Font::MediumItalic_, uFieldFlagsStatic,
        type, (uintptr_t)&Font::Regular_, uFieldFlagsStatic,
        type, (uintptr_t)&Font::Thin_, uFieldFlagsStatic,
        type, (uintptr_t)&Font::ThinItalic_, uFieldFlagsStatic);
}

uType* Font_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Font);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Font", options);
    type->fp_build_ = Font_build;
    type->fp_cctor_ = Font__cctor__fn;
    return type;
}

// internal Font(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> descriptors) :45
void Font__ctor__fn(Font* __this, ::g::Uno::Collections::List* descriptors)
{
    __this->ctor_(descriptors);
}

// public Font(Uno.UX.FileSource file) :40
void Font__ctor_1_fn(Font* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_1(file);
}

// internal Font New(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> descriptors) :45
void Font__New1_fn(::g::Uno::Collections::List* descriptors, Font** __retval)
{
    *__retval = Font::New1(descriptors);
}

// public Font New(Uno.UX.FileSource file) :40
void Font__New2_fn(::g::Uno::UX::FileSource* file, Font** __retval)
{
    *__retval = Font::New2(file);
}

// public static Fuse.Font get_PlatformDefault() :56
void Font__get_PlatformDefault_fn(Font** __retval)
{
    *__retval = Font::PlatformDefault();
}

// public static float get_PlatformDefaultSize() :67
void Font__get_PlatformDefaultSize_fn(float* __retval)
{
    *__retval = Font::PlatformDefaultSize();
}

// public static float4 get_PlatformDefaultTextColor() :77
void Font__get_PlatformDefaultTextColor_fn(::g::Uno::Float4* __retval)
{
    *__retval = Font::PlatformDefaultTextColor();
}

uSStrong<Font*> Font::_fallback_;
uSStrong<Font*> Font::Bold_;
uSStrong<Font*> Font::BoldItalic_;
uSStrong<Font*> Font::Italic_;
uSStrong<Font*> Font::Light_;
uSStrong<Font*> Font::LightItalic_;
uSStrong<Font*> Font::Medium_;
uSStrong<Font*> Font::MediumItalic_;
uSStrong<Font*> Font::Regular_;
uSStrong<Font*> Font::Thin_;
uSStrong<Font*> Font::ThinItalic_;

// internal Font(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> descriptors) [instance] :45
void Font::ctor_(::g::Uno::Collections::List* descriptors)
{
    Descriptors = descriptors;
}

// public Font(Uno.UX.FileSource file) [instance] :40
void Font::ctor_1(::g::Uno::UX::FileSource* file)
{
    ctor_(::g::Fuse::Internal::SystemFont::GetFallback(file));
}

// internal Font New(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> descriptors) [static] :45
Font* Font::New1(::g::Uno::Collections::List* descriptors)
{
    Font* obj2 = (Font*)uNew(Font_typeof());
    obj2->ctor_(descriptors);
    return obj2;
}

// public Font New(Uno.UX.FileSource file) [static] :40
Font* Font::New2(::g::Uno::UX::FileSource* file)
{
    Font* obj1 = (Font*)uNew(Font_typeof());
    obj1->ctor_1(file);
    return obj1;
}

// public static Fuse.Font get_PlatformDefault() [static] :56
Font* Font::PlatformDefault()
{
    if (Font::_fallback_ == NULL)
        Font::_fallback_ = Font::New1(::g::Fuse::Internal::SystemFont::Default());

    return Font::_fallback_;
}

// public static float get_PlatformDefaultSize() [static] :67
float Font::PlatformDefaultSize()
{
    return 16.0f;
}

// public static float4 get_PlatformDefaultTextColor() [static] :77
::g::Uno::Float4 Font::PlatformDefaultTextColor()
{
    return ::g::Uno::Float4__New2(0.321568638f, 0.321568638f, 0.321568638f, 1.0f);
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/FramebufferPool.uno
// -------------------------------------------------------------------

// public static class FramebufferPool :10
// {
static void FramebufferPool_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::FramebufferPoolImpl_typeof(), (uintptr_t)&FramebufferPool::framebufferPool_, uFieldFlagsStatic);
}

uClassType* FramebufferPool_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FramebufferPool", options);
    type->fp_build_ = FramebufferPool_build;
    return type;
}

// private static void EnsurePool() :14
void FramebufferPool__EnsurePool_fn()
{
    FramebufferPool::EnsurePool();
}

// internal static int get_Frame() :46
void FramebufferPool__get_Frame_fn(int* __retval)
{
    *__retval = FramebufferPool::Frame();
}

// public static framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) :32
void FramebufferPool__Lock_fn(int* width, int* height, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = FramebufferPool::Lock(*width, *height, *format, *depth);
}

// public static framebuffer Lock(int2 size, Uno.Graphics.Format format, bool depth) :28
void FramebufferPool__Lock1_fn(::g::Uno::Int2* size, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = FramebufferPool::Lock1(*size, *format, *depth);
}

// internal static void Register(Fuse.CacheFramebuffer cfb) :16
void FramebufferPool__Register_fn(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::Register(cfb);
}

// public static void Release(framebuffer fb) :38
void FramebufferPool__Release_fn(::g::Uno::Graphics::Framebuffer* fb)
{
    FramebufferPool::Release(fb);
}

// internal static void UnRegister(Fuse.CacheFramebuffer cfb) :22
void FramebufferPool__UnRegister_fn(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::UnRegister(cfb);
}

uSStrong< ::g::Fuse::FramebufferPoolImpl*> FramebufferPool::framebufferPool_;

// private static void EnsurePool() [static] :14
void FramebufferPool::EnsurePool()
{
    if (FramebufferPool::framebufferPool_ == NULL)
        FramebufferPool::framebufferPool_ = ::g::Fuse::FramebufferPoolImpl::New1();
}

// public static framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) [static] :32
::g::Uno::Graphics::Framebuffer* FramebufferPool::Lock(int width, int height, int format, bool depth)
{
    FramebufferPool::EnsurePool();
    return uPtr(FramebufferPool::framebufferPool_)->Lock(width, height, format, depth);
}

// public static framebuffer Lock(int2 size, Uno.Graphics.Format format, bool depth) [static] :28
::g::Uno::Graphics::Framebuffer* FramebufferPool::Lock1(::g::Uno::Int2 size, int format, bool depth)
{
    return FramebufferPool::Lock(size.X, size.Y, format, depth);
}

// internal static void Register(Fuse.CacheFramebuffer cfb) [static] :16
void FramebufferPool::Register(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool_)->Register(cfb);
}

// public static void Release(framebuffer fb) [static] :38
void FramebufferPool::Release(::g::Uno::Graphics::Framebuffer* fb)
{
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool_)->Release(fb);
}

// internal static void UnRegister(Fuse.CacheFramebuffer cfb) [static] :22
void FramebufferPool::UnRegister(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool_)->UnRegister(cfb);
}

// internal static int get_Frame() [static] :46
int FramebufferPool::Frame()
{
    FramebufferPool::EnsurePool();
    return uPtr(FramebufferPool::framebufferPool_)->frame;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/FramebufferPool.uno
// -------------------------------------------------------------------

// internal sealed class FramebufferPoolImpl :61
// {
static void FramebufferPoolImpl_build(uType* type)
{
    ::STRINGS[43] = uString::Const("Attempted to allocate ");
    ::STRINGS[44] = uString::Const("x");
    ::STRINGS[45] = uString::Const(" framebuffer, max is ");
    ::STRINGS[46] = uString::Const("framebuffer pinned while app going into the background");
    ::STRINGS[47] = uString::Const("Pool is leaking");
    ::TYPES[33] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof(), NULL);
    ::TYPES[34] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[35] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof(), NULL);
    ::TYPES[36] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::CacheFramebuffer_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[37] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::CacheFramebuffer_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Resources::DisposalManager_typeof(),
        ::g::Uno::Graphics::Texture2D_typeof());
    type->SetInterfaces(
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(FramebufferPoolImpl_type, interface0));
    type->SetFields(0,
        ::TYPES[36/*Uno.Collections.List<Fuse.CacheFramebuffer>*/], offsetof(FramebufferPoolImpl, cacheFramebuffers), 0,
        ::g::Uno::Int_typeof(), offsetof(FramebufferPoolImpl, frame), 0,
        ::TYPES[33/*Uno.Collections.List<framebuffer>*/], offsetof(FramebufferPoolImpl, framebufferPool), 0,
        ::g::Uno::Int_typeof(), offsetof(FramebufferPoolImpl, framebuffersProvidedSinceLastCollect), 0,
        ::TYPES[34/*Uno.Collections.Dictionary<framebuffer, int>*/], offsetof(FramebufferPoolImpl, lastFrameUsed), 0,
        ::TYPES[35/*Uno.Collections.HashSet<framebuffer>*/], offsetof(FramebufferPoolImpl, lockedFramebuffers), 0,
        ::g::Uno::Int_typeof(), offsetof(FramebufferPoolImpl, pixelsProvidedSinceLastCollect), 0);
}

FramebufferPoolImpl_type* FramebufferPoolImpl_typeof()
{
    static uSStrong<FramebufferPoolImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(FramebufferPoolImpl);
    options.TypeSize = sizeof(FramebufferPoolImpl_type);
    type = (FramebufferPoolImpl_type*)uClassType::New("Fuse.FramebufferPoolImpl", options);
    type->fp_build_ = FramebufferPoolImpl_build;
    type->fp_ctor_ = (void*)FramebufferPoolImpl__New1_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))FramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn;
    return type;
}

// public FramebufferPoolImpl() :63
void FramebufferPoolImpl__ctor__fn(FramebufferPoolImpl* __this)
{
    __this->ctor_();
}

// private void CollectCacheFramebuffers() :151
void FramebufferPoolImpl__CollectCacheFramebuffers_fn(FramebufferPoolImpl* __this)
{
    __this->CollectCacheFramebuffers();
}

// private framebuffer FindBuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :86
void FramebufferPoolImpl__FindBuffer_fn(FramebufferPoolImpl* __this, int* width, int* height, int* format, int* flags, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->FindBuffer(*width, *height, *format, *flags);
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :182
void FramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn(FramebufferPoolImpl* __this)
{
    ::g::Fuse::CacheFramebuffer* ret7;
    ::g::Uno::Graphics::Framebuffer* ret8;
    bool ret9;

    for (int i = 0; i < uPtr(__this->cacheFramebuffers)->Count(); i++)
    {
        ::g::Fuse::CacheFramebuffer* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->cacheFramebuffers), uCRef<int>(i), &ret7), ret7);

        if (uPtr(c)->IsPinned())
            U_THROW(::g::Uno::Exception::New2(::STRINGS[46/*"framebuffer...*/]));

        uPtr(c)->Collect();
        uPtr(__this->cacheFramebuffers)->RemoveAt(i--);
    }

    for (int i1 = 0; i1 < uPtr(__this->framebufferPool)->Count(); i1++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->framebufferPool), uCRef<int>(i1), &ret8), ret8);
        uPtr(fb)->Dispose();
        uPtr(__this->framebufferPool)->RemoveAt(i1--);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->lastFrameUsed), fb, &ret9);
    }
}

// internal framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) :204
void FramebufferPoolImpl__Lock_fn(FramebufferPoolImpl* __this, int* width, int* height, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Lock(*width, *height, *format, *depth);
}

// public FramebufferPoolImpl New() :63
void FramebufferPoolImpl__New1_fn(FramebufferPoolImpl** __retval)
{
    *__retval = FramebufferPoolImpl::New1();
}

// internal void Register(Fuse.CacheFramebuffer cfb) :127
void FramebufferPoolImpl__Register_fn(FramebufferPoolImpl* __this, ::g::Fuse::CacheFramebuffer* cfb)
{
    __this->Register(cfb);
}

// internal void Release(framebuffer fb) :212
void FramebufferPoolImpl__Release_fn(FramebufferPoolImpl* __this, ::g::Uno::Graphics::Framebuffer* fb)
{
    __this->Release(fb);
}

// internal void UnRegister(Fuse.CacheFramebuffer cfb) :144
void FramebufferPoolImpl__UnRegister_fn(FramebufferPoolImpl* __this, ::g::Fuse::CacheFramebuffer* cfb)
{
    __this->UnRegister(cfb);
}

// public void Update() :222
void FramebufferPoolImpl__Update_fn(FramebufferPoolImpl* __this)
{
    __this->Update();
}

// public FramebufferPoolImpl() [instance] :63
void FramebufferPoolImpl::ctor_()
{
    framebufferPool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[33/*Uno.Collections.List<framebuffer>*/]));
    lastFrameUsed = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[34/*Uno.Collections.Dictionary<framebuffer, int>*/]));
    lockedFramebuffers = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[35/*Uno.Collections.HashSet<framebuffer>*/]));
    cacheFramebuffers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[36/*Uno.Collections.List<Fuse.CacheFramebuffer>*/]));
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)FramebufferPoolImpl__Update_fn, this), 0);
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
}

// private void CollectCacheFramebuffers() [instance] :151
void FramebufferPoolImpl::CollectCacheFramebuffers()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::CacheFramebuffer*> > ret3;
    ::g::Fuse::CacheFramebuffer* ret4;

    if (uPtr(cacheFramebuffers)->Count() < 3)
        return;

    int sum = 0;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::CacheFramebuffer*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(cacheFramebuffers), &ret3), ret3);

    {
        const auto __finally_fun = [&]()
        {
            enum1.Dispose(::TYPES[37/*Uno.Collections.List<Fuse.CacheFramebuffer>.Enumerator*/]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum1.MoveNext(::TYPES[37/*Uno.Collections.List<Fuse.CacheFramebuffer>.Enumerator*/]))
        {
            ::g::Fuse::CacheFramebuffer* cfb = enum1.Current(::TYPES[37/*Uno.Collections.List<Fuse.CacheFramebuffer>.Enumerator*/]);
            sum = sum + uPtr(cfb)->FramesSinceLastUse();
        }
    }

    int avg = sum / uPtr(cacheFramebuffers)->Count();
    int limit = avg + 3;

    for (int i = 0; i < uPtr(cacheFramebuffers)->Count(); i++)
    {
        ::g::Fuse::CacheFramebuffer* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(cacheFramebuffers), uCRef<int>(i), &ret4), ret4);

        if (!uPtr(c)->IsPinned() && (uPtr(c)->FramesSinceLastUse() >= limit))
        {
            uPtr(c)->Collect();
            uPtr(cacheFramebuffers)->RemoveAt(i--);
        }
    }

    framebuffersProvidedSinceLastCollect = 0;
    pixelsProvidedSinceLastCollect = 0;
}

// private framebuffer FindBuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [instance] :86
::g::Uno::Graphics::Framebuffer* FramebufferPoolImpl::FindBuffer(int width, int height, int format, int flags)
{
    ::g::Uno::Graphics::Framebuffer* ret5;
    bool ret6;
    width = ::g::Uno::Math::Max8(1, width);
    height = ::g::Uno::Math::Max8(1, height);

    for (int i = 0; i < uPtr(framebufferPool)->Count(); i++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(framebufferPool), uCRef<int>(i), &ret5), ret5);

        if (uPtr(fb)->Size().X != width)
            continue;

        if (uPtr(fb)->Size().Y != height)
            continue;

        if (uPtr(fb)->Format() != format)
            continue;

        if (uPtr(fb)->HasDepth() != ((flags & 1) == 1))
            continue;

        if (uPtr(uPtr(fb)->ColorBuffer())->IsMipmap() != ((flags & 2) == 2))
            continue;

        uPtr(framebufferPool)->RemoveAt(i);
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(lockedFramebuffers), fb, &ret6);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
        return fb;
    }

    int maxSize = ::g::Uno::Graphics::Texture2D::MaxSize();

    if ((width > maxSize) || (height > maxSize))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[43/*"Attempted t...*/], uBox<int>(::TYPES[42/*int*/], width)), ::STRINGS[44/*"x"*/]), uBox<int>(::TYPES[42/*int*/], height)), ::STRINGS[45/*" framebuffe...*/]), uBox<int>(::TYPES[42/*int*/], maxSize)), ::STRINGS[44/*"x"*/]), uBox<int>(::TYPES[42/*int*/], maxSize))));

    double t = 0.0;
    ::g::Uno::Graphics::Framebuffer* buffer = ::g::Uno::Graphics::Framebuffer::New1(::g::Uno::Int2__New2(width, height), format, flags);
    return buffer;
}

// internal framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) [instance] :204
::g::Uno::Graphics::Framebuffer* FramebufferPoolImpl::Lock(int width, int height, int format, bool depth)
{
    bool ret10;
    ::g::Uno::Graphics::Framebuffer* fb = FindBuffer(width, height, format, depth ? 1 : 0);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
    ::g::Uno::Collections::HashSet__Add_fn(uPtr(lockedFramebuffers), fb, &ret10);
    return fb;
}

// internal void Register(Fuse.CacheFramebuffer cfb) [instance] :127
void FramebufferPoolImpl::Register(::g::Fuse::CacheFramebuffer* cfb)
{
    framebuffersProvidedSinceLastCollect = (framebuffersProvidedSinceLastCollect + 1);
    pixelsProvidedSinceLastCollect = (pixelsProvidedSinceLastCollect + (uPtr(cfb)->Width() * uPtr(cfb)->Height()));
    ::g::Uno::Collections::List__Add_fn(uPtr(cacheFramebuffers), cfb);

    if (pixelsProvidedSinceLastCollect > 1000000)
        CollectCacheFramebuffers();
    else if (framebuffersProvidedSinceLastCollect > 50)
        CollectCacheFramebuffers();
}

// internal void Release(framebuffer fb) [instance] :212
void FramebufferPoolImpl::Release(::g::Uno::Graphics::Framebuffer* fb)
{
    bool ret11;
    bool ret12;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(lockedFramebuffers), fb, &ret11), ret11))
    {
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(lockedFramebuffers), fb, &ret12);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
        ::g::Uno::Collections::List__Add_fn(uPtr(framebufferPool), fb);
    }
}

// internal void UnRegister(Fuse.CacheFramebuffer cfb) [instance] :144
void FramebufferPoolImpl::UnRegister(::g::Fuse::CacheFramebuffer* cfb)
{
    bool ret13;
    framebuffersProvidedSinceLastCollect = 0;
    ::g::Uno::Collections::List__Remove_fn(uPtr(cacheFramebuffers), cfb, &ret13);
}

// public void Update() [instance] :222
void FramebufferPoolImpl::Update()
{
    ::g::Uno::Graphics::Framebuffer* ret14;
    bool ret15;
    bool ret16;
    bool contextBound = false;
    frame++;

    for (int i = 0; i < uPtr(framebufferPool)->Count(); i++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(framebufferPool), uCRef<int>(i), &ret14), ret14);
        int framesSinceUse;
        ::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(lastFrameUsed), fb, &framesSinceUse, &ret15);
        framesSinceUse = frame - framesSinceUse;

        if (framesSinceUse < 0)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[47/*"Pool is lea...*/]));

        if (framesSinceUse > 1)
        {
            uPtr(fb)->Dispose();
            uPtr(framebufferPool)->RemoveAt(i--);
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(lastFrameUsed), fb, &ret16);
        }
    }
}

// public FramebufferPoolImpl New() [static] :63
FramebufferPoolImpl* FramebufferPoolImpl::New1()
{
    FramebufferPoolImpl* obj2 = (FramebufferPoolImpl*)uNew(FramebufferPoolImpl_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/IViewport.uno
// ------------------------------------------------------------

// internal sealed class FrustumViewport :124
// {
static void FrustumViewport_build(uType* type)
{
    ::TYPES[38] = ::g::Fuse::IFrustum_typeof();
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(FrustumViewport, ProjectionTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(FrustumViewport, ProjectionTransformInverse), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(FrustumViewport, ViewProjectionTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(FrustumViewport, ViewProjectionTransformInverse), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(FrustumViewport, ViewTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(FrustumViewport, ViewTransformInverse), 0);
}

uType* FrustumViewport_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(FrustumViewport);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FrustumViewport", options);
    type->fp_build_ = FrustumViewport_build;
    type->fp_ctor_ = (void*)FrustumViewport__New1_fn;
    return type;
}

// public generated FrustumViewport() :124
void FrustumViewport__ctor__fn(FrustumViewport* __this)
{
    __this->ctor_();
}

// public generated FrustumViewport New() :124
void FrustumViewport__New1_fn(FrustumViewport** __retval)
{
    *__retval = FrustumViewport::New1();
}

// public void Update(Fuse.IViewport viewport, Fuse.IFrustum frustum) :133
void FrustumViewport__Update_fn(FrustumViewport* __this, uObject* viewport, uObject* frustum)
{
    __this->Update(viewport, frustum);
}

// public generated FrustumViewport() [instance] :124
void FrustumViewport::ctor_()
{
}

// public void Update(Fuse.IViewport viewport, Fuse.IFrustum frustum) [instance] :133
void FrustumViewport::Update(uObject* viewport, uObject* frustum)
{
    if (::g::Fuse::IFrustum::TryGetProjectionTransform(uInterface(uPtr(frustum), ::TYPES[38/*Fuse.IFrustum*/]), viewport, &ProjectionTransform) && ::g::Fuse::IFrustum::TryGetProjectionTransformInverse(uInterface(uPtr(frustum), ::TYPES[38/*Fuse.IFrustum*/]), viewport, &ProjectionTransformInverse))
    {
        ViewTransform = ::g::Fuse::IFrustum::GetViewTransform(uInterface(uPtr(frustum), ::TYPES[38/*Fuse.IFrustum*/]), viewport);
        ViewTransformInverse = ::g::Fuse::IFrustum::GetViewTransformInverse(uInterface(frustum, ::TYPES[38/*Fuse.IFrustum*/]), viewport);
        ViewProjectionTransform = ::g::Uno::Matrix::Mul8(ViewTransform, ProjectionTransform);
        ViewProjectionTransformInverse = ::g::Uno::Matrix::Mul8(ProjectionTransformInverse, ViewTransformInverse);
    }
    else
    {
        ProjectionTransform = ::g::Uno::Float4x4__Identity();
        ProjectionTransformInverse = ::g::Uno::Float4x4__Identity();
        ViewTransform = ::g::Uno::Float4x4__Identity();
        ViewTransformInverse = ::g::Uno::Float4x4__Identity();
        ViewProjectionTransform = ::g::Uno::Float4x4__Identity();
        ViewProjectionTransformInverse = ::g::Uno::Float4x4__Identity();
    }
}

// public generated FrustumViewport New() [static] :124
FrustumViewport* FrustumViewport::New1()
{
    FrustumViewport* obj1 = (FrustumViewport*)uNew(FrustumViewport_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno
// --------------------------------------------------------------

// private sealed class TranslationModes.HeightMode :136
// {
static void TranslationModes__HeightMode_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::TranslationModes__SizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(::g::Fuse::TranslationModes__SizeMode_type, interface1));
}

::g::Fuse::TranslationModes__SizeMode_type* TranslationModes__HeightMode_typeof()
{
    static uSStrong< ::g::Fuse::TranslationModes__SizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::TranslationModes__SizeMode_typeof();
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TranslationModes__HeightMode);
    options.TypeSize = sizeof(::g::Fuse::TranslationModes__SizeMode_type);
    type = (::g::Fuse::TranslationModes__SizeMode_type*)uClassType::New("Fuse.TranslationModes.HeightMode", options);
    type->fp_build_ = TranslationModes__HeightMode_build;
    type->fp_ctor_ = (void*)TranslationModes__HeightMode__New2_fn;
    type->fp_GetAbsVector = (void(*)(::g::Fuse::TranslationModes__SizeMode*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__HeightMode__GetAbsVector_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__HeightMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::TranslationModes__SizeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::TranslationModes__SizeMode__Unsubscribe_fn;
    return type;
}

// public generated HeightMode() :136
void TranslationModes__HeightMode__ctor_1_fn(TranslationModes__HeightMode* __this)
{
    __this->ctor_1();
}

// public override sealed float3 GetAbsVector(Fuse.Translation t) :138
void TranslationModes__HeightMode__GetAbsVector_fn(TranslationModes__HeightMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__op_Multiply(::g::Fuse::TranslationModes::SizeOf(uPtr(t)->RelativeNode()).Y, uPtr(t)->Vector()), void();
}

// public generated HeightMode New() :136
void TranslationModes__HeightMode__New2_fn(TranslationModes__HeightMode** __retval)
{
    *__retval = TranslationModes__HeightMode::New2();
}

// public generated HeightMode() [instance] :136
void TranslationModes__HeightMode::ctor_1()
{
    ctor_();
}

// public generated HeightMode New() [static] :136
TranslationModes__HeightMode* TranslationModes__HeightMode::New2()
{
    TranslationModes__HeightMode* obj1 = (TranslationModes__HeightMode*)uNew(TranslationModes__HeightMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/HitTestContext.uno
// -----------------------------------------------------------------

// public delegate void HitTestCallback(Fuse.HitTestResult result) :6
uDelegateType* HitTestCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.HitTestCallback", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::HitTestResult_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/HitTestContext.uno
// -----------------------------------------------------------------

// public sealed class HitTestContext :19
// {
static void HitTestContext_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::HitTestCallback_typeof(), offsetof(HitTestContext, _callback), 0,
        ::g::Uno::Float2_typeof(), offsetof(HitTestContext, _localPoint), 0,
        ::g::Fuse::Ray_typeof(), offsetof(HitTestContext, _worldRay), 0,
        ::g::Uno::Float2_typeof(), offsetof(HitTestContext, _WindowPoint), 0);
}

uType* HitTestContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(HitTestContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.HitTestContext", options);
    type->fp_build_ = HitTestContext_build;
    return type;
}

// public HitTestContext(float2 windowPoint, Fuse.HitTestCallback callback) :81
void HitTestContext__ctor__fn(HitTestContext* __this, ::g::Uno::Float2* windowPoint, uDelegate* callback)
{
    __this->ctor_(*windowPoint, callback);
}

// public Fuse.HitTestCallback get_Callback() :56
void HitTestContext__get_Callback_fn(HitTestContext* __this, uDelegate** __retval)
{
    *__retval = __this->Callback();
}

// public void Dispose() :88
void HitTestContext__Dispose_fn(HitTestContext* __this)
{
    __this->Dispose();
}

// public void Hit(Fuse.Visual obj) :59
void HitTestContext__Hit_fn(HitTestContext* __this, ::g::Fuse::Visual* obj)
{
    __this->Hit(obj);
}

// public float2 get_LocalPoint() :24
void HitTestContext__get_LocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LocalPoint();
}

// public HitTestContext New(float2 windowPoint, Fuse.HitTestCallback callback) :81
void HitTestContext__New1_fn(::g::Uno::Float2* windowPoint, uDelegate* callback, HitTestContext** __retval)
{
    *__retval = HitTestContext::New1(*windowPoint, callback);
}

// public void PopLocalPoint(float2 lp) :33
void HitTestContext__PopLocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* lp)
{
    __this->PopLocalPoint(*lp);
}

// public float2 PushLocalPoint(float2 lp) :26
void HitTestContext__PushLocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PushLocalPoint(*lp);
}

// public Fuse.Ray PushWorldRay(Fuse.Ray n) :41
void HitTestContext__PushWorldRay_fn(HitTestContext* __this, ::g::Fuse::Ray* n, ::g::Fuse::Ray* __retval)
{
    *__retval = __this->PushWorldRay(*n);
}

// public generated float2 get_WindowPoint() :21
void HitTestContext__get_WindowPoint_fn(HitTestContext* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowPoint();
}

// private generated void set_WindowPoint(float2 value) :21
void HitTestContext__set_WindowPoint_fn(HitTestContext* __this, ::g::Uno::Float2* value)
{
    __this->WindowPoint(*value);
}

// public HitTestContext(float2 windowPoint, Fuse.HitTestCallback callback) [instance] :81
void HitTestContext::ctor_(::g::Uno::Float2 windowPoint, uDelegate* callback)
{
    WindowPoint(windowPoint);
    _localPoint = windowPoint;
    _callback = callback;
}

// public Fuse.HitTestCallback get_Callback() [instance] :56
uDelegate* HitTestContext::Callback()
{
    return _callback;
}

// public void Dispose() [instance] :88
void HitTestContext::Dispose()
{
    _callback = NULL;
}

// public void Hit(Fuse.Visual obj) [instance] :59
void HitTestContext::Hit(::g::Fuse::Visual* obj)
{
    ::g::Fuse::HitTestResult* collection1;

    if (::g::Uno::Delegate::op_Inequality(Callback(), NULL))
        uPtr(Callback())->InvokeVoid((collection1 = ::g::Fuse::HitTestResult::New1(), uPtr(collection1)->HitObject(obj), obj, collection1));
}

// public float2 get_LocalPoint() [instance] :24
::g::Uno::Float2 HitTestContext::LocalPoint()
{
    return _localPoint;
}

// public void PopLocalPoint(float2 lp) [instance] :33
void HitTestContext::PopLocalPoint(::g::Uno::Float2 lp)
{
    _localPoint = lp;
}

// public float2 PushLocalPoint(float2 lp) [instance] :26
::g::Uno::Float2 HitTestContext::PushLocalPoint(::g::Uno::Float2 lp)
{
    ::g::Uno::Float2 r = _localPoint;
    _localPoint = lp;
    return r;
}

// public Fuse.Ray PushWorldRay(Fuse.Ray n) [instance] :41
::g::Fuse::Ray HitTestContext::PushWorldRay(::g::Fuse::Ray n)
{
    ::g::Fuse::Ray r = _worldRay;
    _worldRay = n;
    return r;
}

// public generated float2 get_WindowPoint() [instance] :21
::g::Uno::Float2 HitTestContext::WindowPoint()
{
    return _WindowPoint;
}

// private generated void set_WindowPoint(float2 value) [instance] :21
void HitTestContext::WindowPoint(::g::Uno::Float2 value)
{
    _WindowPoint = value;
}

// public HitTestContext New(float2 windowPoint, Fuse.HitTestCallback callback) [static] :81
HitTestContext* HitTestContext::New1(::g::Uno::Float2 windowPoint, uDelegate* callback)
{
    HitTestContext* obj3 = (HitTestContext*)uNew(HitTestContext_typeof());
    obj3->ctor_(windowPoint, callback);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.HitTest.uno
// -----------------------------------------------------------------

// private sealed class Visual.HitTestRecord :80
// {
static void Visual__HitTestRecord_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(Visual__HitTestRecord, Visual), 0);
}

uType* Visual__HitTestRecord_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Visual__HitTestRecord);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Visual.HitTestRecord", options);
    type->fp_build_ = Visual__HitTestRecord_build;
    type->fp_ctor_ = (void*)Visual__HitTestRecord__New1_fn;
    return type;
}

// public generated HitTestRecord() :80
void Visual__HitTestRecord__ctor__fn(Visual__HitTestRecord* __this)
{
    __this->ctor_();
}

// public void HitTestCallback(Fuse.HitTestResult result) :83
void Visual__HitTestRecord__HitTestCallback_fn(Visual__HitTestRecord* __this, ::g::Fuse::HitTestResult* result)
{
    __this->HitTestCallback(result);
}

// public generated HitTestRecord New() :80
void Visual__HitTestRecord__New1_fn(Visual__HitTestRecord** __retval)
{
    *__retval = Visual__HitTestRecord::New1();
}

// public generated HitTestRecord() [instance] :80
void Visual__HitTestRecord::ctor_()
{
}

// public void HitTestCallback(Fuse.HitTestResult result) [instance] :83
void Visual__HitTestRecord::HitTestCallback(::g::Fuse::HitTestResult* result)
{
    if (Visual == NULL)
        Visual = uPtr(result)->HitObject();
}

// public generated HitTestRecord New() [static] :80
Visual__HitTestRecord* Visual__HitTestRecord::New1()
{
    Visual__HitTestRecord* obj1 = (Visual__HitTestRecord*)uNew(Visual__HitTestRecord_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/HitTestContext.uno
// -----------------------------------------------------------------

// public sealed class HitTestResult :10
// {
static void HitTestResult_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(HitTestResult, _HasHitDistance), 0,
        ::g::Uno::Float_typeof(), offsetof(HitTestResult, _HitDistance), 0,
        ::g::Fuse::Visual_typeof(), offsetof(HitTestResult, _HitObject), 0);
}

uType* HitTestResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HitTestResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.HitTestResult", options);
    type->fp_build_ = HitTestResult_build;
    type->fp_ctor_ = (void*)HitTestResult__New1_fn;
    return type;
}

// public generated HitTestResult() :10
void HitTestResult__ctor__fn(HitTestResult* __this)
{
    __this->ctor_();
}

// public generated bool get_HasHitDistance() :12
void HitTestResult__get_HasHitDistance_fn(HitTestResult* __this, bool* __retval)
{
    *__retval = __this->HasHitDistance();
}

// internal generated void set_HasHitDistance(bool value) :12
void HitTestResult__set_HasHitDistance_fn(HitTestResult* __this, bool* value)
{
    __this->HasHitDistance(*value);
}

// public generated float get_HitDistance() :13
void HitTestResult__get_HitDistance_fn(HitTestResult* __this, float* __retval)
{
    *__retval = __this->HitDistance();
}

// internal generated void set_HitDistance(float value) :13
void HitTestResult__set_HitDistance_fn(HitTestResult* __this, float* value)
{
    __this->HitDistance(*value);
}

// public generated Fuse.Visual get_HitObject() :14
void HitTestResult__get_HitObject_fn(HitTestResult* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->HitObject();
}

// internal generated void set_HitObject(Fuse.Visual value) :14
void HitTestResult__set_HitObject_fn(HitTestResult* __this, ::g::Fuse::Visual* value)
{
    __this->HitObject(value);
}

// public generated HitTestResult New() :10
void HitTestResult__New1_fn(HitTestResult** __retval)
{
    *__retval = HitTestResult::New1();
}

// public generated HitTestResult() [instance] :10
void HitTestResult::ctor_()
{
}

// public generated bool get_HasHitDistance() [instance] :12
bool HitTestResult::HasHitDistance()
{
    return _HasHitDistance;
}

// internal generated void set_HasHitDistance(bool value) [instance] :12
void HitTestResult::HasHitDistance(bool value)
{
    _HasHitDistance = value;
}

// public generated float get_HitDistance() [instance] :13
float HitTestResult::HitDistance()
{
    return _HitDistance;
}

// internal generated void set_HitDistance(float value) [instance] :13
void HitTestResult::HitDistance(float value)
{
    _HitDistance = value;
}

// public generated Fuse.Visual get_HitObject() [instance] :14
::g::Fuse::Visual* HitTestResult::HitObject()
{
    return _HitObject;
}

// internal generated void set_HitObject(Fuse.Visual value) [instance] :14
void HitTestResult::HitObject(::g::Fuse::Visual* value)
{
    _HitObject = value;
}

// public generated HitTestResult New() [static] :10
HitTestResult* HitTestResult::New1()
{
    HitTestResult* obj1 = (HitTestResult*)uNew(HitTestResult_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.HitTest.uno
// -----------------------------------------------------------------

// internal enum Visual.HitTestTransformMode :10
uEnumType* Visual__HitTestTransformMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Visual.HitTestTransformMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "LocalPoint", 0LL,
        "WorldRay", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno
// --------------------------------------------------------------

// public abstract interface IActualPlacement :54
// {
uInterfaceType* IActualPlacement_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IActualPlacement", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/IObject.uno
// -----------------------------------------------------------

// public abstract interface IArray :9
// {
uInterfaceType* IArray_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IArray", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.BeginRemove.uno
// ---------------------------------------------------------------------

// public abstract interface IBeginRemoveVisualListener :56
// {
uInterfaceType* IBeginRemoveVisualListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IBeginRemoveVisualListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/IViewport.uno
// ------------------------------------------------------------

// public abstract interface ICommonViewport :6
// {
uInterfaceType* ICommonViewport_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ICommonViewport", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Marshal.Convert.uno
// --------------------------------------------------------------------

// public abstract interface Marshal.IConverter :9
// {
uInterfaceType* Marshal__IConverter_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Marshal.IConverter", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.DataContext.uno
// -------------------------------------------------------------------

// public abstract interface Node.IDataEnumerator :20
// {
uInterfaceType* Node__IDataEnumerator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Node.IDataEnumerator", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.DataContext.uno
// -------------------------------------------------------------------

// public abstract interface Node.IDataListener :147
// {
uInterfaceType* Node__IDataListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Node.IDataListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/1.3.1/Deferred.uno
// --------------------------------------------------------------

// internal abstract interface IDeferred :10
// {
uInterfaceType* IDeferred_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IDeferred", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Scaling.uno
// ----------------------------------------------------------

// private sealed class ScalingModes.IdentityMode :13
// {
static void ScalingModes__IdentityMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(ScalingModes__IdentityMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(ScalingModes__IdentityMode_type, interface1));
}

ScalingModes__IdentityMode_type* ScalingModes__IdentityMode_typeof()
{
    static uSStrong<ScalingModes__IdentityMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ScalingModes__IdentityMode);
    options.TypeSize = sizeof(ScalingModes__IdentityMode_type);
    type = (ScalingModes__IdentityMode_type*)uClassType::New("Fuse.ScalingModes.IdentityMode", options);
    type->fp_build_ = ScalingModes__IdentityMode_build;
    type->fp_ctor_ = (void*)ScalingModes__IdentityMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))ScalingModes__IdentityMode__GetScaleVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))ScalingModes__IdentityMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))ScalingModes__IdentityMode__Unsubscribe_fn;
    return type;
}

// public generated IdentityMode() :13
void ScalingModes__IdentityMode__ctor__fn(ScalingModes__IdentityMode* __this)
{
    __this->ctor_();
}

// public float3 GetScaleVector(Fuse.Scaling t) :15
void ScalingModes__IdentityMode__GetScaleVector_fn(ScalingModes__IdentityMode* __this, ::g::Fuse::Scaling* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(t);
}

// public generated IdentityMode New() :13
void ScalingModes__IdentityMode__New1_fn(ScalingModes__IdentityMode** __retval)
{
    *__retval = ScalingModes__IdentityMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :17
void ScalingModes__IdentityMode__Subscribe_fn(ScalingModes__IdentityMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :18
void ScalingModes__IdentityMode__Unsubscribe_fn(ScalingModes__IdentityMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated IdentityMode() [instance] :13
void ScalingModes__IdentityMode::ctor_()
{
}

// public float3 GetScaleVector(Fuse.Scaling t) [instance] :15
::g::Uno::Float3 ScalingModes__IdentityMode::GetScaleVector(::g::Fuse::Scaling* t)
{
    return uPtr(t)->Vector();
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :17
uObject* ScalingModes__IdentityMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :18
void ScalingModes__IdentityMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated IdentityMode New() [static] :13
ScalingModes__IdentityMode* ScalingModes__IdentityMode::New1()
{
    ScalingModes__IdentityMode* obj1 = (ScalingModes__IdentityMode*)uNew(ScalingModes__IdentityMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/RootViewport.uno
// ---------------------------------------------------------------

// public abstract interface IFrame :12
// {
uInterfaceType* IFrame_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IFrame", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/IFrustum.uno
// -----------------------------------------------------------

// public abstract interface IFrustum :5
// {
uInterfaceType* IFrustum_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IFrustum", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Resources/ILoading.uno
// ----------------------------------------------------------------------

// internal abstract interface ILoading :9
// {
uInterfaceType* ILoading_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ILoading", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Resources/ILoading.uno
// ----------------------------------------------------------------------

// internal static class ILoadingStatic :14
// {
// static generated ILoadingStatic() :14
static void ILoadingStatic__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ILoadingStatic::IsLoadingName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[48/*"IsLoading"*/]);
}

static void ILoadingStatic_build(uType* type)
{
    ::STRINGS[48] = uString::Const("IsLoading");
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ILoadingStatic::IsLoadingName_, uFieldFlagsStatic);
}

uClassType* ILoadingStatic_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.ILoadingStatic", options);
    type->fp_build_ = ILoadingStatic_build;
    type->fp_cctor_ = ILoadingStatic__cctor__fn;
    return type;
}

::g::Uno::UX::Selector ILoadingStatic::IsLoadingName_;
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/NameRegistry.uno
// ---------------------------------------------------------------

// public abstract interface INameListener :8
// {
uInterfaceType* INameListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.INameListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.Rooting.uno
// ---------------------------------------------------------------

// internal abstract interface INotifyUnrooted :15
// {
uInterfaceType* INotifyUnrooted_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.INotifyUnrooted", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Interacting.uno
// ---------------------------------------------------------------------

// private struct Visual.InteractionItem :8
// {
static void Visual__InteractionItem_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(Visual__InteractionItem, Id), 0,
        ::g::Uno::Action_typeof(), offsetof(Visual__InteractionItem, Cancelled), 0);
}

uStructType* Visual__InteractionItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Visual__InteractionItem);
    options.ValueSize = sizeof(Visual__InteractionItem);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Visual.InteractionItem", options);
    type->fp_build_ = Visual__InteractionItem_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Layout.uno
// ----------------------------------------------------------------

// public enum InvalidateLayoutReason :42
uEnumType* InvalidateLayoutReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.InvalidateLayoutReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "NothingChanged", 0LL,
        "ChildChanged", 1LL,
        "MarginBoxChanged", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/IObject.uno
// -----------------------------------------------------------

// public abstract interface IObject :17
// {
uInterfaceType* IObject_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IObject", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Children.uno
// ------------------------------------------------------------------

// public abstract interface IParentObserver :10
// {
uInterfaceType* IParentObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IParentObserver", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Properties.uno
// --------------------------------------------------------------

// public abstract interface IProperties :10
// {
uInterfaceType* IProperties_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IProperties", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/IObject.uno
// -----------------------------------------------------------

// public abstract interface IRaw :4
// {
uInterfaceType* IRaw_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IRaw", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/IViewport.uno
// ------------------------------------------------------------

// public abstract interface IRenderViewport :34
// {
uInterfaceType* IRenderViewport_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IRenderViewport", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Scaling.uno
// ----------------------------------------------------------

// public abstract interface IScalingMode :6
// {
uInterfaceType* IScalingMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IScalingMode", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.DataContext.uno
// -------------------------------------------------------------------

// public abstract interface Node.ISiblingDataProvider :9
// {
uInterfaceType* Node__ISiblingDataProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Node.ISiblingDataProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.DataContext.uno
// -------------------------------------------------------------------

// public abstract interface Node.ISubtreeDataProvider :15
// {
uInterfaceType* Node__ISubtreeDataProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Node.ISubtreeDataProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Templates.uno
// -------------------------------------------------------------------

// public abstract interface ITemplateSource :9
// {
uInterfaceType* ITemplateSource_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITemplateSource", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Transform.uno
// ------------------------------------------------------------

// public abstract interface ITransformMode :270
// {
uInterfaceType* ITransformMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITransformMode", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Transform.uno
// ------------------------------------------------------------

// public abstract interface ITransformRelative :260
// {
uInterfaceType* ITransformRelative_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITransformRelative", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno
// --------------------------------------------------------------

// public abstract interface ITranslationMode :61
// {
uInterfaceType* ITranslationMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITranslationMode", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/UpdateManager.uno
// -----------------------------------------------------------------

// public abstract interface IUpdateListener :39
// {
uInterfaceType* IUpdateListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IUpdateListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/IViewport.uno
// ------------------------------------------------------------

// public abstract interface IViewport :64
// {
uInterfaceType* IViewport_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IViewport", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/FileSourceConverter.uno
// ------------------------------------------------------------------------

// internal sealed class JSFileSource :31
// {
static void JSFileSource_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(JSFileSource, _path), 0);
}

::g::Uno::UX::FileSource_type* JSFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JSFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.JSFileSource", options);
    type->fp_build_ = JSFileSource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))JSFileSource__OpenRead_fn;
    return type;
}

// public JSFileSource(string path) :35
void JSFileSource__ctor_1_fn(JSFileSource* __this, uString* path)
{
    __this->ctor_1(path);
}

// public JSFileSource New(string path) :35
void JSFileSource__New1_fn(uString* path, JSFileSource** __retval)
{
    *__retval = JSFileSource::New1(path);
}

// public override sealed Uno.IO.Stream OpenRead() :40
void JSFileSource__OpenRead_fn(JSFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = ::g::Uno::IO::File::OpenRead(__this->_path), void();
}

// public JSFileSource(string path) [instance] :35
void JSFileSource::ctor_1(uString* path)
{
    ctor_(path);
    _path = path;
}

// public JSFileSource New(string path) [static] :35
JSFileSource* JSFileSource::New1(uString* path)
{
    JSFileSource* obj1 = (JSFileSource*)uNew(JSFileSource_typeof());
    obj1->ctor_1(path);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Json.Parse.uno
// --------------------------------------------------------------

// public partial static class Json :7
// {
static void Json_build(uType* type)
{
    ::STRINGS[49] = uString::Const("Json.Stringify(): object can not contain cycles");
    ::STRINGS[50] = uString::Const("{");
    ::STRINGS[51] = uString::Const(",");
    ::STRINGS[26] = uString::Const(":");
    ::STRINGS[52] = uString::Const("}");
    ::STRINGS[53] = uString::Const("[");
    ::STRINGS[54] = uString::Const("]");
    ::STRINGS[55] = uString::Const("null");
    ::STRINGS[56] = uString::Const("true");
    ::STRINGS[57] = uString::Const("false");
    ::TYPES[39] = ::g::Uno::Collections::HashSet_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::String_typeof();
    ::TYPES[40] = ::g::Uno::Double_typeof();
    ::TYPES[41] = ::g::Uno::Float_typeof();
    ::TYPES[42] = ::g::Uno::Int_typeof();
    ::TYPES[43] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Fuse::IObject_typeof();
    ::TYPES[44] = ::TYPES[28/*string*/]->Array();
    ::TYPES[45] = ::g::Uno::Array_typeof()->MakeMethod(1/*Copy<string>*/, ::TYPES[28/*string*/], NULL);
    ::TYPES[46] = ::g::Uno::Array_typeof()->MakeMethod(5/*Sort<string>*/, ::TYPES[28/*string*/], NULL);
    ::TYPES[47] = ::g::Uno::Comparison_typeof()->MakeType(::TYPES[28/*string*/], NULL);
    ::TYPES[48] = ::g::Fuse::IArray_typeof();
}

uClassType* Json_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Json", options);
    type->fp_build_ = Json_build;
    return type;
}

// public static string Stringify(object value, [bool normalized]) :15
void Json__Stringify_fn(uObject* value, bool* normalized, uString** __retval)
{
    *__retval = Json::Stringify(value, *normalized);
}

// private static void Stringify(object value, bool normalized, Uno.Text.StringBuilder sb, Uno.Collections.HashSet<object> visitedSet) :22
void Json__Stringify1_fn(uObject* value, bool* normalized, ::g::Uno::Text::StringBuilder* sb, ::g::Uno::Collections::HashSet* visitedSet)
{
    Json::Stringify1(value, *normalized, sb, visitedSet);
}

// public static string ToLiteral(bool b) :132
void Json__ToLiteral_fn(bool* b, uString** __retval)
{
    *__retval = Json::ToLiteral(*b);
}

// public static string ToLiteral(double s) :125
void Json__ToLiteral1_fn(double* s, uString** __retval)
{
    *__retval = Json::ToLiteral1(*s);
}

// public static void ToLiteral(string s, Uno.Text.StringBuilder sb) :119
void Json__ToLiteral3_fn(uString* s, ::g::Uno::Text::StringBuilder* sb)
{
    Json::ToLiteral3(s, sb);
}

// public static string Stringify(object value, [bool normalized]) [static] :15
uString* Json::Stringify(uObject* value, bool normalized)
{
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    Json::Stringify1(value, normalized, sb, (::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[39/*Uno.Collections.HashSet<object>*/]));
    return sb->ToString();
}

// private static void Stringify(object value, bool normalized, Uno.Text.StringBuilder sb, Uno.Collections.HashSet<object> visitedSet) [static] :22
void Json::Stringify1(uObject* value, bool normalized, ::g::Uno::Text::StringBuilder* sb, ::g::Uno::Collections::HashSet* visitedSet)
{
    bool ret1;
    bool ret2;
    bool ret3;
    bool ret4;
    bool ret5;
    bool ret6;

    if (uIs(value, ::TYPES[28/*string*/]))
        Json::ToLiteral3(uCast<uString*>(value, ::TYPES[28/*string*/]), sb);
    else if (uIs(value, ::TYPES[40/*double*/]))
        uPtr(sb)->Append2(Json::ToLiteral1(uUnbox<double>(::TYPES[40/*double*/], value)));
    else if (uIs(value, ::TYPES[41/*float*/]))
        uPtr(sb)->Append2(Json::ToLiteral1((double)uUnbox<float>(::TYPES[41/*float*/], value)));
    else if (uIs(value, ::TYPES[42/*int*/]))
        uPtr(sb)->Append2(Json::ToLiteral1((double)uUnbox<int>(::TYPES[42/*int*/], value)));
    else if (uIs(value, ::TYPES[43/*bool*/]))
        uPtr(sb)->Append2(Json::ToLiteral(uUnbox<bool>(::TYPES[43/*bool*/], value)));
    else if (uIs(value, ::TYPES[10/*Fuse.IObject*/]))
    {
        if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(visitedSet), value, &ret1), ret1))
            U_THROW(::g::Uno::Exception::New2(::STRINGS[49/*"Json.String...*/]));

        ::g::Uno::Collections::HashSet__Add_fn(uPtr(visitedSet), value, &ret2);
        uObject* obj = uAs<uObject*>(value, ::TYPES[10/*Fuse.IObject*/]);
        uPtr(sb)->Append2(::STRINGS[50/*"{"*/]);
        uArray* keys = uArray::New(::TYPES[44/*string[]*/], uPtr(::g::Fuse::IObject::Keys(uInterface(uPtr(obj), ::TYPES[10/*Fuse.IObject*/])))->Length());
        ::g::Uno::Array::Copy1(::TYPES[45/*Uno.Array.Copy<string>*/], ::g::Fuse::IObject::Keys(uInterface(obj, ::TYPES[10/*Fuse.IObject*/])), keys, uPtr(::g::Fuse::IObject::Keys(uInterface(obj, ::TYPES[10/*Fuse.IObject*/])))->Length());

        if (normalized)
            ::g::Uno::Array::Sort1(::TYPES[46/*Uno.Array.Sort<string>*/], keys, uDelegate::New(::TYPES[47/*Uno.Comparison<string>*/], (void*)::g::Uno::String__Compare_fn));

        for (int i = 0; i < keys->Length(); i++)
        {
            if (i > 0)
                uPtr(sb)->Append2(::STRINGS[51/*","*/]);

            Json::ToLiteral3(uPtr(keys)->Strong<uString*>(i), sb);
            uPtr(sb)->Append2(::STRINGS[26/*":"*/]);
            Json::Stringify1(::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[10/*Fuse.IObject*/]), keys->Strong<uString*>(i)), normalized, sb, visitedSet);
        }

        sb->Append2(::STRINGS[52/*"}"*/]);
        ::g::Uno::Collections::HashSet__Remove_fn(visitedSet, value, &ret3);
    }
    else if (uIs(value, ::TYPES[48/*Fuse.IArray*/]))
    {
        if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(visitedSet), value, &ret4), ret4))
            U_THROW(::g::Uno::Exception::New2(::STRINGS[49/*"Json.String...*/]));

        ::g::Uno::Collections::HashSet__Add_fn(uPtr(visitedSet), value, &ret5);
        uObject* arr = uAs<uObject*>(value, ::TYPES[48/*Fuse.IArray*/]);
        uPtr(sb)->Append2(::STRINGS[53/*"["*/]);

        for (int i1 = 0; i1 < ::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/])); i1++)
        {
            if (i1 > 0)
                uPtr(sb)->Append2(::STRINGS[51/*","*/]);

            Json::Stringify1(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), i1), normalized, sb, visitedSet);
        }

        sb->Append2(::STRINGS[54/*"]"*/]);
        ::g::Uno::Collections::HashSet__Remove_fn(visitedSet, value, &ret6);
    }
    else
        uPtr(sb)->Append2(::STRINGS[55/*"null"*/]);
}

// public static string ToLiteral(bool b) [static] :132
uString* Json::ToLiteral(bool b)
{
    if (b)
        return ::STRINGS[56/*"true"*/];
    else
        return ::STRINGS[57/*"false"*/];
}

// public static string ToLiteral(double s) [static] :125
uString* Json::ToLiteral1(double s)
{
    if ((double)(int)s == s)
        return ::g::Uno::Int::ToString((int)s, ::TYPES[42/*int*/]);

    return ::g::Uno::Double::ToString(s, ::TYPES[40/*double*/]);
}

// public static void ToLiteral(string s, Uno.Text.StringBuilder sb) [static] :119
void Json::ToLiteral3(uString* s, ::g::Uno::Text::StringBuilder* sb)
{
    uPtr(sb)->Append2(::g::Uno::Data::Json::JsonWriter::QuoteString(s));
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/KeyboardBootstrapper.uno
// -----------------------------------------------------------------------

// internal sealed class KeyboardBootstrapper :10
// {
static void KeyboardBootstrapper_build(uType* type)
{
    ::TYPES[49] = ::g::Uno::Exception_typeof();
    type->SetDependencies(
        ::g::Fuse::AppBase_typeof(),
        ::g::Fuse::Input::Focus_typeof(),
        ::g::Fuse::Input::Keyboard_typeof());
}

uType* KeyboardBootstrapper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(KeyboardBootstrapper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.KeyboardBootstrapper", options);
    type->fp_build_ = KeyboardBootstrapper_build;
    return type;
}

// public static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) :12
void KeyboardBootstrapper__OnKeyPressed_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    KeyboardBootstrapper::OnKeyPressed(sender, args);
}

// public static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) :29
void KeyboardBootstrapper__OnKeyReleased_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    KeyboardBootstrapper::OnKeyReleased(sender, args);
}

// public static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) [static] :12
void KeyboardBootstrapper::OnKeyPressed(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    try
    {
        if (!uPtr(args)->Handled() && (uPtr(args)->Key() == 9))
            ::g::Fuse::Input::Focus::Move(uPtr(args)->IsShiftKeyPressed() ? 0 : 1);

        ::g::Fuse::Input::Keyboard::RaiseKeyPressed(uPtr(args)->Key(), uPtr(args)->IsMetaKeyPressed(), uPtr(args)->IsControlKeyPressed(), uPtr(args)->IsShiftKeyPressed(), uPtr(args)->IsAltKeyPressed());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) [static] :29
void KeyboardBootstrapper::OnKeyReleased(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    try
    {
        ::g::Fuse::Input::Keyboard::RaiseKeyReleased(uPtr(args)->Key(), uPtr(args)->IsMetaKeyPressed(), uPtr(args)->IsControlKeyPressed(), uPtr(args)->IsShiftKeyPressed(), uPtr(args)->IsAltKeyPressed());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Layout.uno
// ----------------------------------------------------------------

// public enum Layer :8
uEnumType* Layer_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layer", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Underlay", 0LL,
        "Background", 1LL,
        "Layout", 2LL,
        "Overlay", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Layout.uno
// ----------------------------------------------------------------

// public enum LayoutDependent :50
uEnumType* LayoutDependent_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutDependent", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "No", 0LL,
        "NoArrange", 1LL,
        "Maybe", 2LL,
        "MaybeArrange", 3LL,
        "Yes", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/LayoutParams.uno
// ---------------------------------------------------------------

// public struct LayoutParams :12
// {
static void LayoutParams_build(uType* type)
{
    type->SetFields(0,
        LayoutParams__Flags_typeof(), offsetof(LayoutParams, _flags), 0,
        ::g::Uno::Float2_typeof(), offsetof(LayoutParams, _size), 0,
        ::g::Uno::Float2_typeof(), offsetof(LayoutParams, _maxSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(LayoutParams, _minSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(LayoutParams, _relativeSize), 0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&LayoutParams::_warnTrueClone_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&LayoutParams::_warnDeriveClone_, uFieldFlagsStatic);
}

uStructType* LayoutParams_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.Alignment = alignof(LayoutParams);
    options.ValueSize = sizeof(LayoutParams);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.LayoutParams", options);
    type->fp_build_ = LayoutParams_build;
    return type;
}

// public void BoxConstrain(Fuse.LayoutParams o) :318
void LayoutParams__BoxConstrain_fn(LayoutParams* __this, LayoutParams* o)
{
    __this->BoxConstrain(*o);
}

// public Fuse.LayoutParams Clone() :80
void LayoutParams__Clone_fn(LayoutParams* __this, LayoutParams* __retval)
{
    *__retval = __this->Clone();
}

// public Fuse.LayoutParams CloneAndDerive() :109
void LayoutParams__CloneAndDerive_fn(LayoutParams* __this, LayoutParams* __retval)
{
    *__retval = __this->CloneAndDerive();
}

// public void ConstrainMax(float2 max, [bool hasMaxX], [bool hasMaxY]) :275
void LayoutParams__ConstrainMax_fn(LayoutParams* __this, ::g::Uno::Float2* max, bool* hasMaxX, bool* hasMaxY)
{
    __this->ConstrainMax(*max, *hasMaxX, *hasMaxY);
}

// public void ConstrainMaxX(float max) :257
void LayoutParams__ConstrainMaxX_fn(LayoutParams* __this, float* max)
{
    __this->ConstrainMaxX(*max);
}

// public void ConstrainMaxY(float max) :266
void LayoutParams__ConstrainMaxY_fn(LayoutParams* __this, float* max)
{
    __this->ConstrainMaxY(*max);
}

// public void ConstrainMin(float2 min, [bool hasMinX], [bool hasMinY]) :304
void LayoutParams__ConstrainMin_fn(LayoutParams* __this, ::g::Uno::Float2* min, bool* hasMinX, bool* hasMinY)
{
    __this->ConstrainMin(*min, *hasMinX, *hasMinY);
}

// public void ConstrainMinX(float min) :286
void LayoutParams__ConstrainMinX_fn(LayoutParams* __this, float* min)
{
    __this->ConstrainMinX(*min);
}

// public void ConstrainMinY(float min) :295
void LayoutParams__ConstrainMinY_fn(LayoutParams* __this, float* min)
{
    __this->ConstrainMinY(*min);
}

// public static Fuse.LayoutParams Create(float2 size) :148
void LayoutParams__Create_fn(::g::Uno::Float2* size, LayoutParams* __retval)
{
    *__retval = LayoutParams__Create(*size);
}

// public static Fuse.LayoutParams CreateEmpty() :177
void LayoutParams__CreateEmpty_fn(LayoutParams* __retval)
{
    *__retval = LayoutParams__CreateEmpty();
}

// public static Fuse.LayoutParams CreateTemporary(float2 size) :157
void LayoutParams__CreateTemporary_fn(::g::Uno::Float2* size, LayoutParams* __retval)
{
    *__retval = LayoutParams__CreateTemporary(*size);
}

// public static Fuse.LayoutParams CreateXY(float2 size, bool hasX, bool hasY) :167
void LayoutParams__CreateXY_fn(::g::Uno::Float2* size, bool* hasX, bool* hasY, LayoutParams* __retval)
{
    *__retval = LayoutParams__CreateXY(*size, *hasX, *hasY);
}

// public float2 GetAvailableSize() :372
void LayoutParams__GetAvailableSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetAvailableSize();
}

// public float2 GetAvailableSize(bool& hasX, bool& hasY) :379
void LayoutParams__GetAvailableSize1_fn(LayoutParams* __this, bool* hasX, bool* hasY, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetAvailableSize1(hasX, hasY);
}

// public bool get_HasMaxSize() :52
void LayoutParams__get_HasMaxSize_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMaxSize();
}

// public bool get_HasMaxX() :50
void LayoutParams__get_HasMaxX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMaxX();
}

// public bool get_HasMaxY() :51
void LayoutParams__get_HasMaxY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMaxY();
}

// public bool get_HasMinX() :54
void LayoutParams__get_HasMinX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMinX();
}

// public bool get_HasMinY() :55
void LayoutParams__get_HasMinY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMinY();
}

// public bool get_HasRelativeX() :60
void LayoutParams__get_HasRelativeX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasRelativeX();
}

// public bool get_HasRelativeY() :69
void LayoutParams__get_HasRelativeY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasRelativeY();
}

// public bool get_HasSize() :46
void LayoutParams__get_HasSize_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasSize();
}

// public bool get_HasX() :44
void LayoutParams__get_HasX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasX();
}

// public bool get_HasY() :45
void LayoutParams__get_HasY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasY();
}

// public bool IsCompatible(Fuse.LayoutParams nlp) :457
void LayoutParams__IsCompatible_fn(LayoutParams* __this, LayoutParams* nlp, bool* __retval)
{
    *__retval = __this->IsCompatible(*nlp);
}

// public float2 get_MaxSize() :390
void LayoutParams__get_MaxSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MaxSize();
}

// public float get_MaxX() :391
void LayoutParams__get_MaxX_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MaxX();
}

// public float get_MaxY() :392
void LayoutParams__get_MaxY_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MaxY();
}

// public float2 get_MinSize() :394
void LayoutParams__get_MinSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MinSize();
}

// public float get_MinX() :395
void LayoutParams__get_MinX_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MinX();
}

// public float get_MinY() :396
void LayoutParams__get_MinY_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MinY();
}

// public float2 PointConstrain(float2 p) :328
void LayoutParams__PointConstrain_fn(LayoutParams* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PointConstrain(*p);
}

// private float2 PointConstrain(float2 p, bool& knowX, bool& knowY) :335
void LayoutParams__PointConstrain1_fn(LayoutParams* __this, ::g::Uno::Float2* p, bool* knowX, bool* knowY, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PointConstrain1(*p, knowX, knowY);
}

// public float get_RelativeX() :401
void LayoutParams__get_RelativeX_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->RelativeX();
}

// public float get_RelativeY() :410
void LayoutParams__get_RelativeY_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->RelativeY();
}

// public void RemoveSize(float2 size) :185
void LayoutParams__RemoveSize_fn(LayoutParams* __this, ::g::Uno::Float2* size)
{
    __this->RemoveSize(*size);
}

// public void RemoveSize(float4 size) :192
void LayoutParams__RemoveSize1_fn(LayoutParams* __this, ::g::Uno::Float4* size)
{
    __this->RemoveSize1(*size);
}

// public void Reset() :133
void LayoutParams__Reset_fn(LayoutParams* __this)
{
    __this->Reset();
}

// public void RetainMaxXY(bool x, bool y) :211
void LayoutParams__RetainMaxXY_fn(LayoutParams* __this, bool* x, bool* y)
{
    __this->RetainMaxXY(*x, *y);
}

// public void RetainXY(bool x, bool y) :197
void LayoutParams__RetainXY_fn(LayoutParams* __this, bool* x, bool* y)
{
    __this->RetainXY(*x, *y);
}

// private void SetFlag(Fuse.LayoutParams.Flags g, bool val) :36
void LayoutParams__SetFlag_fn(LayoutParams* __this, int* g, bool* val)
{
    __this->SetFlag(*g, *val);
}

// public void SetRelativeSize(float2 sz, bool hasX, bool hasY) :248
void LayoutParams__SetRelativeSize_fn(LayoutParams* __this, ::g::Uno::Float2* sz, bool* hasX, bool* hasY)
{
    __this->SetRelativeSize(*sz, *hasX, *hasY);
}

// public void SetSize(float2 xy, [bool hasX], [bool hasY]) :225
void LayoutParams__SetSize_fn(LayoutParams* __this, ::g::Uno::Float2* xy, bool* hasX, bool* hasY)
{
    __this->SetSize(*xy, *hasX, *hasY);
}

// public void SetX(float x) :236
void LayoutParams__SetX_fn(LayoutParams* __this, float* x)
{
    __this->SetX(*x);
}

// public void SetY(float y) :242
void LayoutParams__SetY_fn(LayoutParams* __this, float* y)
{
    __this->SetY(*y);
}

// public float2 get_Size() :386
void LayoutParams__get_Size_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public bool get_Temporary() :48
void LayoutParams__get_Temporary_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->Temporary();
}

// public float get_X() :387
void LayoutParams__get_X_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->X();
}

// public float get_Y() :388
void LayoutParams__get_Y_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->Y();
}

bool LayoutParams::_warnTrueClone_;
bool LayoutParams::_warnDeriveClone_;

// public void BoxConstrain(Fuse.LayoutParams o) [instance] :318
void LayoutParams::BoxConstrain(LayoutParams o)
{
    SetSize(o.Size(), o.HasX(), o.HasY());
    ConstrainMax(o.MaxSize(), o.HasMaxX(), o.HasMaxY());
    ConstrainMin(o.MinSize(), o.HasMinX(), o.HasMinY());
}

// public Fuse.LayoutParams Clone() [instance] :80
LayoutParams LayoutParams::Clone()
{
    LayoutParams lp = uDefault<LayoutParams>();
    lp._flags = _flags;
    lp._size = _size;
    lp._maxSize = _maxSize;
    lp._minSize = _minSize;
    lp._relativeSize = _relativeSize;
    return lp;
}

// public Fuse.LayoutParams CloneAndDerive() [instance] :109
LayoutParams LayoutParams::CloneAndDerive()
{
    LayoutParams lp = Clone();
    lp.SetFlag(128, false);
    lp.SetFlag(256, false);
    lp.SetFlag(512, false);
    lp.SetFlag(1024, false);
    lp._relativeSize = ::g::Uno::Float2__New1(0.0f);
    return lp;
}

// public void ConstrainMax(float2 max, [bool hasMaxX], [bool hasMaxY]) [instance] :275
void LayoutParams::ConstrainMax(::g::Uno::Float2 max, bool hasMaxX, bool hasMaxY)
{
    max = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), max);

    if (hasMaxX)
        ConstrainMaxX(max.X);

    if (hasMaxY)
        ConstrainMaxY(max.Y);
}

// public void ConstrainMaxX(float max) [instance] :257
void LayoutParams::ConstrainMaxX(float max)
{
    if (HasMaxX())
        _maxSize.X = ::g::Uno::Math::Min1(_maxSize.X, max);
    else
        _maxSize.X = max;

    SetFlag(8, true);
}

// public void ConstrainMaxY(float max) [instance] :266
void LayoutParams::ConstrainMaxY(float max)
{
    if (HasMaxY())
        _maxSize.Y = ::g::Uno::Math::Min1(_maxSize.Y, max);
    else
        _maxSize.Y = max;

    SetFlag(16, true);
}

// public void ConstrainMin(float2 min, [bool hasMinX], [bool hasMinY]) [instance] :304
void LayoutParams::ConstrainMin(::g::Uno::Float2 min, bool hasMinX, bool hasMinY)
{
    min = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), min);

    if (hasMinX)
        ConstrainMinX(min.X);

    if (hasMinY)
        ConstrainMinY(min.Y);
}

// public void ConstrainMinX(float min) [instance] :286
void LayoutParams::ConstrainMinX(float min)
{
    if (HasMinX())
        _minSize.X = ::g::Uno::Math::Min1(_minSize.X, min);
    else
        _minSize.X = min;

    SetFlag(32, true);
}

// public void ConstrainMinY(float min) [instance] :295
void LayoutParams::ConstrainMinY(float min)
{
    if (HasMinY())
        _minSize.Y = ::g::Uno::Math::Min1(_minSize.Y, min);
    else
        _minSize.Y = min;

    SetFlag(64, true);
}

// public float2 GetAvailableSize() [instance] :372
::g::Uno::Float2 LayoutParams::GetAvailableSize()
{
    bool x = false;
    bool y = false;
    return PointConstrain1(::g::Uno::Float2__New1(0.0f), &x, &y);
}

// public float2 GetAvailableSize(bool& hasX, bool& hasY) [instance] :379
::g::Uno::Float2 LayoutParams::GetAvailableSize1(bool* hasX, bool* hasY)
{
    *hasX = false;
    *hasY = false;
    return PointConstrain1(::g::Uno::Float2__New1(0.0f), hasX, hasY);
}

// public bool get_HasMaxSize() [instance] :52
bool LayoutParams::HasMaxSize()
{
    return HasMaxX() && HasMaxY();
}

// public bool get_HasMaxX() [instance] :50
bool LayoutParams::HasMaxX()
{
    return (_flags & 8) == 8;
}

// public bool get_HasMaxY() [instance] :51
bool LayoutParams::HasMaxY()
{
    return (_flags & 16) == 16;
}

// public bool get_HasMinX() [instance] :54
bool LayoutParams::HasMinX()
{
    return (_flags & 32) == 32;
}

// public bool get_HasMinY() [instance] :55
bool LayoutParams::HasMinY()
{
    return (_flags & 64) == 64;
}

// public bool get_HasRelativeX() [instance] :60
bool LayoutParams::HasRelativeX()
{
    if ((_flags & 512) == 512)
        return false;

    return ((_flags & 128) == 128) || HasX();
}

// public bool get_HasRelativeY() [instance] :69
bool LayoutParams::HasRelativeY()
{
    if ((_flags & 1024) == 1024)
        return false;

    return ((_flags & 256) == 256) || HasY();
}

// public bool get_HasSize() [instance] :46
bool LayoutParams::HasSize()
{
    return HasX() && HasY();
}

// public bool get_HasX() [instance] :44
bool LayoutParams::HasX()
{
    return (_flags & 1) == 1;
}

// public bool get_HasY() [instance] :45
bool LayoutParams::HasY()
{
    return (_flags & 2) == 2;
}

// public bool IsCompatible(Fuse.LayoutParams nlp) [instance] :457
bool LayoutParams::IsCompatible(LayoutParams nlp)
{
    if ((((((HasX() != nlp.HasX()) || (HasY() != nlp.HasY())) || (HasMaxX() != nlp.HasMaxX())) || (HasMaxY() != nlp.HasMaxY())) || (HasMinX() != nlp.HasMinX())) || (HasMinY() != nlp.HasMinY()))
        return false;

    float zeroTolerance = 1e-05f;

    if (HasX() && (::g::Uno::Math::Abs1(X() - nlp.X()) > 1e-05f))
        return false;

    if (HasY() && (::g::Uno::Math::Abs1(Y() - nlp.Y()) > 1e-05f))
        return false;

    if (HasMaxX() && (::g::Uno::Math::Abs1(MaxX() - nlp.MaxX()) > 1e-05f))
        return false;

    if (HasMinX() && (::g::Uno::Math::Abs1(MinX() - nlp.MinX()) > 1e-05f))
        return false;

    if (HasMaxY() && (::g::Uno::Math::Abs1(MaxY() - nlp.MaxY()) > 1e-05f))
        return false;

    if (HasMinY() && (::g::Uno::Math::Abs1(MinY() - nlp.MinY()) > 1e-05f))
        return false;

    if (HasRelativeX() && (::g::Uno::Math::Abs1(RelativeX() - nlp.RelativeX()) > 1e-05f))
        return false;

    if (HasRelativeY() && (::g::Uno::Math::Abs1(RelativeY() - nlp.RelativeY()) > 1e-05f))
        return false;

    return true;
}

// public float2 get_MaxSize() [instance] :390
::g::Uno::Float2 LayoutParams::MaxSize()
{
    return _maxSize;
}

// public float get_MaxX() [instance] :391
float LayoutParams::MaxX()
{
    return _maxSize.X;
}

// public float get_MaxY() [instance] :392
float LayoutParams::MaxY()
{
    return _maxSize.Y;
}

// public float2 get_MinSize() [instance] :394
::g::Uno::Float2 LayoutParams::MinSize()
{
    return _minSize;
}

// public float get_MinX() [instance] :395
float LayoutParams::MinX()
{
    return _minSize.X;
}

// public float get_MinY() [instance] :396
float LayoutParams::MinY()
{
    return _minSize.Y;
}

// public float2 PointConstrain(float2 p) [instance] :328
::g::Uno::Float2 LayoutParams::PointConstrain(::g::Uno::Float2 p)
{
    bool x = true;
    bool y = true;
    return PointConstrain1(p, &x, &y);
}

// private float2 PointConstrain(float2 p, bool& knowX, bool& knowY) [instance] :335
::g::Uno::Float2 LayoutParams::PointConstrain1(::g::Uno::Float2 p, bool* knowX, bool* knowY)
{
    if (HasX())
    {
        p.X = X();
        *knowX = true;
    }

    if (HasMaxX())
    {
        p.X = (*knowX ? ::g::Uno::Math::Min1(p.X, MaxX()) : MaxX());
        *knowX = true;
    }

    if (HasMinX())
    {
        p.X = (*knowX ? ::g::Uno::Math::Max1(p.X, MinX()) : MinX());
        *knowX = true;
    }

    if (HasY())
    {
        p.Y = Y();
        *knowY = true;
    }

    if (HasMaxY())
    {
        p.Y = (*knowY ? ::g::Uno::Math::Min1(p.Y, MaxY()) : MaxY());
        *knowY = true;
    }

    if (HasMinY())
    {
        p.Y = (*knowY ? ::g::Uno::Math::Max1(p.Y, MinY()) : MinY());
        *knowY = true;
    }

    return p;
}

// public float get_RelativeX() [instance] :401
float LayoutParams::RelativeX()
{
    if ((_flags & 512) == 512)
        return 0.0f;

    return ((_flags & 128) == 128) ? _relativeSize.X : _size.X;
}

// public float get_RelativeY() [instance] :410
float LayoutParams::RelativeY()
{
    if ((_flags & 1024) == 1024)
        return 0.0f;

    return ((_flags & 256) == 256) ? _relativeSize.Y : _size.Y;
}

// public void RemoveSize(float2 size) [instance] :185
void LayoutParams::RemoveSize(::g::Uno::Float2 size)
{
    _size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(_size, size));
    _maxSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(_maxSize, size));
    _minSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(_minSize, size));
}

// public void RemoveSize(float4 size) [instance] :192
void LayoutParams::RemoveSize1(::g::Uno::Float4 size)
{
    RemoveSize(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(size.X, size.Y), ::g::Uno::Float2__New2(size.Z, size.W)));
}

// public void Reset() [instance] :133
void LayoutParams::Reset()
{
    _flags = 0;
    _size = (_maxSize = (_minSize = (_relativeSize = ::g::Uno::Float2__New1(0.0f))));
}

// public void RetainMaxXY(bool x, bool y) [instance] :211
void LayoutParams::RetainMaxXY(bool x, bool y)
{
    if (!x)
    {
        _maxSize.X = 0.0f;
        SetFlag(8, false);
    }

    if (!y)
    {
        _maxSize.Y = 0.0f;
        SetFlag(16, false);
    }
}

// public void RetainXY(bool x, bool y) [instance] :197
void LayoutParams::RetainXY(bool x, bool y)
{
    if (!x)
    {
        _size.X = 0.0f;
        SetFlag(1, false);
    }

    if (!y)
    {
        _size.Y = 0.0f;
        SetFlag(2, false);
    }
}

// private void SetFlag(Fuse.LayoutParams.Flags g, bool val) [instance] :36
void LayoutParams::SetFlag(int g, bool val)
{
    if (val)
        _flags = (_flags | g);
    else
        _flags = (_flags & ~g);
}

// public void SetRelativeSize(float2 sz, bool hasX, bool hasY) [instance] :248
void LayoutParams::SetRelativeSize(::g::Uno::Float2 sz, bool hasX, bool hasY)
{
    _relativeSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), sz);
    SetFlag(128, hasX);
    SetFlag(512, !hasX);
    SetFlag(256, hasY);
    SetFlag(1024, !hasY);
}

// public void SetSize(float2 xy, [bool hasX], [bool hasY]) [instance] :225
void LayoutParams::SetSize(::g::Uno::Float2 xy, bool hasX, bool hasY)
{
    _size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), xy);
    SetFlag(1, hasX);

    if (!hasX)
        _size.X = 0.0f;

    SetFlag(2, hasY);

    if (!hasY)
        _size.Y = 0.0f;
}

// public void SetX(float x) [instance] :236
void LayoutParams::SetX(float x)
{
    SetFlag(1, true);
    _size.X = ::g::Uno::Math::Max1(x, 0.0f);
}

// public void SetY(float y) [instance] :242
void LayoutParams::SetY(float y)
{
    SetFlag(2, true);
    _size.Y = ::g::Uno::Math::Max1(y, 0.0f);
}

// public float2 get_Size() [instance] :386
::g::Uno::Float2 LayoutParams::Size()
{
    return _size;
}

// public bool get_Temporary() [instance] :48
bool LayoutParams::Temporary()
{
    return (_flags & 4) == 4;
}

// public float get_X() [instance] :387
float LayoutParams::X()
{
    return _size.X;
}

// public float get_Y() [instance] :388
float LayoutParams::Y()
{
    return _size.Y;
}

// public static Fuse.LayoutParams Create(float2 size) [static] :148
LayoutParams LayoutParams__Create(::g::Uno::Float2 size)
{
    LayoutParams lp = uDefault<LayoutParams>();
    lp.SetFlag(1, true);
    lp.SetFlag(2, true);
    lp._size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), size);
    return lp;
}

// public static Fuse.LayoutParams CreateEmpty() [static] :177
LayoutParams LayoutParams__CreateEmpty()
{
    return uDefault<LayoutParams>();
}

// public static Fuse.LayoutParams CreateTemporary(float2 size) [static] :157
LayoutParams LayoutParams__CreateTemporary(::g::Uno::Float2 size)
{
    LayoutParams lp = uDefault<LayoutParams>();
    lp.SetFlag(1, true);
    lp.SetFlag(2, true);
    lp._size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), size);
    lp.SetFlag(4, true);
    return lp;
}

// public static Fuse.LayoutParams CreateXY(float2 size, bool hasX, bool hasY) [static] :167
LayoutParams LayoutParams__CreateXY(::g::Uno::Float2 size, bool hasX, bool hasY)
{
    LayoutParams lp = uDefault<LayoutParams>();
    lp.SetFlag(1, hasX);
    lp.SetFlag(2, hasY);
    lp._size.X = (hasX ? ::g::Uno::Math::Max1(size.X, 0.0f) : 0.0f);
    lp._size.Y = (hasY ? ::g::Uno::Math::Max1(size.Y, 0.0f) : 0.0f);
    return lp;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/UpdateManager.uno
// -----------------------------------------------------------------

// public enum LayoutPriority :22
uEnumType* LayoutPriority_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutPriority", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Now", 0LL,
        "EndGroup", 1LL,
        "Layout", 2LL,
        "Placement", 3LL,
        "Later", 4LL,
        "Post", 5LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Layout.uno
// ----------------------------------------------------------------

// public enum LayoutRole :30
uEnumType* LayoutRole_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutRole", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Standard", 0LL,
        "Placeholder", 1LL,
        "Inert", 2LL,
        "Independent", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno
// --------------------------------------------------------------

// private sealed class TranslationModes.LocalMode :68
// {
static void TranslationModes__LocalMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__LocalMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__LocalMode_type, interface1));
}

TranslationModes__LocalMode_type* TranslationModes__LocalMode_typeof()
{
    static uSStrong<TranslationModes__LocalMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__LocalMode);
    options.TypeSize = sizeof(TranslationModes__LocalMode_type);
    type = (TranslationModes__LocalMode_type*)uClassType::New("Fuse.TranslationModes.LocalMode", options);
    type->fp_build_ = TranslationModes__LocalMode_build;
    type->fp_ctor_ = (void*)TranslationModes__LocalMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__LocalMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TranslationModes__LocalMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))TranslationModes__LocalMode__Unsubscribe_fn;
    return type;
}

// public generated LocalMode() :68
void TranslationModes__LocalMode__ctor__fn(TranslationModes__LocalMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t) :70
void TranslationModes__LocalMode__GetAbsVector_fn(TranslationModes__LocalMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated LocalMode New() :68
void TranslationModes__LocalMode__New1_fn(TranslationModes__LocalMode** __retval)
{
    *__retval = TranslationModes__LocalMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :71
void TranslationModes__LocalMode__Subscribe_fn(TranslationModes__LocalMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :72
void TranslationModes__LocalMode__Unsubscribe_fn(TranslationModes__LocalMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated LocalMode() [instance] :68
void TranslationModes__LocalMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :70
::g::Uno::Float3 TranslationModes__LocalMode::GetAbsVector(::g::Fuse::Translation* t)
{
    return uPtr(t)->Vector();
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :71
uObject* TranslationModes__LocalMode::Subscribe(uObject* transform)
{
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :72
void TranslationModes__LocalMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated LocalMode New() [static] :68
TranslationModes__LocalMode* TranslationModes__LocalMode::New1()
{
    TranslationModes__LocalMode* obj1 = (TranslationModes__LocalMode*)uNew(TranslationModes__LocalMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Marshal.Cast.uno
// -----------------------------------------------------------------

// public partial static class Marshal :12
// {
// static Marshal() :11
static void Marshal__cctor__fn(uType* __type)
{
    Marshal::_computers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[27/*Uno.Type*/], ::g::Fuse::Computer_typeof(), NULL)));
    Marshal::_converters_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[89/*Uno.Collections.List`1*/]->MakeType(Marshal__IConverter_typeof(), NULL)));
    ::g::Fuse::NumberComputer* number = ::g::Fuse::NumberComputer::New1();
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[40/*double*/], number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[41/*float*/], number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[42/*int*/], number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::g::Uno::Short_typeof(), number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::g::Uno::SByte_typeof(), number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::g::Uno::UInt_typeof(), number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::g::Uno::UShort_typeof(), number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::g::Uno::Byte_typeof(), number);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::g::Uno::UX::Size_typeof(), ::g::Fuse::SizeComputer::New1());
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::g::Uno::UX::Size2_typeof(), ::g::Fuse::Size2Computer::New1());
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::TYPES[28/*string*/], ::g::Fuse::StringComputer::New1());
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::g::Uno::Float2_typeof(), ::g::Fuse::Float2Computer::New1());
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::g::Uno::Float3_typeof(), ::g::Fuse::Float3Computer::New1());
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Marshal::_computers_), ::g::Uno::Float4_typeof(), ::g::Fuse::Float4Computer::New1());
    Marshal::AddConverter((uObject*)::g::Fuse::FileSourceConverter::New1());
}

static void Marshal_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Color_typeof(),
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Uno::UX::Selector_typeof(),
        ::g::Uno::Type_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), ::g::Fuse::Computer_typeof(), NULL), (uintptr_t)&Marshal::_computers_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(Marshal__IConverter_typeof(), NULL), (uintptr_t)&Marshal::_converters_, uFieldFlagsStatic);
}

uClassType* Marshal_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.MethodTypeCount = 2;
    options.DependencyCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Marshal", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->MethodTypes[1] = type->NewMethodType(1, 0,0);
    type->fp_build_ = Marshal_build;
    type->fp_cctor_ = Marshal__cctor__fn;
    return type;
}

// public static object Add(object a, object b) :46
void Marshal__Add_fn(uObject* a, uObject* b, uObject** __retval)
{
    *__retval = Marshal::Add(a, b);
}

// public static void AddConverter(Fuse.Marshal.IConverter conv) :31
void Marshal__AddConverter_fn(uObject* conv)
{
    Marshal::AddConverter(conv);
}

// public static bool CanConvertClass(Uno.Type t) :134
void Marshal__CanConvertClass_fn(uType* t, bool* __retval)
{
    *__retval = Marshal::CanConvertClass(t);
}

// public static object Divide(object a, object b) :91
void Marshal__Divide_fn(uObject* a, uObject* b, uObject** __retval)
{
    *__retval = Marshal::Divide(a, b);
}

// private static Uno.Type DominantType(Uno.Type a, Uno.Type b) :33
void Marshal__DominantType_fn(uType* a, uType* b, uType** __retval)
{
    *__retval = Marshal::DominantType(a, b);
}

// public static object EqualTo(object a, object b) :153
void Marshal__EqualTo_fn(uObject* a, uObject* b, uObject** __retval)
{
    *__retval = Marshal::EqualTo(a, b);
}

// public static object GreaterThan(object a, object b) :129
void Marshal__GreaterThan_fn(uObject* a, uObject* b, uObject** __retval)
{
    *__retval = Marshal::GreaterThan(a, b);
}

// public static bool Is(object obj, Uno.Type t) :7
void Marshal__Is_fn(uObject* obj, uType* t, bool* __retval)
{
    *__retval = Marshal::Is(obj, t);
}

// public static object LessThan(object a, object b) :104
void Marshal__LessThan_fn(uObject* a, uObject* b, uObject** __retval)
{
    *__retval = Marshal::LessThan(a, b);
}

// public static object Multiply(object a, object b) :78
void Marshal__Multiply_fn(uObject* a, uObject* b, uObject** __retval)
{
    *__retval = Marshal::Multiply(a, b);
}

// private static Uno.UX.Size StringToSize(string o) :272
void Marshal__StringToSize_fn(uString* o, ::g::Uno::UX::Size* __retval)
{
    *__retval = Marshal::StringToSize(o);
}

// private static Uno.UX.Size2 StringToSize2(string o) :258
void Marshal__StringToSize2_fn(uString* o, ::g::Uno::UX::Size2* __retval)
{
    *__retval = Marshal::StringToSize2(o);
}

// public static object Subtract(object a, object b) :65
void Marshal__Subtract_fn(uObject* a, uObject* b, uObject** __retval)
{
    *__retval = Marshal::Subtract(a, b);
}

// public static bool ToBool(object v) :14
void Marshal__ToBool_fn(uObject* v, bool* __retval)
{
    *__retval = Marshal::ToBool(v);
}

// public static double ToDouble(object v) :28
void Marshal__ToDouble_fn(uObject* v, double* __retval)
{
    *__retval = Marshal::ToDouble(v);
}

// public static bool ToDouble(object v, double& res) :35
void Marshal__ToDouble1_fn(uObject* v, double* res, bool* __retval)
{
    *__retval = Marshal::ToDouble1(v, res);
}

// public static bool ToDouble(string s, double& res) :62
void Marshal__ToDouble2_fn(uString* s, double* res, bool* __retval)
{
    *__retval = Marshal::ToDouble2(s, res);
}

// public static float ToFloat(object o) :199
void Marshal__ToFloat_fn(uObject* o, float* __retval)
{
    *__retval = Marshal::ToFloat(o);
}

// public static float2 ToFloat2(object o) :193
void Marshal__ToFloat2_fn(uObject* o, ::g::Uno::Float2* __retval)
{
    *__retval = Marshal::ToFloat2(o);
}

// public static float3 ToFloat3(object o) :187
void Marshal__ToFloat3_fn(uObject* o, ::g::Uno::Float3* __retval)
{
    *__retval = Marshal::ToFloat3(o);
}

// public static float4 ToFloat4(object o) :67
void Marshal__ToFloat4_fn(uObject* o, ::g::Uno::Float4* __retval)
{
    *__retval = Marshal::ToFloat4(o);
}

// public static int ToInt(object o) :205
void Marshal__ToInt_fn(uObject* o, int* __retval)
{
    *__retval = Marshal::ToInt(o);
}

// public static Uno.UX.Size ToSize(object o) :241
void Marshal__ToSize_fn(uObject* o, ::g::Uno::UX::Size* __retval)
{
    *__retval = Marshal::ToSize(o);
}

// public static Uno.UX.Size2 ToSize2(object o) :249
void Marshal__ToSize2_fn(uObject* o, ::g::Uno::UX::Size2* __retval)
{
    *__retval = Marshal::ToSize2(o);
}

// public static T ToType<T>(object o) :112
void Marshal__ToType_fn(uType* __type, uObject* o, uTRef __retval)
{
    __type->Base->Init();
    uObject* res;
    Marshal::TryConvertTo(__type->U(0), o, &res, NULL);
    return __retval.Store(__type->U(0), uUnboxAny(__type->U(0), res)), void();
}

// private static object ToVector(Fuse.IArray arr) :7
void Marshal__ToVector_fn(uObject* arr, uObject** __retval)
{
    *__retval = Marshal::ToVector(arr);
}

// private static object TryConvertArrayToVector(object arg) :30
void Marshal__TryConvertArrayToVector_fn(uObject* arg, uObject** __retval)
{
    *__retval = Marshal::TryConvertArrayToVector(arg);
}

// public static bool TryConvertTo(Uno.Type t, object o, object& res, [object diagnosticSource]) :47
void Marshal__TryConvertTo_fn(uType* t, uObject* o, uObject** res, uObject* diagnosticSource, bool* __retval)
{
    *__retval = Marshal::TryConvertTo(t, o, res, diagnosticSource);
}

// public static bool TryToType<T>(object o, T& res) :122
void Marshal__TryToType_fn(uType* __type, uObject* o, uTRef res, bool* __retval)
{
    __type->Base->Init();
    uObject* ores;

    if (!Marshal::TryConvertTo(__type->U(0), o, &ores, NULL) || (ores == NULL))
    {
        res.Default(__type->U(0));
        return *__retval = false, void();
    }

    res.Store(__type->U(0), uUnboxAny(__type->U(0), ores));
    return *__retval = true, void();
}

// public static bool TryToZeroFloat4(object o, float4& value, int& size) :125
void Marshal__TryToZeroFloat4_fn(uObject* o, ::g::Uno::Float4* value, int* size, bool* __retval)
{
    *__retval = Marshal::TryToZeroFloat4(o, value, size);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Marshal::_computers_;
uSStrong< ::g::Uno::Collections::List*> Marshal::_converters_;

// public static object Add(object a, object b) [static] :46
uObject* Marshal::Add(uObject* a, uObject* b)
{
    Marshal_typeof()->Init();
    bool ret3;

    if ((a == NULL) || (b == NULL))
        return NULL;

    a = Marshal::TryConvertArrayToVector(a);
    uType* ta = ::g::Uno::Object::GetType(uPtr(a));
    uType* tb = ::g::Uno::Object::GetType(uPtr(b));

    if (::g::Uno::Type::op_Equality(ta, ::TYPES[28/*string*/]) || ::g::Uno::Type::op_Equality(tb, ::TYPES[28/*string*/]))
        return ::g::Uno::String::op_Addition2(::g::Uno::Object::ToString(uPtr(a)), ::g::Uno::Object::ToString(uPtr(b)));

    uType* t = Marshal::DominantType(ta, tb);
    ::g::Fuse::Computer* c;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Marshal::_computers_), t, (void**)(&c), &ret3), ret3))
        return uPtr(c)->Add(a, b);

    U_THROW(::g::Fuse::ComputeException::New4(::STRINGS[12/*"Add"*/], a, b));
}

// public static void AddConverter(Fuse.Marshal.IConverter conv) [static] :31
void Marshal::AddConverter(uObject* conv)
{
    Marshal_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(Marshal::_converters_), conv);
}

// public static bool CanConvertClass(Uno.Type t) [static] :134
bool Marshal::CanConvertClass(uType* t)
{
    Marshal_typeof()->Init();
    uObject* ret4;

    for (int i = 0; i < uPtr(Marshal::_converters_)->Count(); i++)
        if (Marshal__IConverter::CanConvert(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Marshal::_converters_), uCRef<int>(i), &ret4), ret4)), Marshal__IConverter_typeof()), t))
            return true;

    return false;
}

// public static object Divide(object a, object b) [static] :91
uObject* Marshal::Divide(uObject* a, uObject* b)
{
    Marshal_typeof()->Init();
    bool ret5;

    if ((a == NULL) || (b == NULL))
        return NULL;

    a = Marshal::TryConvertArrayToVector(a);
    uType* t = Marshal::DominantType(::g::Uno::Object::GetType(uPtr(a)), ::g::Uno::Object::GetType(uPtr(b)));
    ::g::Fuse::Computer* c;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Marshal::_computers_), t, (void**)(&c), &ret5), ret5))
        return uPtr(c)->Divide(a, b);

    U_THROW(::g::Fuse::ComputeException::New4(::STRINGS[13/*"Divide"*/], a, b));
}

// private static Uno.Type DominantType(Uno.Type a, Uno.Type b) [static] :33
uType* Marshal::DominantType(uType* a, uType* b)
{
    Marshal_typeof()->Init();

    if (::g::Uno::Type::op_Equality(a, ::g::Uno::Float4_typeof()))
        return a;

    if (::g::Uno::Type::op_Equality(b, ::g::Uno::Float4_typeof()))
        return b;

    if (::g::Uno::Type::op_Equality(a, ::g::Uno::Float3_typeof()))
        return a;

    if (::g::Uno::Type::op_Equality(b, ::g::Uno::Float3_typeof()))
        return b;

    if (::g::Uno::Type::op_Equality(a, ::g::Uno::UX::Size2_typeof()))
        return a;

    if (::g::Uno::Type::op_Equality(b, ::g::Uno::UX::Size2_typeof()))
        return b;

    if (::g::Uno::Type::op_Equality(a, ::g::Uno::UX::Size_typeof()))
        return a;

    if (::g::Uno::Type::op_Equality(b, ::g::Uno::UX::Size_typeof()))
        return b;

    return a;
}

// public static object EqualTo(object a, object b) [static] :153
uObject* Marshal::EqualTo(uObject* a, uObject* b)
{
    Marshal_typeof()->Init();
    bool ret6;

    if ((a == NULL) || (b == NULL))
        return NULL;

    uType* t = Marshal::DominantType(::g::Uno::Object::GetType(uPtr(a)), ::g::Uno::Object::GetType(uPtr(b)));
    ::g::Fuse::Computer* c;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Marshal::_computers_), t, (void**)(&c), &ret6), ret6))
        return uBox(::TYPES[43/*bool*/], uPtr(c)->EqualTo(a, b));

    U_THROW(::g::Fuse::ComputeException::New4(::STRINGS[14/*"EqualTo"*/], a, b));
}

// public static object GreaterThan(object a, object b) [static] :129
uObject* Marshal::GreaterThan(uObject* a, uObject* b)
{
    Marshal_typeof()->Init();
    bool ret8;

    if ((a == NULL) || (b == NULL))
        return NULL;

    uType* t = Marshal::DominantType(::g::Uno::Object::GetType(uPtr(a)), ::g::Uno::Object::GetType(uPtr(b)));
    ::g::Fuse::Computer* c;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Marshal::_computers_), t, (void**)(&c), &ret8), ret8))
        return uBox(::TYPES[43/*bool*/], uPtr(c)->GreaterThan(a, b));

    U_THROW(::g::Fuse::ComputeException::New4(::STRINGS[15/*"GreaterThan"*/], a, b));
}

// public static bool Is(object obj, Uno.Type t) [static] :7
bool Marshal::Is(uObject* obj, uType* t)
{
    Marshal_typeof()->Init();

    if (obj == NULL)
        return false;

    if (::g::Uno::Type::IsInterface(uPtr(t)))
    {
        uArray* intf = ::g::Uno::Type::GetInterfaces(uPtr(::g::Uno::Object::GetType(uPtr(obj))));

        for (int i = 0; i < uPtr(intf)->Length(); i++)
            if (::g::Uno::Type::op_Equality(uPtr(intf)->Strong<uType*>(i), t))
                return true;
    }
    else
    {
        uType* objType = ::g::Uno::Object::GetType(uPtr(obj));

        if (::g::Uno::Type::op_Equality(t, objType) || ::g::Uno::Type::IsSubclassOf(uPtr(::g::Uno::Object::GetType(obj)), t))
            return true;
    }

    return false;
}

// public static object LessThan(object a, object b) [static] :104
uObject* Marshal::LessThan(uObject* a, uObject* b)
{
    Marshal_typeof()->Init();
    bool ret10;

    if ((a == NULL) || (b == NULL))
        return NULL;

    uType* t = Marshal::DominantType(::g::Uno::Object::GetType(uPtr(a)), ::g::Uno::Object::GetType(uPtr(b)));
    ::g::Fuse::Computer* c;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Marshal::_computers_), t, (void**)(&c), &ret10), ret10))
        return uBox(::TYPES[43/*bool*/], uPtr(c)->LessThan(a, b));

    U_THROW(::g::Fuse::ComputeException::New4(::STRINGS[16/*"LessThan"*/], a, b));
}

// public static object Multiply(object a, object b) [static] :78
uObject* Marshal::Multiply(uObject* a, uObject* b)
{
    Marshal_typeof()->Init();
    bool ret13;

    if ((a == NULL) || (b == NULL))
        return NULL;

    a = Marshal::TryConvertArrayToVector(a);
    uType* t = Marshal::DominantType(::g::Uno::Object::GetType(uPtr(a)), ::g::Uno::Object::GetType(uPtr(b)));
    ::g::Fuse::Computer* c;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Marshal::_computers_), t, (void**)(&c), &ret13), ret13))
        return uPtr(c)->Multiply(a, b);

    U_THROW(::g::Fuse::ComputeException::New4(::STRINGS[17/*"Multiply"*/], a, b));
}

// private static Uno.UX.Size StringToSize(string o) [static] :272
::g::Uno::UX::Size Marshal::StringToSize(uString* o)
{
    Marshal_typeof()->Init();
    uString* s = ::g::Uno::String::Trim(uPtr(o));
    int unit = 1;

    if (::g::Uno::String::EndsWith(uPtr(s), uString::Const("%")))
    {
        unit = 4;
        s = ::g::Uno::String::Substring1(uPtr(s), 0, uPtr(s)->Length() - 1);
    }
    else if (::g::Uno::String::EndsWith(uPtr(s), uString::Const("pt")))
    {
        unit = 2;
        s = ::g::Uno::String::Substring1(uPtr(s), 0, uPtr(s)->Length() - 2);
    }
    else if (::g::Uno::String::EndsWith(uPtr(s), uString::Const("px")))
    {
        unit = 3;
        s = ::g::Uno::String::Substring1(uPtr(s), 0, uPtr(s)->Length() - 2);
    }

    float v;

    if (!::g::Uno::Float::TryParse(s, &v))
        U_THROW(::g::Fuse::MarshalException::New4(o, ::g::Uno::UX::Size_typeof()));

    return ::g::Uno::UX::Size__New1(v, unit);
}

// private static Uno.UX.Size2 StringToSize2(string o) [static] :258
::g::Uno::UX::Size2 Marshal::StringToSize2(uString* o)
{
    Marshal_typeof()->Init();

    if (::g::Uno::String::Contains(uPtr(o), ::STRINGS[51/*","*/]))
    {
        uArray* p = ::g::Uno::String::Split(uPtr(o), uArray::Init<int>(::g::Uno::Char_typeof()->Array(), 1, ','));
        return ::g::Uno::UX::Size2__New1(Marshal::StringToSize(uPtr(p)->Strong<uString*>(0)), Marshal::StringToSize(uPtr(p)->Strong<uString*>(1)));
    }
    else
    {
        ::g::Uno::UX::Size s = Marshal::StringToSize(o);
        return ::g::Uno::UX::Size2__New1(s, s);
    }
}

// public static object Subtract(object a, object b) [static] :65
uObject* Marshal::Subtract(uObject* a, uObject* b)
{
    Marshal_typeof()->Init();
    bool ret14;

    if ((a == NULL) || (b == NULL))
        return NULL;

    a = Marshal::TryConvertArrayToVector(a);
    uType* t = Marshal::DominantType(::g::Uno::Object::GetType(uPtr(a)), ::g::Uno::Object::GetType(uPtr(b)));
    ::g::Fuse::Computer* c;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Marshal::_computers_), t, (void**)(&c), &ret14), ret14))
        return uPtr(c)->Subtract(a, b);

    U_THROW(::g::Fuse::ComputeException::New4(::STRINGS[18/*"Subtract"*/], a, b));
}

// public static bool ToBool(object v) [static] :14
bool Marshal::ToBool(uObject* v)
{
    Marshal_typeof()->Init();

    if (uIs(v, ::TYPES[43/*bool*/]))
        return uUnbox<bool>(::TYPES[43/*bool*/], v);
    else if (uIs(v, ::TYPES[28/*string*/]))
    {
        uString* s = uCast<uString*>(v, ::TYPES[28/*string*/]);

        if (::g::Uno::String::op_Equality(s, ::STRINGS[56/*"true"*/]))
            return true;

        if (::g::Uno::String::op_Equality(s, uString::Const("True")))
            return true;

        if (::g::Uno::String::op_Equality(s, ::STRINGS[57/*"false"*/]))
            return false;

        if (::g::Uno::String::op_Equality(s, uString::Const("False")))
            return false;
    }

    U_THROW(::g::Fuse::MarshalException::New4(v, ::TYPES[43/*bool*/]));
}

// public static double ToDouble(object v) [static] :28
double Marshal::ToDouble(uObject* v)
{
    Marshal_typeof()->Init();
    double res;

    if (Marshal::ToDouble1(v, &res))
        return res;

    U_THROW(::g::Fuse::MarshalException::New4(v, ::TYPES[40/*double*/]));
}

// public static bool ToDouble(object v, double& res) [static] :35
bool Marshal::ToDouble1(uObject* v, double* res)
{
    Marshal_typeof()->Init();

    if (uIs(v, ::TYPES[40/*double*/]))
    {
        *res = uUnbox<double>(::TYPES[40/*double*/], v);
        return true;
    }
    else if (uIs(v, ::TYPES[41/*float*/]))
    {
        *res = (double)uUnbox<float>(::TYPES[41/*float*/], v);
        return true;
    }
    else if (uIs(v, ::TYPES[28/*string*/]))
        return Marshal::ToDouble2(uCast<uString*>(v, ::TYPES[28/*string*/]), res);
    else if (uIs(v, ::TYPES[42/*int*/]))
    {
        *res = (double)uUnbox<int>(::TYPES[42/*int*/], v);
        return true;
    }
    else if (uIs(v, ::g::Uno::Float2_typeof()))
    {
        *res = (double)uUnbox< ::g::Uno::Float2>(::g::Uno::Float2_typeof(), v).X;
        return true;
    }
    else if (uIs(v, ::g::Uno::Float3_typeof()))
    {
        *res = (double)uUnbox< ::g::Uno::Float3>(::g::Uno::Float3_typeof(), v).X;
        return true;
    }
    else if (uIs(v, ::g::Uno::Float4_typeof()))
    {
        *res = (double)uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v).X;
        return true;
    }
    else if (uIs(v, ::g::Uno::UX::Size_typeof()))
    {
        *res = (double)uUnbox< ::g::Uno::UX::Size>(::g::Uno::UX::Size_typeof(), v).Value;
        return true;
    }
    else if (uIs(v, ::g::Uno::UX::Size2_typeof()))
    {
        ::g::Uno::UX::Size2 s = uUnbox< ::g::Uno::UX::Size2>(::g::Uno::UX::Size2_typeof(), v);
        ::g::Uno::UX::Size x = s.X;
        *res = (double)x.Value;
        return true;
    }
    else if (uIs(v, ::g::Uno::UInt_typeof()))
    {
        *res = (double)uUnbox<uint32_t>(::g::Uno::UInt_typeof(), v);
        return true;
    }
    else if (uIs(v, ::g::Uno::Short_typeof()))
    {
        *res = (double)uUnbox<int16_t>(::g::Uno::Short_typeof(), v);
        return true;
    }
    else if (uIs(v, ::g::Uno::UShort_typeof()))
    {
        *res = (double)uUnbox<uint16_t>(::g::Uno::UShort_typeof(), v);
        return true;
    }
    else if (uIs(v, ::g::Uno::Byte_typeof()))
    {
        *res = (double)uUnbox<uint8_t>(::g::Uno::Byte_typeof(), v);
        return true;
    }
    else if (uIs(v, ::g::Uno::SByte_typeof()))
    {
        *res = (double)uUnbox<int8_t>(::g::Uno::SByte_typeof(), v);
        return true;
    }

    *res = 0;
    return false;
}

// public static bool ToDouble(string s, double& res) [static] :62
bool Marshal::ToDouble2(uString* s, double* res)
{
    Marshal_typeof()->Init();
    return ::g::Uno::Double::TryParse(s, res);
}

// public static float ToFloat(object o) [static] :199
float Marshal::ToFloat(uObject* o)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::TYPES[41/*float*/]))
        return uUnbox<float>(::TYPES[41/*float*/], o);
    else
        return (float)Marshal::ToDouble(o);
}

// public static float2 ToFloat2(object o) [static] :193
::g::Uno::Float2 Marshal::ToFloat2(uObject* o)
{
    Marshal_typeof()->Init();
    ::g::Uno::Float4 ind2;

    if (uIs(o, ::g::Uno::Float2_typeof()))
        return uUnbox< ::g::Uno::Float2>(::g::Uno::Float2_typeof(), o);
    else
        return (ind2 = Marshal::ToFloat4(o), ::g::Uno::Float2__New2(ind2.X, ind2.Y));
}

// public static float3 ToFloat3(object o) [static] :187
::g::Uno::Float3 Marshal::ToFloat3(uObject* o)
{
    Marshal_typeof()->Init();
    ::g::Uno::Float4 ind1;

    if (uIs(o, ::g::Uno::Float3_typeof()))
        return uUnbox< ::g::Uno::Float3>(::g::Uno::Float3_typeof(), o);
    else
        return (ind1 = Marshal::ToFloat4(o), ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z));
}

// public static float4 ToFloat4(object o) [static] :67
::g::Uno::Float4 Marshal::ToFloat4(uObject* o)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::g::Uno::Float4_typeof()))
        return uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), o);
    else if (uIs(o, ::g::Uno::Float3_typeof()))
    {
        ::g::Uno::Float3 f = uUnbox< ::g::Uno::Float3>(::g::Uno::Float3_typeof(), o);
        return ::g::Uno::Float4__New2(f.X, f.Y, f.Z, 1.0f);
    }
    else if (uIs(o, ::g::Uno::Float2_typeof()))
    {
        ::g::Uno::Float2 f1 = uUnbox< ::g::Uno::Float2>(::g::Uno::Float2_typeof(), o);
        return ::g::Uno::Float4__New2(f1.X, f1.Y, f1.X, f1.Y);
    }
    else if (uIs(o, ::TYPES[28/*string*/]))
    {
        uString* s = uCast<uString*>(o, ::TYPES[28/*string*/]);

        if (::g::Uno::String::StartsWith(uPtr(s), uString::Const("#")))
            return ::g::Uno::Color::FromHex(s);
    }
    else if (uIs(o, ::g::Uno::UX::Size_typeof()))
    {
        ::g::Uno::UX::Size s1 = uUnbox< ::g::Uno::UX::Size>(::g::Uno::UX::Size_typeof(), o);
        return ::g::Uno::Float4__New1(s1.Value);
    }
    else if (uIs(o, ::g::Uno::UX::Size2_typeof()))
    {
        ::g::Uno::UX::Size2 s2 = uUnbox< ::g::Uno::UX::Size2>(::g::Uno::UX::Size2_typeof(), o);
        ::g::Uno::UX::Size x = s2.X;
        ::g::Uno::UX::Size y = s2.Y;
        return ::g::Uno::Float4__New2(x.Value, y.Value, x.Value, y.Value);
    }
    else if (uIs(o, ::TYPES[48/*Fuse.IArray*/]))
    {
        uObject* a = (uObject*)o;
        float x1 = (::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[48/*Fuse.IArray*/])) > 0) ? Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(uPtr(a), ::TYPES[48/*Fuse.IArray*/]), 0)) : 0.0f;
        float y1 = (::g::Fuse::IArray::Length(uInterface(a, ::TYPES[48/*Fuse.IArray*/])) > 1) ? Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(a, ::TYPES[48/*Fuse.IArray*/]), 1)) : 0.0f;
        float z = (::g::Fuse::IArray::Length(uInterface(a, ::TYPES[48/*Fuse.IArray*/])) > 2) ? Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(a, ::TYPES[48/*Fuse.IArray*/]), 2)) : 0.0f;
        float w = (::g::Fuse::IArray::Length(uInterface(a, ::TYPES[48/*Fuse.IArray*/])) > 3) ? Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(a, ::TYPES[48/*Fuse.IArray*/]), 3)) : 1.0f;
        return ::g::Uno::Float4__New2(x1, y1, z, w);
    }

    double d;

    if (Marshal::ToDouble1(o, &d))
    {
        float f2 = (float)d;
        return ::g::Uno::Float4__New1(f2);
    }

    U_THROW(::g::Fuse::MarshalException::New4(o, ::g::Uno::Float4_typeof()));
}

// public static int ToInt(object o) [static] :205
int Marshal::ToInt(uObject* o)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::TYPES[42/*int*/]))
        return uUnbox<int>(::TYPES[42/*int*/], o);
    else
        return (int)Marshal::ToDouble(o);
}

// public static Uno.UX.Size ToSize(object o) [static] :241
::g::Uno::UX::Size Marshal::ToSize(uObject* o)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::g::Uno::UX::Size_typeof()))
        return uUnbox< ::g::Uno::UX::Size>(::g::Uno::UX::Size_typeof(), o);
    else if (uIs(o, ::g::Uno::UX::Size2_typeof()))
        return uUnbox< ::g::Uno::UX::Size2>(::g::Uno::UX::Size2_typeof(), o).X;
    else if (uIs(o, ::TYPES[28/*string*/]))
        return Marshal::StringToSize(uCast<uString*>(o, ::TYPES[28/*string*/]));
    else
        return ::g::Uno::UX::Size__op_Implicit(Marshal::ToFloat(o));
}

// public static Uno.UX.Size2 ToSize2(object o) [static] :249
::g::Uno::UX::Size2 Marshal::ToSize2(uObject* o)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::g::Uno::UX::Size2_typeof()))
        return uUnbox< ::g::Uno::UX::Size2>(::g::Uno::UX::Size2_typeof(), o);
    else if (uIs(o, ::g::Uno::UX::Size_typeof()))
        return ::g::Uno::UX::Size2__New1(uUnbox< ::g::Uno::UX::Size>(::g::Uno::UX::Size_typeof(), o), uUnbox< ::g::Uno::UX::Size>(::g::Uno::UX::Size_typeof(), o));
    else if (uIs(o, ::TYPES[28/*string*/]))
        return Marshal::StringToSize2(uCast<uString*>(o, ::TYPES[28/*string*/]));
    else if (uIs(o, ::TYPES[48/*Fuse.IArray*/]))
        return Marshal::ToSize2(Marshal::ToVector((uObject*)o));
    else
        return ::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__op_Implicit(Marshal::ToFloat2(o).X), ::g::Uno::UX::Size__op_Implicit(Marshal::ToFloat2(o).Y));
}

// private static object ToVector(Fuse.IArray arr) [static] :7
uObject* Marshal::ToVector(uObject* arr)
{
    Marshal_typeof()->Init();

    if (::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/])) == 1)
    {
        if (uIs((uObject*)::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 0), ::g::Uno::UX::Size_typeof()))
            return uBox(::g::Uno::UX::Size_typeof(), uUnbox< ::g::Uno::UX::Size>(::g::Uno::UX::Size_typeof(), ::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 0)));
        else
            return uBox(::TYPES[41/*float*/], Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 0)));
    }
    else if (::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/])) == 2)
    {
        if (uIs((uObject*)::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 0), ::g::Uno::UX::Size_typeof()) || uIs((uObject*)::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 1), ::g::Uno::UX::Size_typeof()))
            return uBox(::g::Uno::UX::Size2_typeof(), ::g::Uno::UX::Size2__New1(Marshal::ToSize(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 0)), Marshal::ToSize(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 1))));
        else
            return uBox(::g::Uno::Float2_typeof(), ::g::Uno::Float2__New2(Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 0)), Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 1))));
    }
    else if (::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/])) == 3)
        return uBox(::g::Uno::Float3_typeof(), ::g::Uno::Float3__New2(Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 0)), Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 1)), Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 2))));
    else if (::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/])) == 4)
        return uBox(::g::Uno::Float4_typeof(), ::g::Uno::Float4__New2(Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 0)), Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 1)), Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 2)), Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[48/*Fuse.IArray*/]), 3))));
    else
        U_THROW(::g::Fuse::MarshalException::New4(arr, ::g::Uno::Float4_typeof()));
}

// private static object TryConvertArrayToVector(object arg) [static] :30
uObject* Marshal::TryConvertArrayToVector(uObject* arg)
{
    Marshal_typeof()->Init();
    uObject* arr = uAs<uObject*>(arg, ::TYPES[48/*Fuse.IArray*/]);

    if (arr != NULL)
        return Marshal::ToVector(arr);

    return arg;
}

// public static bool TryConvertTo(Uno.Type t, object o, object& res, [object diagnosticSource]) [static] :47
bool Marshal::TryConvertTo(uType* t, uObject* o, uObject** res, uObject* diagnosticSource)
{
    Marshal_typeof()->Init();
    uObject* ret15;

    if (o == NULL)
    {
        *res = NULL;
        return true;
    }

    try
    {
        if (::g::Uno::Type::IsValueType(uPtr(t)))
        {
            if (::g::Uno::Type::op_Equality(t, ::TYPES[40/*double*/]))
            {
                *res = uBox(::TYPES[40/*double*/], Marshal::ToDouble(o));
                return true;
            }
            else if (::g::Uno::Type::op_Equality(t, ::g::Uno::UX::Selector_typeof()))
            {
                *res = uBox(::g::Uno::UX::Selector_typeof(), ::g::Uno::UX::Selector__op_Implicit(::g::Uno::Object::ToString(uPtr(o))));
                return true;
            }
            else if (::g::Uno::Type::op_Equality(t, ::TYPES[41/*float*/]))
            {
                *res = uBox(::TYPES[41/*float*/], Marshal::ToFloat(o));
                return true;
            }
            else if (::g::Uno::Type::op_Equality(t, ::TYPES[42/*int*/]))
            {
                *res = uBox<int>(::TYPES[42/*int*/], Marshal::ToInt(o));
                return true;
            }
            else if (::g::Uno::Type::op_Equality(t, ::TYPES[43/*bool*/]))
            {
                *res = uBox(::TYPES[43/*bool*/], Marshal::ToBool(o));
                return true;
            }
            else if (::g::Uno::Type::op_Equality(t, ::g::Uno::UX::Size_typeof()))
            {
                *res = uBox(::g::Uno::UX::Size_typeof(), Marshal::ToSize(o));
                return true;
            }
            else if (::g::Uno::Type::op_Equality(t, ::g::Uno::UX::Size2_typeof()))
            {
                *res = uBox(::g::Uno::UX::Size2_typeof(), Marshal::ToSize2(o));
                return true;
            }
            else if (::g::Uno::Type::op_Equality(t, ::g::Uno::Float2_typeof()))
            {
                *res = uBox(::g::Uno::Float2_typeof(), Marshal::ToFloat2(o));
                return true;
            }
            else if (::g::Uno::Type::op_Equality(t, ::g::Uno::Float3_typeof()))
            {
                *res = uBox(::g::Uno::Float3_typeof(), Marshal::ToFloat3(o));
                return true;
            }
            else if (::g::Uno::Type::op_Equality(t, ::g::Uno::Float4_typeof()))
            {
                *res = uBox(::g::Uno::Float4_typeof(), Marshal::ToFloat4(o));
                return true;
            }
            else if (::g::Uno::Type::IsEnum(uPtr(t)) && uIs(o, ::TYPES[28/*string*/]))
            {
                *res = ::g::Uno::Enum::Parse(t, uCast<uString*>(o, ::TYPES[28/*string*/]));
                return true;
            }
        }
        else if (::g::Uno::Type::op_Equality(t, ::TYPES[28/*string*/]))
        {
            *res = ::g::Uno::Object::ToString(uPtr(o));
            return true;
        }

        uType* ot = ::g::Uno::Object::GetType(uPtr(o));

        if (::g::Uno::Type::op_Equality(ot, t) || ::g::Uno::Type::IsSubclassOf(uPtr(ot), t))
        {
            *res = o;
            return true;
        }

        if (::g::Uno::Type::op_Equality(t, ::TYPES[48/*Fuse.IArray*/]))
        {
            if (uIs(o, ::TYPES[48/*Fuse.IArray*/]))
                *res = o;
            else
                *res = Marshal__SingleArray::New1(o);

            return true;
        }

        for (int i = 0; i < uPtr(Marshal::_converters_)->Count(); i++)
        {
            uObject* c = Marshal__IConverter::TryConvert(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Marshal::_converters_), uCRef<int>(i), &ret15), ret15)), Marshal__IConverter_typeof()), t, o);

            if (c != NULL)
            {
                *res = c;
                return true;
            }
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }

    if (diagnosticSource != NULL)
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[58/*"Cannot conv...*/], o), uString::Const("' to target type '")), t), ::STRINGS[11/*"'"*/]), diagnosticSource, uString::Const("/usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Marshal.Convert.uno"), 103, uString::Const("TryConvertTo"), NULL);

    *res = NULL;
    return false;
}

// public static bool TryToZeroFloat4(object o, float4& value, int& size) [static] :125
bool Marshal::TryToZeroFloat4(uObject* o, ::g::Uno::Float4* value, int* size)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::g::Uno::Float4_typeof()))
    {
        *value = uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), o);
        *size = 4;
        return true;
    }

    if (uIs(o, ::g::Uno::Float3_typeof()))
    {
        ::g::Uno::Float3 f = uUnbox< ::g::Uno::Float3>(::g::Uno::Float3_typeof(), o);
        *value = ::g::Uno::Float4__New2(f.X, f.Y, f.Z, 0.0f);
        *size = 3;
        return true;
    }

    if (uIs(o, ::g::Uno::Float2_typeof()))
    {
        ::g::Uno::Float2 f1 = uUnbox< ::g::Uno::Float2>(::g::Uno::Float2_typeof(), o);
        *value = ::g::Uno::Float4__New2(f1.X, f1.Y, 0.0f, 0.0f);
        *size = 2;
        return true;
    }

    if (uIs(o, ::TYPES[28/*string*/]))
    {
        uString* s = uCast<uString*>(o, ::TYPES[28/*string*/]);

        if (::g::Uno::String::StartsWith(uPtr(s), uString::Const("#")))
        {
            *value = ::g::Uno::Color::FromHex(s);
            *size = 4;
            return true;
        }
    }
    else if (uIs(o, ::TYPES[48/*Fuse.IArray*/]))
    {
        uObject* a = (uObject*)o;
        float x = (::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[48/*Fuse.IArray*/])) > 0) ? Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(uPtr(a), ::TYPES[48/*Fuse.IArray*/]), 0)) : 0.0f;
        float y = (::g::Fuse::IArray::Length(uInterface(a, ::TYPES[48/*Fuse.IArray*/])) > 1) ? Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(a, ::TYPES[48/*Fuse.IArray*/]), 1)) : 0.0f;
        float z = (::g::Fuse::IArray::Length(uInterface(a, ::TYPES[48/*Fuse.IArray*/])) > 2) ? Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(a, ::TYPES[48/*Fuse.IArray*/]), 2)) : 0.0f;
        float w = (::g::Fuse::IArray::Length(uInterface(a, ::TYPES[48/*Fuse.IArray*/])) > 3) ? Marshal::ToFloat(::g::Fuse::IArray::Item(uInterface(a, ::TYPES[48/*Fuse.IArray*/]), 3)) : 0.0f;
        *value = ::g::Uno::Float4__New2(x, y, z, w);
        *size = ::g::Fuse::IArray::Length(uInterface(a, ::TYPES[48/*Fuse.IArray*/]));
        return true;
    }

    double d;

    if (Marshal::ToDouble1(o, &d))
    {
        float f2 = (float)d;
        *value = ::g::Uno::Float4__New2(f2, 0.0f, 0.0f, 0.0f);
        *size = 1;
        return true;
    }

    *value = ::g::Uno::Float4__New1(0.0f);
    *size = 0;
    return false;
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Marshal.Cast.uno
// -----------------------------------------------------------------

// public sealed class MarshalException :7
// {
static void MarshalException_build(uType* type)
{
    ::STRINGS[58] = uString::Const("Cannot convert '");
    ::STRINGS[59] = uString::Const("' to required target type '");
    ::STRINGS[11] = uString::Const("'");
    type->SetFields(4);
}

::g::Uno::Exception_type* MarshalException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MarshalException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.MarshalException", options);
    type->fp_build_ = MarshalException_build;
    return type;
}

// public MarshalException(object v, Uno.Type t) :9
void MarshalException__ctor_3_fn(MarshalException* __this, uObject* v, uType* t)
{
    __this->ctor_3(v, t);
}

// public MarshalException New(object v, Uno.Type t) :9
void MarshalException__New4_fn(uObject* v, uType* t, MarshalException** __retval)
{
    *__retval = MarshalException::New4(v, t);
}

// public MarshalException(object v, Uno.Type t) [instance] :9
void MarshalException::ctor_3(uObject* v, uType* t)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[58/*"Cannot conv...*/], v), ::STRINGS[59/*"' to requir...*/]), t), ::STRINGS[11/*"'"*/]));
}

// public MarshalException New(object v, Uno.Type t) [static] :9
MarshalException* MarshalException::New4(uObject* v, uType* t)
{
    MarshalException* obj1 = (MarshalException*)uNew(MarshalException_typeof());
    obj1->ctor_3(v, t);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/MobileBootstrapping.uno
// ----------------------------------------------------------------------

// internal sealed extern class MobileBootstrapping :6
// {
static void MobileBootstrapping_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    ::TYPES[50] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&MobileBootstrapping::_isInited_, uFieldFlagsStatic);
}

uType* MobileBootstrapping_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MobileBootstrapping);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.MobileBootstrapping", options);
    type->fp_build_ = MobileBootstrapping_build;
    return type;
}

// public static void Init() :9
void MobileBootstrapping__Init_fn()
{
    MobileBootstrapping::Init();
}

// private static void OnEnterForeground(Fuse.Platform.ApplicationState state) :38
void MobileBootstrapping__OnEnterForeground_fn(int* state)
{
    MobileBootstrapping::OnEnterForeground(*state);
}

// private static void OnEnterInteractive(Fuse.Platform.ApplicationState state) :43
void MobileBootstrapping__OnEnterInteractive_fn(int* state)
{
    MobileBootstrapping::OnEnterInteractive(*state);
}

// private static void OnExitInteractive(Fuse.Platform.ApplicationState state) :48
void MobileBootstrapping__OnExitInteractive_fn(int* state)
{
    MobileBootstrapping::OnExitInteractive(*state);
}

// private static void OnStarted(Fuse.Platform.ApplicationState state) :33
void MobileBootstrapping__OnStarted_fn(int* state)
{
    MobileBootstrapping::OnStarted(*state);
}

// private static void OnTerminating(Fuse.Platform.ApplicationState state) :24
void MobileBootstrapping__OnTerminating_fn(int* state)
{
    MobileBootstrapping::OnTerminating(*state);
}

bool MobileBootstrapping::_isInited_;

// public static void Init() [static] :9
void MobileBootstrapping::Init()
{
    if (MobileBootstrapping::_isInited_)
        return;

    MobileBootstrapping::_isInited_ = true;
    ::g::Fuse::Platform::Lifecycle::add_Started(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnStarted_fn));
    ::g::Fuse::Platform::Lifecycle::add_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnEnterForeground_fn));
    ::g::Fuse::Platform::Lifecycle::add_EnteringInteractive(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnEnterInteractive_fn));
    ::g::Fuse::Platform::Lifecycle::add_ExitedInteractive(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnExitInteractive_fn));
    ::g::Fuse::Platform::Lifecycle::add_Terminating(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnTerminating_fn));
    ::g::Uno::Platform::EventSources::HardwareKeys::add_KeyDown(uDelegate::New(::TYPES[50/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyPressed_fn));
    ::g::Uno::Platform::EventSources::HardwareKeys::add_KeyUp(uDelegate::New(::TYPES[50/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyReleased_fn));
}

// private static void OnEnterForeground(Fuse.Platform.ApplicationState state) [static] :38
void MobileBootstrapping::OnEnterForeground(int state)
{
    uPtr(::g::Uno::Platform::Displays::MainDisplay())->TicksPerSecond(20U);
}

// private static void OnEnterInteractive(Fuse.Platform.ApplicationState state) [static] :43
void MobileBootstrapping::OnEnterInteractive(int state)
{
    uPtr(::g::Uno::Platform::Displays::MainDisplay())->TicksPerSecond(60U);
}

// private static void OnExitInteractive(Fuse.Platform.ApplicationState state) [static] :48
void MobileBootstrapping::OnExitInteractive(int state)
{
    uPtr(::g::Uno::Platform::Displays::MainDisplay())->TicksPerSecond(20U);
}

// private static void OnStarted(Fuse.Platform.ApplicationState state) [static] :33
void MobileBootstrapping::OnStarted(int state)
{
    uPtr(::g::Uno::Platform::CoreApp::Current())->Load();
}

// private static void OnTerminating(Fuse.Platform.ApplicationState state) [static] :24
void MobileBootstrapping::OnTerminating(int state)
{
    ::g::Fuse::Platform::Lifecycle::remove_Started(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnStarted_fn));
    ::g::Fuse::Platform::Lifecycle::remove_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnEnterForeground_fn));
    ::g::Fuse::Platform::Lifecycle::remove_EnteringInteractive(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnEnterInteractive_fn));
    ::g::Fuse::Platform::Lifecycle::remove_ExitedInteractive(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnExitInteractive_fn));
    ::g::Fuse::Platform::Lifecycle::remove_Terminating(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnTerminating_fn));
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/NameRegistry.uno
// ---------------------------------------------------------------

// public static class NameRegistry :14
// {
// static generated NameRegistry() :14
static void NameRegistry__cctor__fn(uType* __type)
{
    NameRegistry::_nameToObj_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[51/*Uno.Collections.Dictionary<Uno.UX.Selector, Uno.Collections.List<Fuse.Node>>*/]));
    NameRegistry::_names_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[52/*Uno.Collections.Dictionary<Fuse.Node, Uno.UX.Selector>*/]));
    NameRegistry::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[53/*Uno.Collections.Dictionary<Uno.UX.Selector, Uno.Collections.List<Fuse.INameListener>>*/]));
}

static void NameRegistry_build(uType* type)
{
    ::TYPES[51] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Selector_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), NULL);
    ::TYPES[52] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), ::g::Uno::UX::Selector_typeof(), NULL);
    ::TYPES[53] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Selector_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::INameListener_typeof(), NULL), NULL);
    ::TYPES[54] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::INameListener_typeof(), NULL);
    ::TYPES[55] = ::g::Fuse::INameListener_typeof();
    ::TYPES[56] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::UX::Selector_typeof());
    type->SetFields(0,
        ::TYPES[53/*Uno.Collections.Dictionary<Uno.UX.Selector, Uno.Collections.List<Fuse.INameListener>>*/], (uintptr_t)&NameRegistry::_listeners_, uFieldFlagsStatic,
        ::TYPES[52/*Uno.Collections.Dictionary<Fuse.Node, Uno.UX.Selector>*/], (uintptr_t)&NameRegistry::_names_, uFieldFlagsStatic,
        ::TYPES[51/*Uno.Collections.Dictionary<Uno.UX.Selector, Uno.Collections.List<Fuse.Node>>*/], (uintptr_t)&NameRegistry::_nameToObj_, uFieldFlagsStatic);
}

uClassType* NameRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.NameRegistry", options);
    type->fp_build_ = NameRegistry_build;
    type->fp_cctor_ = NameRegistry__cctor__fn;
    return type;
}

// public static void AddListener(Uno.UX.Selector name, Fuse.INameListener listener) :75
void NameRegistry__AddListener_fn(::g::Uno::UX::Selector* name, uObject* listener)
{
    NameRegistry::AddListener(*name, listener);
}

// public static void ClearName(Fuse.Node obj) :68
void NameRegistry__ClearName_fn(::g::Fuse::Node* obj)
{
    NameRegistry::ClearName(obj);
}

// internal static Uno.Collections.List<Fuse.Node> GetObjectsWithName(Uno.UX.Selector name) :55
void NameRegistry__GetObjectsWithName_fn(::g::Uno::UX::Selector* name, ::g::Uno::Collections::List** __retval)
{
    *__retval = NameRegistry::GetObjectsWithName(*name);
}

// private static void NotifyNameChanged(Fuse.Node obj, Uno.UX.Selector name) :108
void NameRegistry__NotifyNameChanged_fn(::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    NameRegistry::NotifyNameChanged(obj, *name);
}

// public static void RemoveListener(Uno.UX.Selector name, Fuse.INameListener listener) :85
void NameRegistry__RemoveListener1_fn(::g::Uno::UX::Selector* name, uObject* listener)
{
    NameRegistry::RemoveListener1(*name, listener);
}

// public static void SetName(Fuse.Node obj, Uno.UX.Selector name) :20
void NameRegistry__SetName_fn(::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    NameRegistry::SetName(obj, *name);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_listeners_;
uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_names_;
uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_nameToObj_;

// public static void AddListener(Uno.UX.Selector name, Fuse.INameListener listener) [static] :75
void NameRegistry::AddListener(::g::Uno::UX::Selector name, uObject* listener)
{
    bool ret5;
    bool ret6;
    ::g::Uno::Collections::List* ret7;
    ::g::Uno::Collections::List* ret8;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_listeners_), uCRef(name), &ret5), ret5))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NameRegistry::_listeners_), uCRef(name), (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[54/*Uno.Collections.List<Fuse.INameListener>*/]));

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners_), uCRef(name), &ret7), ret7)), listener, &ret6), ret6))
        ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners_), uCRef(name), &ret8), ret8)), listener);
}

// public static void ClearName(Fuse.Node obj) [static] :68
void NameRegistry::ClearName(::g::Fuse::Node* obj)
{
    NameRegistry::SetName(obj, uDefault< ::g::Uno::UX::Selector>());
}

// internal static Uno.Collections.List<Fuse.Node> GetObjectsWithName(Uno.UX.Selector name) [static] :55
::g::Uno::Collections::List* NameRegistry::GetObjectsWithName(::g::Uno::UX::Selector name)
{
    bool ret11;
    ::g::Uno::Collections::List* res = NULL;
    ::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(NameRegistry::_nameToObj_), uCRef(name), (void**)(&res), &ret11);
    return res;
}

// private static void NotifyNameChanged(Fuse.Node obj, Uno.UX.Selector name) [static] :108
void NameRegistry::NotifyNameChanged(::g::Fuse::Node* obj, ::g::Uno::UX::Selector name)
{
    uArray* array2;
    int index3;
    int length4;
    bool ret12;
    ::g::Uno::Collections::List* ret13;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_listeners_), uCRef(name), &ret12), ret12))

        for (array2 = (uArray*)uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners_), uCRef(name), &ret13), ret13))->ToArray(), index3 = 0, length4 = uPtr(array2)->Length(); index3 < length4; ++index3)
        {
            uObject* listener = uPtr(array2)->Strong<uObject*>(index3);
            ::g::Fuse::INameListener::OnNameChanged(uInterface(uPtr(listener), ::TYPES[55/*Fuse.INameListener*/]), obj, name);
        }
}

// public static void RemoveListener(Uno.UX.Selector name, Fuse.INameListener listener) [static] :85
void NameRegistry::RemoveListener1(::g::Uno::UX::Selector name, uObject* listener)
{
    bool ret17;
    bool ret18;
    ::g::Uno::Collections::List* list;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(NameRegistry::_listeners_), uCRef(name), (void**)(&list), &ret17), ret17))
        return;

    ::g::Uno::Collections::List__Remove_fn(uPtr(list), listener, &ret18);
}

// public static void SetName(Fuse.Node obj, Uno.UX.Selector name) [static] :20
void NameRegistry::SetName(::g::Fuse::Node* obj, ::g::Uno::UX::Selector name)
{
    bool ret19;
    ::g::Uno::UX::Selector ret20;
    bool ret21;
    ::g::Uno::Collections::List* ret22;
    ::g::Uno::Collections::List* ret23;
    bool ret24;
    bool ret25;
    bool ret26;
    ::g::Uno::Collections::List* ret27;
    ::g::Uno::UX::Selector oldName = uDefault< ::g::Uno::UX::Selector>();

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_names_), obj, &ret19), ret19))
    {
        oldName = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_names_), obj, &ret20), ret20);

        if (::g::Uno::UX::Selector__op_Equality(name, oldName))
            return;

        ::g::Uno::Collections::List__Remove_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_nameToObj_), uCRef(oldName), &ret22), ret22)), obj, &ret21);

        if (uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_nameToObj_), uCRef(oldName), &ret23), ret23))->Count() == 0)
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NameRegistry::_nameToObj_), uCRef(oldName), &ret24);
    }

    if (::g::Uno::UX::Selector__op_Inequality(name, oldName))
    {
        if (name.IsNull())
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NameRegistry::_names_), obj, &ret25);
        else
        {
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(NameRegistry::_names_), obj, uCRef(name));

            if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_nameToObj_), uCRef(name), &ret26), ret26))
                ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(NameRegistry::_nameToObj_), uCRef(name), (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[56/*Uno.Collections.List<Fuse.Node>*/]));

            ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_nameToObj_), uCRef(name), &ret27), ret27)), obj);
        }

        if (!oldName.IsNull())
            NameRegistry::NotifyNameChanged(obj, oldName);

        if (!name.IsNull())
            NameRegistry::NotifyNameChanged(obj, name);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/NameValuePair.uno
// -----------------------------------------------------------------

// public sealed class NameValuePair :17
// {
static void NameValuePair_build(uType* type)
{
    ::STRINGS[60] = uString::Const("(");
    ::STRINGS[23] = uString::Const(": ");
    ::STRINGS[61] = uString::Const(")");
    ::STRINGS[62] = uString::Const("Object (NameValuePair) does not contain the given key");
    ::TYPES[44] = ::g::Uno::String_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::IObject_typeof(), offsetof(NameValuePair_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(NameValuePair, _Name), 0,
        uObject_typeof(), offsetof(NameValuePair, _Value), 0);
}

NameValuePair_type* NameValuePair_typeof()
{
    static uSStrong<NameValuePair_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NameValuePair);
    options.TypeSize = sizeof(NameValuePair_type);
    type = (NameValuePair_type*)uClassType::New("Fuse.NameValuePair", options);
    type->fp_build_ = NameValuePair_build;
    type->fp_ToString = (void(*)(uObject*, uString**))NameValuePair__ToString_fn;
    type->interface0.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))NameValuePair__FuseIObjectContainsKey_fn;
    type->interface0.fp_get_Keys = (void(*)(uObject*, uArray**))NameValuePair__FuseIObjectget_Keys_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, uString*, uObject**))NameValuePair__FuseIObjectget_Item_fn;
    return type;
}

// private bool Fuse.IObject.ContainsKey(string key) :33
void NameValuePair__FuseIObjectContainsKey_fn(NameValuePair* __this, uString* key, bool* __retval)
{
    return *__retval = ::g::Uno::String::op_Equality(__this->Name(), key), void();
}

// private object Fuse.IObject.get_Item(string key) :36
void NameValuePair__FuseIObjectget_Item_fn(NameValuePair* __this, uString* key, uObject** __retval)
{
    if (::g::Uno::String::op_Inequality(key, __this->Name()))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[62/*"Object (Nam...*/]));

    return *__retval = __this->Value(), void();
}

// private string[] Fuse.IObject.get_Keys() :32
void NameValuePair__FuseIObjectget_Keys_fn(NameValuePair* __this, uArray** __retval)
{
    return *__retval = uArray::Init<uString*>(::TYPES[44/*string[]*/], 1, (uString*)__this->Name()), void();
}

// public generated string get_Name() :19
void NameValuePair__get_Name_fn(NameValuePair* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :19
void NameValuePair__set_Name_fn(NameValuePair* __this, uString* value)
{
    __this->Name(value);
}

// public override sealed string ToString() :27
void NameValuePair__ToString_fn(NameValuePair* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[60/*"("*/], __this->Name()), ::STRINGS[23/*": "*/]), __this->Value()), ::STRINGS[61/*")"*/]), void();
}

// public generated object get_Value() :20
void NameValuePair__get_Value_fn(NameValuePair* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(object value) :20
void NameValuePair__set_Value_fn(NameValuePair* __this, uObject* value)
{
    __this->Value(value);
}

// public generated string get_Name() [instance] :19
uString* NameValuePair::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :19
void NameValuePair::Name(uString* value)
{
    _Name = value;
}

// public generated object get_Value() [instance] :20
uObject* NameValuePair::Value()
{
    return _Value;
}

// private generated void set_Value(object value) [instance] :20
void NameValuePair::Value(uObject* value)
{
    _Value = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.Bindings.uno
// ----------------------------------------------------------------

// public interfacemodifiers class Node :10
// {
// static Node() :11
static void Node__cctor__fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    Node::_emptyBindings_ = (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), uArray::New(::g::Fuse::Binding_typeof()->Array(), 0)));
    Node::_dataListeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[28/*string*/], ::TYPES[89/*Uno.Collections.List`1*/]->MakeType(Node__IDataListener_typeof(), NULL), NULL)));
    Node::_laterReleaseRooting_ = uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)Node__LaterReleaseRooting_fn);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[78/*Fuse.Scripting.ScriptMember[]*/], 3, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("_createWatcher"), uDelegate::New(::g::Uno::Func3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, ::TYPES[12/*object[]*/], uObject_typeof(), NULL), (void*)Node___createWatcher_fn), 1), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("_destroyWatcher"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, ::TYPES[12/*object[]*/], NULL), (void*)Node___destroyWatcher_fn), 1), (::g::Fuse::Scripting::ScriptMethodInline*)::g::Fuse::Scripting::ScriptMethodInline::New1(uString::Const("findData"), 1, uString::Const("function(key) { return Observable._getDataObserver(this, key); }"))));
}

static void Node_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::NameRegistry_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->MethodTypes[0]->SetPrecalc(
        ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<T>*/, type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(2/*GetNearestAncestorOfType<T>*/, type->MethodTypes[1]->U(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Node_type, interface5));
    type->SetFields(1,
        uObject_typeof(), offsetof(Node, _bindings), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(Node, _name), 0,
        type, offsetof(Node, _nextSibling), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Node, _parent), 0,
        ::g::Uno::Int_typeof(), offsetof(Node, _parentID), 0,
        ::g::Uno::Int_typeof(), offsetof(Node, _preservedRootFrame), 0,
        ::g::Fuse::Internal::RawPointer_typeof()->MakeType(type, NULL), offsetof(Node, _previousSibling), 0,
        ::g::Fuse::Properties_typeof(), offsetof(Node, _properties), 0,
        ::g::Fuse::RootStage_typeof(), offsetof(Node, _rootStage), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(Node, _scriptContext), 0,
        uObject_typeof(), offsetof(Node, _scriptObject), 0,
        type, offsetof(Node, OverrideContextParent), uFieldFlagsWeak,
        ::g::Uno::Action_typeof(), offsetof(Node, RootingCompleted1), 0,
        ::g::Uno::Action_typeof(), offsetof(Node, Unrooted1), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(Node__IDataListener_typeof(), NULL), NULL), (uintptr_t)&Node::_dataListeners_, uFieldFlagsStatic,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), (uintptr_t)&Node::_emptyBindings_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&Node::_hasRootCapture_, uFieldFlagsStatic,
        ::g::Uno::Action_typeof(), (uintptr_t)&Node::_laterReleaseRooting_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&Node::_rootCaptureIndex_, uFieldFlagsStatic);
}

Node_type* Node_typeof()
{
    static uSStrong<Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 6;
    options.MethodTypeCount = 5;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Node);
    options.TypeSize = sizeof(Node_type);
    type = (Node_type*)uClassType::New("Fuse.Node", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->MethodTypes[1] = type->NewMethodType(1, 1,0);
    type->MethodTypes[2] = type->NewMethodType(1, 0,0);
    type->MethodTypes[3] = type->NewMethodType(1, 0,0);
    type->MethodTypes[4] = type->NewMethodType(1, 0,0);
    type->fp_build_ = Node_build;
    type->fp_cctor_ = Node__cctor__fn;
    type->fp_GetLastNodeInGroup = Node__GetLastNodeInGroup_fn;
    type->fp_OnRooted = Node__OnRooted_fn;
    type->fp_OnUnrooted = Node__OnUnrooted_fn;
    type->fp_SoftDispose = Node__SoftDispose_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Node__ToString_fn;
    type->fp_TryGetResource = Node__TryGetResource_fn;
    type->fp_VisitSubtree = Node__VisitSubtree_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))Node__Remove_fn;
    return type;
}

// protected generated Node() :10
void Node__ctor_1_fn(Node* __this)
{
    __this->ctor_1();
}

// private static object _createWatcher(Fuse.Scripting.Context c, Fuse.Node n, object[] args) :19
void Node___createWatcher_fn(::g::Fuse::Scripting::Context* c, Node* n, uArray* args, uObject** __retval)
{
    *__retval = Node::_createWatcher(c, n, args);
}

// private static void _destroyWatcher(Fuse.Scripting.Context c, Fuse.Node n, object[] args) :26
void Node___destroyWatcher_fn(::g::Fuse::Scripting::Context* c, Node* n, uArray* args)
{
    Node::_destroyWatcher(c, n, args);
}

// public void Add(Fuse.Binding item) :70
void Node__Add_fn(Node* __this, ::g::Fuse::Binding* item)
{
    __this->Add(item);
}

// public void AddDataListener(string key, Fuse.Node.IDataListener listener) :165
void Node__AddDataListener_fn(Node* __this, uString* key, uObject* listener)
{
    __this->AddDataListener(key, listener);
}

// private Fuse.Binding get_Binding() :18
void Node__get_Binding_fn(Node* __this, ::g::Fuse::Binding** __retval)
{
    *__retval = __this->Binding();
}

// private Uno.Collections.List<Fuse.Binding> get_BindingList() :19
void Node__get_BindingList_fn(Node* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->BindingList();
}

// public Uno.Collections.IList<Fuse.Binding> get_Bindings() :14
void Node__get_Bindings_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->Bindings();
}

// protected internal void BroadcastDataChange(object oldData, object newData) :105
void Node__BroadcastDataChange_fn(Node* __this, uObject* oldData, uObject* newData)
{
    __this->BroadcastDataChange(oldData, newData);
}

// internal static bool CaptureRooting() :57
void Node__CaptureRooting_fn(bool* __retval)
{
    *__retval = Node::CaptureRooting();
}

// private static bool Contains(string[] strs, string s) :139
void Node__Contains_fn(uArray* strs, uString* s, bool* __retval)
{
    *__retval = Node::Contains(strs, s);
}

// public Fuse.Node get_ContextParent() :82
void Node__get_ContextParent_fn(Node* __this, Node** __retval)
{
    *__retval = __this->ContextParent();
}

// private int DistanceTo(Fuse.Node obj, int reference) :61
void Node__DistanceTo_fn(Node* __this, Node* obj, int* reference, int* __retval)
{
    *__retval = __this->DistanceTo(obj, *reference);
}

// public void EnumerateData(Fuse.Node.IDataEnumerator e) :70
void Node__EnumerateData_fn(Node* __this, uObject* e)
{
    __this->EnumerateData(e);
}

// internal T FindBehavior<T>() :137
void Node__FindBehavior_fn(Node* __this, uType* __type, Node** __retval)
{
    *__retval = __this->FindBehavior(__type);
}

// public T FindByType<T>() :160
void Node__FindByType_fn(Node* __this, uType* __type, uObject** __retval)
{
    *__retval = __this->FindByType(__type);
}

// public Fuse.Node FindNodeByName(Uno.UX.Selector name, [Uno.Predicate<Fuse.Node> acceptor]) :36
void Node__FindNodeByName_fn(Node* __this, ::g::Uno::UX::Selector* name, uDelegate* acceptor, Node** __retval)
{
    *__retval = __this->FindNodeByName(*name, acceptor);
}

// private void Fuse.INotifyUnrooted.add_Unrooted(Uno.Action value) :148
void Node__FuseINotifyUnrootedadd_Unrooted_fn(Node* __this, uDelegate* value)
{
    __this->add_Unrooted(value);
}

// private void Fuse.INotifyUnrooted.remove_Unrooted(Uno.Action value) :149
void Node__FuseINotifyUnrootedremove_Unrooted_fn(Node* __this, uDelegate* value)
{
    __this->remove_Unrooted(value);
}

// private Fuse.Scripting.Context Fuse.Scripting.IScriptObject.get_ScriptContext() :34
void Node__FuseScriptingIScriptObjectget_ScriptContext_fn(Node* __this, ::g::Fuse::Scripting::Context** __retval)
{
    return *__retval = __this->_scriptContext, void();
}

// private object Fuse.Scripting.IScriptObject.get_ScriptObject() :29
void Node__FuseScriptingIScriptObjectget_ScriptObject_fn(Node* __this, uObject** __retval)
{
    return *__retval = __this->_scriptObject, void();
}

// private void Fuse.Scripting.IScriptObject.SetScriptObject(object obj, Fuse.Scripting.Context context) :37
void Node__FuseScriptingIScriptObjectSetScriptObject_fn(Node* __this, uObject* obj, ::g::Fuse::Scripting::Context* context)
{
    __this->_scriptObject = obj;
    __this->_scriptContext = context;
}

// public object GetFirstData() :63
void Node__GetFirstData_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->GetFirstData();
}

// internal virtual Fuse.Node GetLastNodeInGroup() :131
void Node__GetLastNodeInGroup_fn(Node* __this, Node** __retval)
{
    return *__retval = __this, void();
}

// public T GetNearestAncestorOfType<T>() :166
void Node__GetNearestAncestorOfType_fn(Node* __this, uType* __type, uObject** __retval)
{
    *__retval = __this->GetNearestAncestorOfType(__type);
}

// private bool HasInSubtree(Fuse.Node c) :77
void Node__HasInSubtree_fn(Node* __this, Node* c, bool* __retval)
{
    *__retval = __this->HasInSubtree(c);
}

// public void Insert(int index, Fuse.Binding item) :107
void Node__Insert_fn(Node* __this, int* index, ::g::Fuse::Binding* item)
{
    __this->Insert(*index, item);
}

// internal bool get_IsPreservedRootFrame() :202
void Node__get_IsPreservedRootFrame_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsPreservedRootFrame();
}

// internal static bool IsRootCapture(int index) :52
void Node__IsRootCapture_fn(int* index, bool* __retval)
{
    *__retval = Node::IsRootCapture(*index);
}

// public bool get_IsRootingCompleted() :39
void Node__get_IsRootingCompleted_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsRootingCompleted();
}

// public bool get_IsRootingStarted() :29
void Node__get_IsRootingStarted_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsRootingStarted();
}

// internal bool get_IsUnrooted() :43
void Node__get_IsUnrooted_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsUnrooted();
}

// internal bool get_IsUnrooting() :41
void Node__get_IsUnrooting_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsUnrooting();
}

// private static void LaterReleaseRooting() :79
void Node__LaterReleaseRooting_fn()
{
    Node::LaterReleaseRooting();
}

// private void MakeBindingList(Fuse.Binding newItem) :21
void Node__MakeBindingList_fn(Node* __this, ::g::Fuse::Binding* newItem)
{
    __this->MakeBindingList(newItem);
}

// public Uno.UX.Selector get_Name() :14
void Node__get_Name_fn(Node* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Name();
}

// public void set_Name(Uno.UX.Selector value) :15
void Node__set_Name_fn(Node* __this, ::g::Uno::UX::Selector* value)
{
    __this->Name(*value);
}

// public T NextSibling<T>() :23
void Node__NextSibling_fn(Node* __this, uType* __type, Node** __retval)
{
    *__retval = __this->NextSibling(__type);
}

// internal int get_NodeDepth() :62
void Node__get_NodeDepth_fn(Node* __this, int* __retval)
{
    *__retval = __this->NodeDepth();
}

// public void OnDataChanged(string key, object newValue) :155
void Node__OnDataChanged_fn(Node* __this, uString* key, uObject* newValue)
{
    __this->OnDataChanged(key, newValue);
}

// protected virtual void OnRooted() :139
void Node__OnRooted_fn(Node* __this)
{
    __this->RootBindings();
}

// protected virtual void OnUnrooted() :174
void Node__OnUnrooted_fn(Node* __this)
{
    __this->UnrootBindings();
}

// public Fuse.Visual get_Parent() :57
void Node__get_Parent_fn(Node* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Parent();
}

// public T PreviousSibling<T>() :36
void Node__PreviousSibling_fn(Node* __this, uType* __type, Node** __retval)
{
    *__retval = __this->PreviousSibling(__type);
}

// public Fuse.Properties get_Properties() :47
void Node__get_Properties_fn(Node* __this, ::g::Fuse::Properties** __retval)
{
    *__retval = __this->Properties();
}

// internal static void Relate(Fuse.Visual parent, Fuse.Node child) :179
void Node__Relate_fn(::g::Fuse::Visual* parent, Node* child)
{
    Node::Relate(parent, child);
}

// internal static void ReleaseRooting(bool captured) :70
void Node__ReleaseRooting_fn(bool* captured)
{
    Node::ReleaseRooting(*captured);
}

// public bool Remove(Fuse.Binding item) :79
void Node__Remove_fn(Node* __this, ::g::Fuse::Binding* item, bool* __retval)
{
    *__retval = __this->Remove(item);
}

// public void RemoveDataListener(string key, Fuse.Node.IDataListener listener) :176
void Node__RemoveDataListener_fn(Node* __this, uString* key, uObject* listener)
{
    __this->RemoveDataListener(key, listener);
}

// private void Root(Fuse.Binding b) :30
void Node__Root_fn(Node* __this, ::g::Fuse::Binding* b)
{
    __this->Root(b);
}

// private void RootBindings() :40
void Node__RootBindings_fn(Node* __this)
{
    __this->RootBindings();
}

// internal static int get_RootCaptureIndex() :51
void Node__get_RootCaptureIndex_fn(int* __retval)
{
    *__retval = Node::RootCaptureIndex();
}

// internal generated void add_RootingCompleted(Uno.Action value) :134
void Node__add_RootingCompleted_fn(Node* __this, uDelegate* value)
{
    __this->add_RootingCompleted(value);
}

// internal generated void remove_RootingCompleted(Uno.Action value) :134
void Node__remove_RootingCompleted_fn(Node* __this, uDelegate* value)
{
    __this->remove_RootingCompleted(value);
}

// internal void RootInternal(Fuse.Visual parent) :87
void Node__RootInternal_fn(Node* __this, ::g::Fuse::Visual* parent)
{
    __this->RootInternal(parent);
}

// private void RootInternalImpl(Fuse.Visual parent) :100
void Node__RootInternalImpl_fn(Node* __this, ::g::Fuse::Visual* parent)
{
    __this->RootInternalImpl(parent);
}

// protected virtual void SoftDispose() :196
void Node__SoftDispose_fn(Node* __this)
{
}

// public override sealed string ToString() :106
void Node__ToString_fn(Node* __this, uString** __retval)
{
    uString* ret11;
    uString* ret12;

    if (!__this->Name().IsNull())
        return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((::g::Uno::Object__ToString_fn(__this, &ret11), ret11), uString::Const(", Name: ")), __this->Name().ToString(::g::Uno::UX::Selector_typeof())), void();
    else
        return *__retval = (::g::Uno::Object__ToString_fn(__this, &ret12), ret12), void();
}

// public virtual bool TryGetResource(string key, Uno.Predicate<object> acceptor, object& resource) :92
void Node__TryGetResource_fn(Node* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval)
{
    if (__this->ContextParent() != NULL)
        return *__retval = uPtr(__this->ContextParent())->TryGetResource(key, acceptor, resource), void();

    *resource = NULL;
    return *__retval = false, void();
}

// private void Uno.Collections.ICollection<Fuse.Binding>.Clear() :64
void Node__UnoCollectionsICollectionFuseBindingClear_fn(Node* __this)
{
    if (__this->IsRootingStarted())
        __this->UnrootBindings();

    __this->_bindings = NULL;
}

// private bool Uno.Collections.ICollection<Fuse.Binding>.Contains(Fuse.Binding item) :89
void Node__UnoCollectionsICollectionFuseBindingContains_fn(Node* __this, ::g::Fuse::Binding* item, bool* __retval)
{
    bool ret13;

    if (__this->_bindings == item)
        return *__retval = true, void();

    ::g::Uno::Collections::List* bl = __this->BindingList();

    if (bl != NULL)
        return *__retval = (::g::Uno::Collections::List__Contains_fn(uPtr(bl), item, &ret13), ret13), void();

    return *__retval = false, void();
}

// private int Uno.Collections.ICollection<Fuse.Binding>.get_Count() :99
void Node__UnoCollectionsICollectionFuseBindingget_Count_fn(Node* __this, int* __retval)
{
    if (__this->_bindings == NULL)
        return *__retval = 0, void();

    if (uIs((uObject*)__this->_bindings, ::g::Fuse::Binding_typeof()))
        return *__retval = 1, void();

    return *__retval = uPtr(__this->BindingList())->Count(), void();
}

// private Uno.Collections.IEnumerator<Fuse.Binding> Uno.Collections.IEnumerable<Fuse.Binding>.GetEnumerator() :158
void Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn(Node* __this, uObject** __retval)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Binding*> > ret14;

    if (__this->_bindings == NULL)
        return *__retval = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Node::_emptyBindings_), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL))), void();

    if (uIs((uObject*)__this->_bindings, ::g::Fuse::Binding_typeof()))
        __this->MakeBindingList(NULL);

    return *__retval = uBox(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->BindingList()), &ret14), ret14)), void();
}

// private Fuse.Binding Uno.Collections.IList<Fuse.Binding>.get_Item(int index) :139
void Node__UnoCollectionsIListFuseBindingget_Item_fn(Node* __this, int* index, ::g::Fuse::Binding** __retval)
{
    int index_ = *index;
    ::g::Fuse::Binding* ret17;

    if (__this->_bindings == NULL)
        U_THROW(::g::Uno::Exception::New1());

    ::g::Fuse::Binding* b = __this->Binding();

    if (b != NULL)
    {
        if (index_ != 0)
            U_THROW(::g::Uno::Exception::New1());

        return *__retval = b, void();
    }
    else
        return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->BindingList()), uCRef<int>(index_), &ret17), ret17), void();
}

// private void Uno.Collections.IList<Fuse.Binding>.RemoveAt(int index) :119
void Node__UnoCollectionsIListFuseBindingRemoveAt_fn(Node* __this, int* index)
{
    int index_ = *index;
    ::g::Fuse::Binding* ret15;

    if (__this->_bindings == NULL)
        U_THROW(::g::Uno::Exception::New1());

    ::g::Fuse::Binding* b = __this->Binding();

    if (b != NULL)
    {
        if (index_ != 0)
            U_THROW(::g::Uno::Exception::New1());

        __this->Unroot(b);
        __this->_bindings = NULL;
    }
    else
    {
        __this->Unroot((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->BindingList()), uCRef<int>(index_), &ret15), ret15));
        uPtr(__this->BindingList())->RemoveAt(index_);
    }
}

// internal static void Unrelate(Fuse.Visual parent, Fuse.Node child) :187
void Node__Unrelate_fn(::g::Fuse::Visual* parent, Node* child)
{
    Node::Unrelate(parent, child);
}

// private void Unroot(Fuse.Binding b) :35
void Node__Unroot_fn(Node* __this, ::g::Fuse::Binding* b)
{
    __this->Unroot(b);
}

// private void UnrootBindings() :52
void Node__UnrootBindings_fn(Node* __this)
{
    __this->UnrootBindings();
}

// internal generated void add_Unrooted(Uno.Action value) :144
void Node__add_Unrooted_fn(Node* __this, uDelegate* value)
{
    __this->add_Unrooted(value);
}

// internal generated void remove_Unrooted(Uno.Action value) :144
void Node__remove_Unrooted_fn(Node* __this, uDelegate* value)
{
    __this->remove_Unrooted(value);
}

// internal void UnrootInternal() :152
void Node__UnrootInternal_fn(Node* __this)
{
    __this->UnrootInternal();
}

// public virtual void VisitSubtree(Uno.Action<Fuse.Node> action) :101
void Node__VisitSubtree_fn(Node* __this, uDelegate* action)
{
    uPtr(action)->InvokeVoid(__this);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Node::_dataListeners_;
uSStrong<uObject*> Node::_emptyBindings_;
bool Node::_hasRootCapture_;
uSStrong<uDelegate*> Node::_laterReleaseRooting_;
int Node::_rootCaptureIndex_;

// protected generated Node() [instance] :10
void Node::ctor_1()
{
    _preservedRootFrame = -1;
    _parentID = -1;
    ctor_();
}

// public void Add(Fuse.Binding item) [instance] :70
void Node::Add(::g::Fuse::Binding* item)
{
    if (_bindings == NULL)
        _bindings = item;
    else if (uIs((uObject*)_bindings, ::g::Fuse::Binding_typeof()))
        MakeBindingList(item);
    else
        ::g::Uno::Collections::List__Add_fn(uPtr(BindingList()), item);

    Root(item);
}

// public void AddDataListener(string key, Fuse.Node.IDataListener listener) [instance] :165
void Node::AddDataListener(uString* key, uObject* listener)
{
    bool ret2;
    ::g::Uno::Collections::List* listeners;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Node::_dataListeners_), key, (void**)(&listeners), &ret2), ret2))
    {
        listeners = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[89/*Uno.Collections.List`1*/]->MakeType(Node__IDataListener_typeof(), NULL));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Node::_dataListeners_), key, listeners);
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(listeners), listener);
}

// private Fuse.Binding get_Binding() [instance] :18
::g::Fuse::Binding* Node::Binding()
{
    return uAs< ::g::Fuse::Binding*>(_bindings, ::g::Fuse::Binding_typeof());
}

// private Uno.Collections.List<Fuse.Binding> get_BindingList() [instance] :19
::g::Uno::Collections::List* Node::BindingList()
{
    return uAs< ::g::Uno::Collections::List*>(_bindings, ::TYPES[89/*Uno.Collections.List`1*/]->MakeType(::g::Fuse::Binding_typeof(), NULL));
}

// public Uno.Collections.IList<Fuse.Binding> get_Bindings() [instance] :14
uObject* Node::Bindings()
{
    return (uObject*)this;
}

// protected internal void BroadcastDataChange(object oldData, object newData) [instance] :105
void Node::BroadcastDataChange(uObject* oldData, uObject* newData)
{
    uArray* newKeys = NULL;
    uObject* newObj = uAs<uObject*>(newData, ::TYPES[10/*Fuse.IObject*/]);

    if (newObj != NULL)
    {
        newKeys = ::g::Fuse::IObject::Keys(uInterface(uPtr(newObj), ::TYPES[10/*Fuse.IObject*/]));

        for (int i = 0; i < uPtr(newKeys)->Length(); i++)
            OnDataChanged(uPtr(newKeys)->Strong<uString*>(i), ::g::Fuse::IObject::Item(uInterface(uPtr(newObj), ::TYPES[10/*Fuse.IObject*/]), uPtr(newKeys)->Strong<uString*>(i)));
    }
    else if (newData != NULL)
        OnDataChanged(::STRINGS[19/*""*/], newData);

    uObject* oldObj = uAs<uObject*>(oldData, ::TYPES[10/*Fuse.IObject*/]);

    if (oldObj != NULL)
    {
        uArray* keys = ::g::Fuse::IObject::Keys(uInterface(uPtr(oldObj), ::TYPES[10/*Fuse.IObject*/]));

        for (int i1 = 0; i1 < uPtr(keys)->Length(); i1++)
        {
            if ((newKeys != NULL) && Node::Contains(newKeys, uPtr(keys)->Strong<uString*>(i1)))
                continue;

            OnDataChanged(uPtr(keys)->Strong<uString*>(i1), NULL);
        }
    }
    else if (oldData != NULL)
    {
        if (newKeys != NULL)
            OnDataChanged(::STRINGS[19/*""*/], NULL);
    }
}

// public Fuse.Node get_ContextParent() [instance] :82
Node* Node::ContextParent()
{
    Node* ind1;
    ind1 = OverrideContextParent;
    return (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)Parent();
}

// private int DistanceTo(Fuse.Node obj, int reference) [instance] :61
int Node::DistanceTo(Node* obj, int reference)
{
    Node* p = this;
    int c = 0;

    while (p != NULL)
    {
        if (uPtr(p)->HasInSubtree(obj))
            return c;

        c++;

        if (c > reference)
            return c;

        p = uPtr(p)->Parent();
    }

    return 2147483647;
}

// public void EnumerateData(Fuse.Node.IDataEnumerator e) [instance] :70
void Node::EnumerateData(uObject* e)
{
    Node* n = this;

    while (n != NULL)
    {
        Node* np = uPtr(n)->ContextParent();

        if (np != NULL)
        {
            uObject* subdp = uAs<uObject*>(np, Node__ISubtreeDataProvider_typeof());

            if (subdp != NULL)
            {
                uObject* data = Node__ISubtreeDataProvider::GetData(uInterface(uPtr(subdp), Node__ISubtreeDataProvider_typeof()), n);

                if ((data != NULL) && !Node__IDataEnumerator::NextData(uInterface(uPtr(e), Node__IDataEnumerator_typeof()), data))
                    return;
            }
        }

        ::g::Fuse::Visual* p = uAs< ::g::Fuse::Visual*>(np, ::TYPES[7/*Fuse.Visual*/]);

        if (p != NULL)

            for (Node* dp = (Node*)uPtr(p)->LastChild(::TYPES[7/*Fuse.Visual*/]->MakeMethod(7/*LastChild<Fuse.Node>*/, Node_typeof(), NULL)); dp != NULL; dp = (Node*)uPtr(dp)->PreviousSibling(Node_typeof()->MakeMethod(4/*PreviousSibling<Fuse.Node>*/, Node_typeof(), NULL)))
            {
                uObject* sdp = uAs<uObject*>(dp, Node__ISiblingDataProvider_typeof());

                if (sdp != NULL)
                {
                    uObject* data1 = Node__ISiblingDataProvider::Data(uInterface(uPtr(sdp), Node__ISiblingDataProvider_typeof()));

                    if ((data1 != NULL) && !Node__IDataEnumerator::NextData(uInterface(uPtr(e), Node__IDataEnumerator_typeof()), data1))
                        return;
                }
            }

        n = uPtr(n)->ContextParent();
    }
}

// internal T FindBehavior<T>() [instance] :137
Node* Node::FindBehavior(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Visual.FirstChild<T>*/),
    };
    Node* from = this;

    while (from != NULL)
    {
        Node* b = uAs<Node*>(from, __type->U(0));

        if (b != NULL)
            return b;

        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(from, ::TYPES[7/*Fuse.Visual*/]);

        if (v != NULL)
        {
            Node* c = (Node*)uPtr(v)->FirstChild(__types[0]);

            if (c != NULL)
                return c;
        }

        from = uPtr(from)->ContextParent();
    }

    return NULL;
}

// public T FindByType<T>() [instance] :160
uObject* Node::FindByType(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Node.GetNearestAncestorOfType<T>*/),
    };

    if (uIs(this, __type->U(0)))
        return uAs<uObject*>(this, __type->U(0));

    return (uObject*)GetNearestAncestorOfType(__types[0]);
}

// public Fuse.Node FindNodeByName(Uno.UX.Selector name, [Uno.Predicate<Fuse.Node> acceptor]) [instance] :36
Node* Node::FindNodeByName(::g::Uno::UX::Selector name, uDelegate* acceptor)
{
    Node* ret3;
    bool ret4;
    ::g::Uno::Collections::List* objs = ::g::Fuse::NameRegistry::GetObjectsWithName(name);

    if (objs == NULL)
        return NULL;

    int bestDistance = 2147483647;
    Node* best = NULL;

    for (int i = 0; i < uPtr(objs)->Count(); i++)
    {
        Node* n = (::g::Uno::Collections::List__get_Item_fn(uPtr(objs), uCRef<int>(i), &ret3), ret3);

        if (::g::Uno::Delegate::op_Inequality(acceptor, NULL) && !(uPtr(acceptor)->Invoke(&ret4, 1, n), ret4))
            continue;

        int dist = DistanceTo(n, bestDistance);

        if (dist < bestDistance)
        {
            bestDistance = dist;
            best = n;
        }

        if (bestDistance == 0)
            return best;
    }

    return best;
}

// public object GetFirstData() [instance] :63
uObject* Node::GetFirstData()
{
    Node__FirstDataEnumerator* den = Node__FirstDataEnumerator::New1();
    EnumerateData((uObject*)den);
    return den->Data();
}

// public T GetNearestAncestorOfType<T>() [instance] :166
uObject* Node::GetNearestAncestorOfType(uType* __type)
{
    Node* current = Parent();

    while (current != NULL)
    {
        if (uIs(current, __type->U(0)))
            return uAs<uObject*>(current, __type->U(0));

        current = uPtr(current)->Parent();
    }

    return NULL;
}

// private bool HasInSubtree(Fuse.Node c) [instance] :77
bool Node::HasInSubtree(Node* c)
{
    if (c == this)
        return true;

    if (c != NULL)
    {
        ::g::Fuse::Visual* p = uPtr(c)->Parent();

        if (p != NULL)
            return HasInSubtree(p);
    }

    return false;
}

// public void Insert(int index, Fuse.Binding item) [instance] :107
void Node::Insert(int index, ::g::Fuse::Binding* item)
{
    if (_bindings == NULL)
        _bindings = item;
    else
    {
        if (uIs((uObject*)_bindings, ::g::Fuse::Binding_typeof()))
            MakeBindingList(NULL);

        ::g::Uno::Collections::List__Insert_fn(uPtr(BindingList()), uCRef<int>(index), item);
    }

    Root(item);
}

// internal bool get_IsPreservedRootFrame() [instance] :202
bool Node::IsPreservedRootFrame()
{
    return _preservedRootFrame == ::g::Fuse::UpdateManager::FrameIndex();
}

// public bool get_IsRootingCompleted() [instance] :39
bool Node::IsRootingCompleted()
{
    return _rootStage == 2;
}

// public bool get_IsRootingStarted() [instance] :29
bool Node::IsRootingStarted()
{
    return (_rootStage == 1) || (_rootStage == 2);
}

// internal bool get_IsUnrooted() [instance] :43
bool Node::IsUnrooted()
{
    return _rootStage == 0;
}

// internal bool get_IsUnrooting() [instance] :41
bool Node::IsUnrooting()
{
    return _rootStage == 3;
}

// private void MakeBindingList(Fuse.Binding newItem) [instance] :21
void Node::MakeBindingList(::g::Fuse::Binding* newItem)
{
    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[89/*Uno.Collections.List`1*/]->MakeType(::g::Fuse::Binding_typeof(), NULL));
    ::g::Fuse::Binding* oldItem = uAs< ::g::Fuse::Binding*>(_bindings, ::g::Fuse::Binding_typeof());

    if (oldItem != NULL)
        ::g::Uno::Collections::List__Add_fn(uPtr(list), oldItem);

    if (newItem != NULL)
        ::g::Uno::Collections::List__Add_fn(uPtr(list), newItem);

    _bindings = list;
}

// public Uno.UX.Selector get_Name() [instance] :14
::g::Uno::UX::Selector Node::Name()
{
    return _name;
}

// public void set_Name(Uno.UX.Selector value) [instance] :15
void Node::Name(::g::Uno::UX::Selector value)
{
    if (::g::Uno::UX::Selector__op_Inequality(_name, value))
    {
        _name = value;

        if (IsRootingStarted())
            ::g::Fuse::NameRegistry::SetName(this, _name);
    }
}

// public T NextSibling<T>() [instance] :23
Node* Node::NextSibling(uType* __type)
{
    Node* n = _nextSibling;

    while (n != NULL)
    {
        Node* v = uAs<Node*>(n, __type->U(0));

        if (v != NULL)
            return v;

        n = uPtr(n)->_nextSibling;
    }

    return NULL;
}

// internal int get_NodeDepth() [instance] :62
int Node::NodeDepth()
{
    ::g::Fuse::Visual* n = Parent();
    int c = 0;

    while (n != NULL)
    {
        c++;
        n = uPtr(n)->Parent();
    }

    return c;
}

// public void OnDataChanged(string key, object newValue) [instance] :155
void Node::OnDataChanged(uString* key, uObject* newValue)
{
    bool ret5;
    uObject* ret6;
    ::g::Uno::Collections::List* listeners;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Node::_dataListeners_), key, (void**)(&listeners), &ret5), ret5))

        for (int i = 0; i < uPtr(listeners)->Count(); i++)
            Node__IDataListener::OnDataChanged(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(listeners), uCRef<int>(i), &ret6), ret6)), Node__IDataListener_typeof()));
}

// public Fuse.Visual get_Parent() [instance] :57
::g::Fuse::Visual* Node::Parent()
{
    return _parent;
}

// public T PreviousSibling<T>() [instance] :36
Node* Node::PreviousSibling(uType* __type)
{
    Node* n = (Node*)::g::Fuse::Internal::RawPointer::op_Explicit1(::g::Fuse::Internal::RawPointer_typeof()->MakeType(__type->Base, NULL), _previousSibling);

    while (n != NULL)
    {
        Node* v = uAs<Node*>(n, __type->U(0));

        if (v != NULL)
            return v;

        n = (Node*)::g::Fuse::Internal::RawPointer::op_Explicit1(::g::Fuse::Internal::RawPointer_typeof()->MakeType(__type->Base, NULL), uPtr(n)->_previousSibling);
    }

    return NULL;
}

// public Fuse.Properties get_Properties() [instance] :47
::g::Fuse::Properties* Node::Properties()
{
    if (_properties == NULL)
        _properties = ::g::Fuse::Properties::New1();

    return _properties;
}

// public bool Remove(Fuse.Binding item) [instance] :79
bool Node::Remove(::g::Fuse::Binding* item)
{
    bool ret7;
    Unroot(item);

    if (_bindings == item)
    {
        _bindings = NULL;
        return true;
    }

    if ((_bindings == NULL) || uIs((uObject*)_bindings, ::g::Fuse::Binding_typeof()))
        return false;

    return (::g::Uno::Collections::List__Remove_fn(uPtr(BindingList()), item, &ret7), ret7);
}

// public void RemoveDataListener(string key, Fuse.Node.IDataListener listener) [instance] :176
void Node::RemoveDataListener(uString* key, uObject* listener)
{
    bool ret8;
    ::g::Uno::Collections::List* ret9;
    ::g::Uno::Collections::List__Remove_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Node::_dataListeners_), key, &ret9), ret9)), listener, &ret8);
}

// private void Root(Fuse.Binding b) [instance] :30
void Node::Root(::g::Fuse::Binding* b)
{
    if (IsRootingStarted())
        uPtr(b)->Root(this);
}

// private void RootBindings() [instance] :40
void Node::RootBindings()
{
    ::g::Fuse::Binding* ret10;

    if (_bindings == NULL)
        return;

    if (Binding() != NULL)
        uPtr(Binding())->Root(this);
    else
    {
        ::g::Uno::Collections::List* bl = BindingList();

        for (int i = 0; i < uPtr(bl)->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(bl), uCRef<int>(i), &ret10), ret10))->Root(this);
    }
}

// internal generated void add_RootingCompleted(Uno.Action value) [instance] :134
void Node::add_RootingCompleted(uDelegate* value)
{
    RootingCompleted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RootingCompleted1, value), ::TYPES[3/*Uno.Action*/]);
}

// internal generated void remove_RootingCompleted(Uno.Action value) [instance] :134
void Node::remove_RootingCompleted(uDelegate* value)
{
    RootingCompleted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RootingCompleted1, value), ::TYPES[3/*Uno.Action*/]);
}

// internal void RootInternal(Fuse.Visual parent) [instance] :87
void Node::RootInternal(::g::Fuse::Visual* parent)
{
    bool captured = Node::CaptureRooting();

    {
        const auto __finally_fun = [&]()
        {
            Node::ReleaseRooting(captured);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        RootInternalImpl(parent);
    }
}

// private void RootInternalImpl(Fuse.Visual parent) [instance] :100
void Node::RootInternalImpl(::g::Fuse::Visual* parent)
{
    if (_rootStage != 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(uString::Const("Incomplete or duplicate rooting: "), this), uString::Const("/")), ::g::Uno::UX::Selector__op_Implicit1(Name()))));

    if (_parent != NULL)
    {
        if (_parent != parent)
            U_THROW(::g::Uno::Exception::New2(uString::Const("Node is already rooted with a different parent")));
        else
            return;
    }

    _rootStage = 1;
    _parent = parent;

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(Name()), NULL))
        ::g::Fuse::NameRegistry::SetName(this, Name());

    OnRooted();
    _rootStage = 2;

    if (::g::Uno::Delegate::op_Inequality(RootingCompleted1, NULL))
        uPtr(RootingCompleted1)->InvokeVoid();

    if (_rootStage != 2)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(uString::Const("Invalid RootStage post rooting: "), this), uString::Const("/")), ::g::Uno::UX::Selector__op_Implicit1(Name()))));
}

// private void Unroot(Fuse.Binding b) [instance] :35
void Node::Unroot(::g::Fuse::Binding* b)
{
    if (IsRootingStarted())
        uPtr(b)->Unroot();
}

// private void UnrootBindings() [instance] :52
void Node::UnrootBindings()
{
    ::g::Fuse::Binding* ret16;

    if (_bindings == NULL)
        return;

    if (Binding() != NULL)
        uPtr(Binding())->Unroot();
    else
    {
        ::g::Uno::Collections::List* bl = BindingList();

        for (int i = 0; i < uPtr(bl)->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(bl), uCRef<int>(i), &ret16), ret16))->Unroot();
    }
}

// internal generated void add_Unrooted(Uno.Action value) [instance] :144
void Node::add_Unrooted(uDelegate* value)
{
    Unrooted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Unrooted1, value), ::TYPES[3/*Uno.Action*/]);
}

// internal generated void remove_Unrooted(Uno.Action value) [instance] :144
void Node::remove_Unrooted(uDelegate* value)
{
    Unrooted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Unrooted1, value), ::TYPES[3/*Uno.Action*/]);
}

// internal void UnrootInternal() [instance] :152
void Node::UnrootInternal()
{
    if (_rootStage == 0)
        return;

    if (_rootStage != 2)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(uString::Const("Incomplete or duplicate unrooting: "), this), uString::Const("/")), ::g::Uno::UX::Selector__op_Implicit1(Name()))));

    _rootStage = 3;
    OnUnrooted();

    if (::g::Uno::Delegate::op_Inequality(Unrooted1, NULL))
        uPtr(Unrooted1)->InvokeVoid();

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(Name()), NULL))
        ::g::Fuse::NameRegistry::ClearName(this);

    OverrideContextParent = NULL;
    SoftDispose();
    _parent = NULL;
    _rootStage = 0;
}

// private static object _createWatcher(Fuse.Scripting.Context c, Fuse.Node n, object[] args) [static] :19
uObject* Node::_createWatcher(::g::Fuse::Scripting::Context* c, Node* n, uArray* args)
{
    Node_typeof()->Init();
    uString* key = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[28/*string*/]);
    ::g::Fuse::Scripting::Function* callback = uCast< ::g::Fuse::Scripting::Function*>(args->Strong<uObject*>(1), ::g::Fuse::Scripting::Function_typeof());
    return ::g::Fuse::Scripting::External::New1(Node__DataWatcher::New1(n, c, callback, key));
}

// private static void _destroyWatcher(Fuse.Scripting.Context c, Fuse.Node n, object[] args) [static] :26
void Node::_destroyWatcher(::g::Fuse::Scripting::Context* c, Node* n, uArray* args)
{
    Node_typeof()->Init();

    if (uPtr(args)->Strong<uObject*>(0) != NULL)
    {
        Node__DataWatcher* watcher = uCast<Node__DataWatcher*>(uPtr(uCast< ::g::Fuse::Scripting::External*>(uPtr(args)->Strong<uObject*>(0), ::g::Fuse::Scripting::External_typeof()))->Object, Node__DataWatcher_typeof());
        uPtr(watcher)->Dispose();
    }
}

// internal static bool CaptureRooting() [static] :57
bool Node::CaptureRooting()
{
    Node_typeof()->Init();

    if (Node::_hasRootCapture_)
        return false;

    Node::_rootCaptureIndex_++;

    if (Node::_rootCaptureIndex_ < 1)
        Node::_rootCaptureIndex_ = 1;

    Node::_hasRootCapture_ = true;
    return true;
}

// private static bool Contains(string[] strs, string s) [static] :139
bool Node::Contains(uArray* strs, uString* s)
{
    Node_typeof()->Init();

    for (int i = 0; i < uPtr(strs)->Length(); i++)
        if (::g::Uno::String::op_Equality(uPtr(strs)->Strong<uString*>(i), s))
            return true;

    return false;
}

// internal static bool IsRootCapture(int index) [static] :52
bool Node::IsRootCapture(int index)
{
    Node_typeof()->Init();
    return Node::_hasRootCapture_ && (index == Node::_rootCaptureIndex_);
}

// private static void LaterReleaseRooting() [static] :79
void Node::LaterReleaseRooting()
{
    Node_typeof()->Init();
    Node::_hasRootCapture_ = false;
}

// internal static void Relate(Fuse.Visual parent, Fuse.Node child) [static] :179
void Node::Relate(::g::Fuse::Visual* parent, Node* child)
{
    Node_typeof()->Init();

    if (child != NULL)
    {
        if (uPtr(parent)->ShouldRootChildren())
            uPtr(child)->RootInternal(parent);
    }
}

// internal static void ReleaseRooting(bool captured) [static] :70
void Node::ReleaseRooting(bool captured)
{
    Node_typeof()->Init();

    if (!captured)
        return;

    ::g::Fuse::UpdateManager::AddDeferredAction3(Node::_laterReleaseRooting_, 1);
}

// internal static void Unrelate(Fuse.Visual parent, Fuse.Node child) [static] :187
void Node::Unrelate(::g::Fuse::Visual* parent, Node* child)
{
    Node_typeof()->Init();

    if ((child != NULL) && !uPtr(child)->IsUnrooting())
        uPtr(child)->UnrootInternal();
}

// internal static int get_RootCaptureIndex() [static] :51
int Node::RootCaptureIndex()
{
    Node_typeof()->Init();
    return Node::_rootCaptureIndex_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/NodeGroup.uno
// ------------------------------------------------------------

// public sealed class NodeGroup :290
// {
static void NodeGroup_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NodeGroup_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(NodeGroup_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(NodeGroup_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(NodeGroup_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NodeGroup_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NodeGroup_type, interface5),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(NodeGroup_type, interface6));
    type->SetFields(22);
}

NodeGroup_type* NodeGroup_typeof()
{
    static uSStrong<NodeGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::NodeGroupBase_typeof();
    options.FieldCount = 22;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(NodeGroup);
    options.TypeSize = sizeof(NodeGroup_type);
    type = (NodeGroup_type*)uClassType::New("Fuse.NodeGroup", options);
    type->fp_build_ = NodeGroup_build;
    type->fp_ctor_ = (void*)NodeGroup__New2_fn;
    type->interface6.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::NodeGroupBase__FindTemplate_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public NodeGroup() :303
void NodeGroup__ctor_4_fn(NodeGroup* __this)
{
    __this->ctor_4();
}

// public NodeGroup New() :303
void NodeGroup__New2_fn(NodeGroup** __retval)
{
    *__retval = NodeGroup::New2();
}

// public NodeGroup() [instance] :303
void NodeGroup::ctor_4()
{
    ctor_3(1);
    UseContent(true);
}

// public NodeGroup New() [static] :303
NodeGroup* NodeGroup::New2()
{
    NodeGroup* obj1 = (NodeGroup*)uNew(NodeGroup_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/NodeGroup.uno
// ------------------------------------------------------------

// public abstract class NodeGroupBase :16
// {
static void NodeGroupBase_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15,
        ::g::Fuse::Node_typeof()->Array(), offsetof(NodeGroupBase, _addedNodes), 0,
        ::g::Uno::Bool_typeof(), offsetof(NodeGroupBase, _contentAdded), 0,
        ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(NodeGroupBase, _nodes), 0,
        ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL), offsetof(NodeGroupBase, _resources), 0,
        ::g::Fuse::TemplateSourceImpl_typeof(), offsetof(NodeGroupBase, _templates), 0,
        ::g::Uno::Bool_typeof(), offsetof(NodeGroupBase, _useContent), 0,
        ::g::Uno::Bool_typeof(), offsetof(NodeGroupBase, _useTemplates), 0);
}

::g::Fuse::Node_type* NodeGroupBase_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 22;
    options.InterfaceCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NodeGroupBase);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.NodeGroupBase", options);
    type->fp_build_ = NodeGroupBase_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))NodeGroupBase__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))NodeGroupBase__OnUnrooted_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal NodeGroupBase([Fuse.NodeGroupBase.ConstructFlags flags]) :51
void NodeGroupBase__ctor_3_fn(NodeGroupBase* __this, int* flags)
{
    __this->ctor_3(*flags);
}

// private void AddContent() :153
void NodeGroupBase__AddContent_fn(NodeGroupBase* __this)
{
    __this->AddContent();
}

// public Uno.UX.Template FindTemplate(string key) :43
void NodeGroupBase__FindTemplate_fn(NodeGroupBase* __this, uString* key, ::g::Uno::UX::Template** __retval)
{
    *__retval = __this->FindTemplate(key);
}

// private int get_NodeCount() :19
void NodeGroupBase__get_NodeCount_fn(NodeGroupBase* __this, int* __retval)
{
    *__retval = __this->NodeCount();
}

// public Uno.Collections.IList<Fuse.Node> get_Nodes() :27
void NodeGroupBase__get_Nodes_fn(NodeGroupBase* __this, uObject** __retval)
{
    *__retval = __this->Nodes();
}

// protected void OnNodeAdded(Fuse.Node n) :75
void NodeGroupBase__OnNodeAdded_fn(NodeGroupBase* __this, ::g::Fuse::Node* n)
{
    __this->OnNodeAdded(n);
}

// protected void OnNodeRemoved(Fuse.Node n) :85
void NodeGroupBase__OnNodeRemoved_fn(NodeGroupBase* __this, ::g::Fuse::Node* n)
{
    __this->OnNodeRemoved(n);
}

// private void OnResourceAdded(Uno.UX.Resource r) :108
void NodeGroupBase__OnResourceAdded_fn(NodeGroupBase* __this, ::g::Uno::UX::Resource* r)
{
    __this->OnResourceAdded(r);
}

// private void OnResourceRemoved(Uno.UX.Resource r) :116
void NodeGroupBase__OnResourceRemoved_fn(NodeGroupBase* __this, ::g::Uno::UX::Resource* r)
{
    __this->OnResourceRemoved(r);
}

// protected override void OnRooted() :122
void NodeGroupBase__OnRooted_fn(NodeGroupBase* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);

    if (__this->UseContent())
        __this->AddContent();

    if (__this->_nodes != NULL)
        uPtr(__this->_nodes)->Subscribe(uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Node>*/], (void*)NodeGroupBase__OnNodeAdded_fn, __this), uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Node>*/], (void*)NodeGroupBase__OnNodeRemoved_fn, __this));

    if (__this->_resources != NULL)
        uPtr(__this->_resources)->Subscribe(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL), (void*)NodeGroupBase__OnResourceAdded_fn, __this), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL), (void*)NodeGroupBase__OnResourceRemoved_fn, __this));
}

// protected override void OnUnrooted() :134
void NodeGroupBase__OnUnrooted_fn(NodeGroupBase* __this)
{
    if (__this->UseContent())
        __this->RemoveContent();

    if (__this->_nodes != NULL)
        uPtr(__this->_nodes)->Unsubscribe();

    if (__this->_resources != NULL)
        uPtr(__this->_resources)->Unsubscribe();

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void RemoveContent() :208
void NodeGroupBase__RemoveContent_fn(NodeGroupBase* __this)
{
    __this->RemoveContent();
}

// internal bool get_UseContent() :61
void NodeGroupBase__get_UseContent_fn(NodeGroupBase* __this, bool* __retval)
{
    *__retval = __this->UseContent();
}

// internal void set_UseContent(bool value) :62
void NodeGroupBase__set_UseContent_fn(NodeGroupBase* __this, bool* value)
{
    __this->UseContent(*value);
}

// internal NodeGroupBase([Fuse.NodeGroupBase.ConstructFlags flags]) [instance] :51
void NodeGroupBase::ctor_3(int flags)
{
    ctor_2();
    _useTemplates = !((flags & 1) == 1);
}

// private void AddContent() [instance] :153
void NodeGroupBase::AddContent()
{
    ::g::Fuse::Node* ind1;
    ::g::Fuse::Node* ind2;
    ::g::Uno::UX::Resource* ret3;
    ::g::Fuse::Node* ret4;

    if (_contentAdded)
        return;

    _contentAdded = true;

    if (Parent() == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("AddContent called prior to having a Parent"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/NodeGroup.uno"), 161, uString::Const("AddContent"));
        return;
    }

    if (_resources != NULL)

        for (int i = 0; i < uPtr(_resources)->Count(); i++)
            ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Parent())->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(_resources), uCRef<int>(i), &ret3), ret3));

    if ((NodeCount() == 0) && (_templates.Count() == 0))
        return;

    int addedNodesCount = NodeCount() + (_useTemplates ? _templates.Count() : 0);
    _addedNodes = uArray::New(::TYPES[66/*Fuse.Node[]*/], addedNodesCount);
    int addedNodesAt = 0;

    for (int i1 = 0; i1 < NodeCount(); ++i1)
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(_nodes), uCRef<int>(i1), &ret4), ret4);
        uPtr(n)->OverrideContextParent = (ind1 = uPtr(n)->OverrideContextParent, ((ind1 != NULL) ? ind1 : this));
        uPtr(_addedNodes)->Strong< ::g::Fuse::Node*>(addedNodesAt++) = n;
    }

    if (_useTemplates)

        for (int i2 = 0; i2 < _templates.Count(); ++i2)
        {
            ::g::Fuse::Node* n1 = uAs< ::g::Fuse::Node*>(uPtr(_templates.Item(i2))->New1(), ::TYPES[26/*Fuse.Node*/]);

            if (n1 == NULL)
            {
                ::g::Fuse::Diagnostics::InternalError(uString::Const("Template contains a non-Node"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/NodeGroup.uno"), 194, uString::Const("AddContent"));
                n1 = NodeGroupBase__EmptyNode::New2();
            }

            uPtr(n1)->OverrideContextParent = (ind2 = uPtr(n1)->OverrideContextParent, ((ind2 != NULL) ? ind2 : this));
            uPtr(_addedNodes)->Strong< ::g::Fuse::Node*>(addedNodesAt++) = n1;
        }

    if (addedNodesAt != addedNodesCount)
        U_THROW(::g::Uno::Exception::New2(uString::Const("mismatch in added nodes")));

    uPtr(Parent())->InsertNodesAfter(this, (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL), _addedNodes)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL))));
}

// public Uno.UX.Template FindTemplate(string key) [instance] :43
::g::Uno::UX::Template* NodeGroupBase::FindTemplate(uString* key)
{
    return _templates.FindTemplate(key);
}

// private int get_NodeCount() [instance] :19
int NodeGroupBase::NodeCount()
{
    return (_nodes == NULL) ? 0 : uPtr(_nodes)->Count();
}

// public Uno.Collections.IList<Fuse.Node> get_Nodes() [instance] :27
uObject* NodeGroupBase::Nodes()
{
    if (_nodes == NULL)
    {
        _nodes = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::g::Uno::Collections::RootableList_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL)));

        if (IsRootingCompleted())
            uPtr(_nodes)->Subscribe(uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Node>*/], (void*)NodeGroupBase__OnNodeAdded_fn, this), uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Node>*/], (void*)NodeGroupBase__OnNodeRemoved_fn, this));
    }

    return (uObject*)_nodes;
}

// protected void OnNodeAdded(Fuse.Node n) [instance] :75
void NodeGroupBase::OnNodeAdded(::g::Fuse::Node* n)
{
    if (IsRootingCompleted() && UseContent())
    {
        RemoveContent();
        AddContent();
    }
}

// protected void OnNodeRemoved(Fuse.Node n) [instance] :85
void NodeGroupBase::OnNodeRemoved(::g::Fuse::Node* n)
{
    if (IsRootingCompleted() && UseContent())
        uPtr(Parent())->BeginRemoveChild(n, NULL);
}

// private void OnResourceAdded(Uno.UX.Resource r) [instance] :108
void NodeGroupBase::OnResourceAdded(::g::Uno::UX::Resource* r)
{
    if (IsRootingCompleted() && UseContent())
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Parent())->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), r);
}

// private void OnResourceRemoved(Uno.UX.Resource r) [instance] :116
void NodeGroupBase::OnResourceRemoved(::g::Uno::UX::Resource* r)
{
    bool ret5;

    if (IsRootingCompleted() && UseContent())
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Parent())->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), r, &ret5);
}

// private void RemoveContent() [instance] :208
void NodeGroupBase::RemoveContent()
{
    bool ret6;
    ::g::Uno::UX::Resource* ret7;

    if (!_contentAdded)
        return;

    _contentAdded = false;

    if (Parent() == NULL)
        return;

    if (_resources != NULL)

        for (int i = 0; i < uPtr(_resources)->Count(); i++)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Parent())->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(_resources), uCRef<int>(i), &ret7), ret7), &ret6);

    if (_addedNodes != NULL)

        for (int i1 = 0; i1 < uPtr(_addedNodes)->Length(); ++i1)
        {
            ::g::Fuse::Node* n = uPtr(_addedNodes)->Strong< ::g::Fuse::Node*>(i1);

            if (uPtr(n)->OverrideContextParent == this)
                uPtr(n)->OverrideContextParent = NULL;

            uPtr(Parent())->BeginRemoveChild(n, NULL);
        }

    _addedNodes = NULL;
}

// internal bool get_UseContent() [instance] :61
bool NodeGroupBase::UseContent()
{
    return _useContent;
}

// internal void set_UseContent(bool value) [instance] :62
void NodeGroupBase::UseContent(bool value)
{
    if (value == _useContent)
        return;

    _useContent = value;

    if (IsRootingStarted() && _useContent)
        AddContent();
    else if (!_useContent)
        RemoveContent();
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno
// -------------------------------------------------------------

// internal sealed class NumberComputer :63
// {
static void NumberComputer_build(uType* type)
{
    type->SetBase(::g::Fuse::Computer1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
}

::g::Fuse::Computer1_type* NumberComputer_typeof()
{
    static uSStrong< ::g::Fuse::Computer1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer1_typeof();
    options.ObjectSize = sizeof(NumberComputer);
    options.TypeSize = sizeof(::g::Fuse::Computer1_type);
    type = (::g::Fuse::Computer1_type*)uClassType::New("Fuse.NumberComputer", options);
    type->fp_build_ = NumberComputer_build;
    type->fp_ctor_ = (void*)NumberComputer__New1_fn;
    type->fp_Add1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))NumberComputer__Add1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Computer1*, uObject*, uTRef))NumberComputer__Convert_fn;
    type->fp_Divide1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))NumberComputer__Divide1_fn;
    type->fp_EqualTo1 = (void(*)(::g::Fuse::Computer1*, void*, void*, bool*))NumberComputer__EqualTo1_fn;
    type->fp_GreaterThan1 = (void(*)(::g::Fuse::Computer1*, void*, void*, bool*))NumberComputer__GreaterThan1_fn;
    type->fp_LessThan1 = (void(*)(::g::Fuse::Computer1*, void*, void*, bool*))NumberComputer__LessThan1_fn;
    type->fp_Multiply1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))NumberComputer__Multiply1_fn;
    type->fp_Subtract1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))NumberComputer__Subtract1_fn;
    return type;
}

// public generated NumberComputer() :63
void NumberComputer__ctor_2_fn(NumberComputer* __this)
{
    __this->ctor_2();
}

// public override sealed double Add(double a, double b) :66
void NumberComputer__Add1_fn(NumberComputer* __this, double* a, double* b, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ + b_, void();
}

// public override sealed double Convert(object obj) :65
void NumberComputer__Convert_fn(NumberComputer* __this, uObject* obj, double* __retval)
{
    return *__retval = ::g::Fuse::Marshal::ToDouble(obj), void();
}

// public override sealed double Divide(double a, double b) :69
void NumberComputer__Divide1_fn(NumberComputer* __this, double* a, double* b, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ / b_, void();
}

// public override sealed bool EqualTo(double a, double b) :74
void NumberComputer__EqualTo1_fn(NumberComputer* __this, double* a, double* b, bool* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ == b_, void();
}

// public override sealed bool GreaterThan(double a, double b) :72
void NumberComputer__GreaterThan1_fn(NumberComputer* __this, double* a, double* b, bool* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ > b_, void();
}

// public override sealed bool LessThan(double a, double b) :70
void NumberComputer__LessThan1_fn(NumberComputer* __this, double* a, double* b, bool* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ < b_, void();
}

// public override sealed double Multiply(double a, double b) :68
void NumberComputer__Multiply1_fn(NumberComputer* __this, double* a, double* b, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ * b_, void();
}

// public generated NumberComputer New() :63
void NumberComputer__New1_fn(NumberComputer** __retval)
{
    *__retval = NumberComputer::New1();
}

// public override sealed double Subtract(double a, double b) :67
void NumberComputer__Subtract1_fn(NumberComputer* __this, double* a, double* b, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ - b_, void();
}

// public generated NumberComputer() [instance] :63
void NumberComputer::ctor_2()
{
    ctor_1();
}

// public generated NumberComputer New() [static] :63
NumberComputer* NumberComputer::New1()
{
    NumberComputer* obj1 = (NumberComputer*)uNew(NumberComputer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/OrthographicFrustum.uno
// ----------------------------------------------------------------------

// public sealed class OrthographicFrustum :7
// {
static void OrthographicFrustum_build(uType* type)
{
    ::TYPES[23] = ::g::Fuse::ICommonViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::IFrustum_typeof(), offsetof(OrthographicFrustum_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(OrthographicFrustum, _hasLocalFromWorld), 0,
        ::g::Uno::Bool_typeof(), offsetof(OrthographicFrustum, _hasOrigin), 0,
        ::g::Uno::Bool_typeof(), offsetof(OrthographicFrustum, _hasSize), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(OrthographicFrustum, _localFromWorld), 0,
        ::g::Uno::Float2_typeof(), offsetof(OrthographicFrustum, _origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(OrthographicFrustum, _size), 0);
}

OrthographicFrustum_type* OrthographicFrustum_typeof()
{
    static uSStrong<OrthographicFrustum_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(OrthographicFrustum);
    options.TypeSize = sizeof(OrthographicFrustum_type);
    type = (OrthographicFrustum_type*)uClassType::New("Fuse.OrthographicFrustum", options);
    type->fp_build_ = OrthographicFrustum_build;
    type->fp_ctor_ = (void*)OrthographicFrustum__New1_fn;
    type->interface0.fp_TryGetProjectionTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*, bool*))OrthographicFrustum__TryGetProjectionTransform_fn;
    type->interface0.fp_TryGetProjectionTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*, bool*))OrthographicFrustum__TryGetProjectionTransformInverse_fn;
    type->interface0.fp_GetViewTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetViewTransform_fn;
    type->interface0.fp_GetViewTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetViewTransformInverse_fn;
    return type;
}

// public generated OrthographicFrustum() :7
void OrthographicFrustum__ctor__fn(OrthographicFrustum* __this)
{
    __this->ctor_();
}

// public float4x4 GetViewTransform(Fuse.ICommonViewport viewport) :54
void OrthographicFrustum__GetViewTransform_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransform(viewport);
}

// public float4x4 GetViewTransformInverse(Fuse.ICommonViewport viewport) :75
void OrthographicFrustum__GetViewTransformInverse_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransformInverse(viewport);
}

// public float4x4 get_LocalFromWorld() :40
void OrthographicFrustum__get_LocalFromWorld_fn(OrthographicFrustum* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->LocalFromWorld();
}

// public void set_LocalFromWorld(float4x4 value) :41
void OrthographicFrustum__set_LocalFromWorld_fn(OrthographicFrustum* __this, ::g::Uno::Float4x4* value)
{
    __this->LocalFromWorld(*value);
}

// public generated OrthographicFrustum New() :7
void OrthographicFrustum__New1_fn(OrthographicFrustum** __retval)
{
    *__retval = OrthographicFrustum::New1();
}

// public float2 get_Origin() :13
void OrthographicFrustum__get_Origin_fn(OrthographicFrustum* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Origin();
}

// public void set_Origin(float2 value) :14
void OrthographicFrustum__set_Origin_fn(OrthographicFrustum* __this, ::g::Uno::Float2* value)
{
    __this->Origin(*value);
}

// public float2 get_Size() :25
void OrthographicFrustum__get_Size_fn(OrthographicFrustum* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float2 value) :29
void OrthographicFrustum__set_Size_fn(OrthographicFrustum* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// public bool TryGetProjectionTransform(Fuse.ICommonViewport viewport, float4x4& result) :48
void OrthographicFrustum__TryGetProjectionTransform_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* result, bool* __retval)
{
    *__retval = __this->TryGetProjectionTransform(viewport, result);
}

// public bool TryGetProjectionTransformInverse(Fuse.ICommonViewport viewport, float4x4& result) :68
void OrthographicFrustum__TryGetProjectionTransformInverse_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* result, bool* __retval)
{
    *__retval = __this->TryGetProjectionTransformInverse(viewport, result);
}

// public generated OrthographicFrustum() [instance] :7
void OrthographicFrustum::ctor_()
{
    _localFromWorld = ::g::Uno::Float4x4__Identity();
}

// public float4x4 GetViewTransform(Fuse.ICommonViewport viewport) [instance] :54
::g::Uno::Float4x4 OrthographicFrustum::GetViewTransform(uObject* viewport)
{
    ::g::Uno::Float2 origin = _hasOrigin ? Origin() : ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 viewSize = _hasSize ? Size() : ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[23/*Fuse.ICommonViewport*/]));
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation((-viewSize.X / 2.0f) - origin.X, (-viewSize.Y / 2.0f) - origin.Y, -2.0f);
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling1(1.0f, -1.0f, 1.0f);
    ::g::Uno::Float4x4 ts = ::g::Uno::Matrix::Mul8(t, s);

    if (_hasLocalFromWorld)
        ts = ::g::Uno::Matrix::Mul8(LocalFromWorld(), ts);

    return ts;
}

// public float4x4 GetViewTransformInverse(Fuse.ICommonViewport viewport) [instance] :75
::g::Uno::Float4x4 OrthographicFrustum::GetViewTransformInverse(uObject* viewport)
{
    ::g::Uno::Float2 origin = _hasOrigin ? Origin() : ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 viewSize = _hasSize ? Size() : ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[23/*Fuse.ICommonViewport*/]));
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling1(1.0f, -1.0f, 1.0f);
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation((viewSize.X / 2.0f) + origin.X, (viewSize.Y / 2.0f) + origin.Y, 2.0f);
    ::g::Uno::Float4x4 ts = ::g::Uno::Matrix::Mul8(s, t);

    if (_hasLocalFromWorld)
        ts = ::g::Uno::Matrix::Mul8(ts, ::g::Uno::Matrix::Invert2(LocalFromWorld()));

    return ts;
}

// public float4x4 get_LocalFromWorld() [instance] :40
::g::Uno::Float4x4 OrthographicFrustum::LocalFromWorld()
{
    return _localFromWorld;
}

// public void set_LocalFromWorld(float4x4 value) [instance] :41
void OrthographicFrustum::LocalFromWorld(::g::Uno::Float4x4 value)
{
    _localFromWorld = value;
    _hasLocalFromWorld = true;
}

// public float2 get_Origin() [instance] :13
::g::Uno::Float2 OrthographicFrustum::Origin()
{
    return _origin;
}

// public void set_Origin(float2 value) [instance] :14
void OrthographicFrustum::Origin(::g::Uno::Float2 value)
{
    _origin = value;
    _hasOrigin = true;
}

// public float2 get_Size() [instance] :25
::g::Uno::Float2 OrthographicFrustum::Size()
{
    return _size;
}

// public void set_Size(float2 value) [instance] :29
void OrthographicFrustum::Size(::g::Uno::Float2 value)
{
    _size = value;
    _hasSize = true;
}

// public bool TryGetProjectionTransform(Fuse.ICommonViewport viewport, float4x4& result) [instance] :48
bool OrthographicFrustum::TryGetProjectionTransform(uObject* viewport, ::g::Uno::Float4x4* result)
{
    ::g::Uno::Float2 viewSize = _hasSize ? Size() : ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[23/*Fuse.ICommonViewport*/]));
    return ::g::Fuse::Internal::FrustumMatrix::TryOrthoRH(viewSize.X, viewSize.Y, 1.0f, 1000.0f, result);
}

// public bool TryGetProjectionTransformInverse(Fuse.ICommonViewport viewport, float4x4& result) [instance] :68
bool OrthographicFrustum::TryGetProjectionTransformInverse(uObject* viewport, ::g::Uno::Float4x4* result)
{
    ::g::Uno::Float2 viewSize = _hasSize ? Size() : ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[23/*Fuse.ICommonViewport*/]));
    *result = ::g::Fuse::Internal::FrustumMatrix::OrthoRHInverse(viewSize.X, viewSize.Y, 1.0f, 1000.0f);
    return true;
}

// public generated OrthographicFrustum New() [static] :7
OrthographicFrustum* OrthographicFrustum::New1()
{
    OrthographicFrustum* obj1 = (OrthographicFrustum*)uNew(OrthographicFrustum_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/iOSDevice.uno
// -------------------------------------------------------------

// public sealed extern class OSVersion :8
// {
static void OSVersion_build(uType* type)
{
    ::STRINGS[63] = uString::Const(".");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(OSVersion, Major), 0,
        ::g::Uno::Int_typeof(), offsetof(OSVersion, Minor), 0,
        ::g::Uno::Int_typeof(), offsetof(OSVersion, Patch), 0);
}

uType* OSVersion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(OSVersion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.OSVersion", options);
    type->fp_build_ = OSVersion_build;
    type->fp_ToString = (void(*)(uObject*, uString**))OSVersion__ToString_fn;
    return type;
}

// public OSVersion(int major, int minor, int patch) :13
void OSVersion__ctor__fn(OSVersion* __this, int* major, int* minor, int* patch)
{
    __this->ctor_(*major, *minor, *patch);
}

// public OSVersion New(int major, int minor, int patch) :13
void OSVersion__New1_fn(int* major, int* minor, int* patch, OSVersion** __retval)
{
    *__retval = OSVersion::New1(*major, *minor, *patch);
}

// public override sealed string ToString() :19
void OSVersion__ToString_fn(OSVersion* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox<int>(::TYPES[42/*int*/], __this->Major), ::STRINGS[63/*"."*/]), uBox<int>(::TYPES[42/*int*/], __this->Minor)), ::STRINGS[63/*"."*/]), uBox<int>(::TYPES[42/*int*/], __this->Patch)), void();
}

// public OSVersion(int major, int minor, int patch) [instance] :13
void OSVersion::ctor_(int major, int minor, int patch)
{
    Major = major;
    Minor = minor;
    Patch = patch;
}

// public OSVersion New(int major, int minor, int patch) [static] :13
OSVersion* OSVersion::New1(int major, int minor, int patch)
{
    OSVersion* obj1 = (OSVersion*)uNew(OSVersion_typeof());
    obj1->ctor_(major, minor, patch);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.ScriptClass.uno
// ---------------------------------------------------------------------

// private sealed class Visual.ParameterProperty :19
// {
// static generated ParameterProperty() :19
static void Visual__ParameterProperty__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    Visual__ParameterProperty::_name1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[64/*"Parameter"*/]);
}

static void Visual__ParameterProperty_build(uType* type)
{
    ::STRINGS[64] = uString::Const("Parameter");
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Visual_typeof(), offsetof(Visual__ParameterProperty, _visual), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Visual__ParameterProperty::_name1_, uFieldFlagsStatic);
}

::g::Uno::UX::Property1_type* Visual__ParameterProperty_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Visual__ParameterProperty);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Fuse.Visual.ParameterProperty", options);
    type->fp_build_ = Visual__ParameterProperty_build;
    type->fp_cctor_ = Visual__ParameterProperty__cctor__fn;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))Visual__ParameterProperty__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Visual__ParameterProperty__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))Visual__ParameterProperty__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))Visual__ParameterProperty__get_SupportsOriginSetter_fn;
    return type;
}

// public ParameterProperty(Fuse.Visual visual) :27
void Visual__ParameterProperty__ctor_3_fn(Visual__ParameterProperty* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(visual);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :24
void Visual__ParameterProperty__Get1_fn(Visual__ParameterProperty* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(__this->_visual)->Parameter(), void();
}

// public ParameterProperty New(Fuse.Visual visual) :27
void Visual__ParameterProperty__New1_fn(::g::Fuse::Visual* visual, Visual__ParameterProperty** __retval)
{
    *__retval = Visual__ParameterProperty::New1(visual);
}

// public override sealed Uno.UX.PropertyObject get_Object() :22
void Visual__ParameterProperty__get_Object_fn(Visual__ParameterProperty* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_visual, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string value, Uno.UX.IPropertyListener origin) :25
void Visual__ParameterProperty__Set1_fn(Visual__ParameterProperty* __this, ::g::Uno::UX::PropertyObject* obj, uString* value, uObject* origin)
{
    uPtr(__this->_visual)->Parameter(value);
}

// public override sealed bool get_SupportsOriginSetter() :23
void Visual__ParameterProperty__get_SupportsOriginSetter_fn(Visual__ParameterProperty* __this, bool* __retval)
{
    return *__retval = false, void();
}

::g::Uno::UX::Selector Visual__ParameterProperty::_name1_;

// public ParameterProperty(Fuse.Visual visual) [instance] :27
void Visual__ParameterProperty::ctor_3(::g::Fuse::Visual* visual)
{
    ctor_2(Visual__ParameterProperty::_name1_);
    _visual = visual;
}

// public ParameterProperty New(Fuse.Visual visual) [static] :27
Visual__ParameterProperty* Visual__ParameterProperty::New1(::g::Fuse::Visual* visual)
{
    Visual__ParameterProperty* obj1 = (Visual__ParameterProperty*)uNew(Visual__ParameterProperty_typeof());
    obj1->ctor_3(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno
// --------------------------------------------------------------

// private sealed class TranslationModes.ParentSizeMode :91
// {
static void TranslationModes__ParentSizeMode_build(uType* type)
{
    ::TYPES[57] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[58] = ::g::Fuse::ITransformRelative_typeof();
    ::TYPES[59] = ::g::Fuse::PlacedHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__ParentSizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__ParentSizeMode_type, interface1));
}

TranslationModes__ParentSizeMode_type* TranslationModes__ParentSizeMode_typeof()
{
    static uSStrong<TranslationModes__ParentSizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TranslationModes__ParentSizeMode);
    options.TypeSize = sizeof(TranslationModes__ParentSizeMode_type);
    type = (TranslationModes__ParentSizeMode_type*)uClassType::New("Fuse.TranslationModes.ParentSizeMode", options);
    type->fp_build_ = TranslationModes__ParentSizeMode_build;
    type->fp_ctor_ = (void*)TranslationModes__ParentSizeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__ParentSizeMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TranslationModes__ParentSizeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))TranslationModes__ParentSizeMode__Unsubscribe_fn;
    return type;
}

// public generated ParentSizeMode() :91
void TranslationModes__ParentSizeMode__ctor__fn(TranslationModes__ParentSizeMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t) :93
void TranslationModes__ParentSizeMode__GetAbsVector_fn(TranslationModes__ParentSizeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated ParentSizeMode New() :91
void TranslationModes__ParentSizeMode__New1_fn(TranslationModes__ParentSizeMode** __retval)
{
    *__retval = TranslationModes__ParentSizeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :94
void TranslationModes__ParentSizeMode__Subscribe_fn(TranslationModes__ParentSizeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :101
void TranslationModes__ParentSizeMode__Unsubscribe_fn(TranslationModes__ParentSizeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated ParentSizeMode() [instance] :91
void TranslationModes__ParentSizeMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :93
::g::Uno::Float3 TranslationModes__ParentSizeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    return ::g::Uno::Float3__op_Multiply2(::g::Fuse::TranslationModes::SizeOf(uPtr(uPtr(t)->RelativeNode())->Parent()), uPtr(t)->Vector());
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :94
uObject* TranslationModes__ParentSizeMode::Subscribe(uObject* transform)
{
    uObject* n = uAs<uObject*>(uPtr(::g::Fuse::ITransformRelative::RelativeNode(uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/])))->Parent(), ::TYPES[57/*Fuse.IActualPlacement*/]);

    if (n != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(n), ::TYPES[57/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[59/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));

    return n;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :101
void TranslationModes__ParentSizeMode::Unsubscribe(uObject* transform, uObject* sub)
{
    if (sub != NULL)
        ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(uAs<uObject*>(sub, ::TYPES[57/*Fuse.IActualPlacement*/])), ::TYPES[57/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[59/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));
}

// public generated ParentSizeMode New() [static] :91
TranslationModes__ParentSizeMode* TranslationModes__ParentSizeMode::New1()
{
    TranslationModes__ParentSizeMode* obj1 = (TranslationModes__ParentSizeMode*)uNew(TranslationModes__ParentSizeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.BeginRemove.uno
// ---------------------------------------------------------------------

// public sealed class PendingRemoveVisual :5
// {
static void PendingRemoveVisual_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IUpdateListener_typeof(), offsetof(PendingRemoveVisual_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(PendingRemoveVisual, _done), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(PendingRemoveVisual, _then), 0,
        ::g::Uno::Int_typeof(), offsetof(PendingRemoveVisual, subscribers), 0,
        ::g::Fuse::Visual_typeof(), offsetof(PendingRemoveVisual, _Child), 0,
        ::g::Fuse::Visual_typeof(), offsetof(PendingRemoveVisual, _Parent), 0);
}

PendingRemoveVisual_type* PendingRemoveVisual_typeof()
{
    static uSStrong<PendingRemoveVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PendingRemoveVisual);
    options.TypeSize = sizeof(PendingRemoveVisual_type);
    type = (PendingRemoveVisual_type*)uClassType::New("Fuse.PendingRemoveVisual", options);
    type->fp_build_ = PendingRemoveVisual_build;
    type->interface0.fp_Update = (void(*)(uObject*))PendingRemoveVisual__FuseIUpdateListenerUpdate_fn;
    return type;
}

// internal PendingRemoveVisual(Fuse.Visual child, Fuse.Visual parent, Uno.Action<Fuse.Node> then) :12
void PendingRemoveVisual__ctor__fn(PendingRemoveVisual* __this, ::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then)
{
    __this->ctor_(child, parent, then);
}

// public void AddSubscriber() :20
void PendingRemoveVisual__AddSubscriber_fn(PendingRemoveVisual* __this)
{
    __this->AddSubscriber();
}

// public generated Fuse.Visual get_Child() :8
void PendingRemoveVisual__get_Child_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Child();
}

// private generated void set_Child(Fuse.Visual value) :8
void PendingRemoveVisual__set_Child_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual* value)
{
    __this->Child(value);
}

// private void Fuse.IUpdateListener.Update() :50
void PendingRemoveVisual__FuseIUpdateListenerUpdate_fn(PendingRemoveVisual* __this)
{
    __this->Remove();
}

// public bool get_HasSubscribers() :36
void PendingRemoveVisual__get_HasSubscribers_fn(PendingRemoveVisual* __this, bool* __retval)
{
    *__retval = __this->HasSubscribers();
}

// internal PendingRemoveVisual New(Fuse.Visual child, Fuse.Visual parent, Uno.Action<Fuse.Node> then) :12
void PendingRemoveVisual__New1_fn(::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then, PendingRemoveVisual** __retval)
{
    *__retval = PendingRemoveVisual::New1(child, parent, then);
}

// public generated Fuse.Visual get_Parent() :7
void PendingRemoveVisual__get_Parent_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Parent();
}

// private generated void set_Parent(Fuse.Visual value) :7
void PendingRemoveVisual__set_Parent_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual* value)
{
    __this->Parent(value);
}

// public void Remove() :40
void PendingRemoveVisual__Remove_fn(PendingRemoveVisual* __this)
{
    __this->Remove();
}

// public void RemoveSubscriber() :25
void PendingRemoveVisual__RemoveSubscriber_fn(PendingRemoveVisual* __this)
{
    __this->RemoveSubscriber();
}

// internal PendingRemoveVisual(Fuse.Visual child, Fuse.Visual parent, Uno.Action<Fuse.Node> then) [instance] :12
void PendingRemoveVisual::ctor_(::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then)
{
    Parent(parent);
    Child(child);
    _then = then;
}

// public void AddSubscriber() [instance] :20
void PendingRemoveVisual::AddSubscriber()
{
    subscribers++;
}

// public generated Fuse.Visual get_Child() [instance] :8
::g::Fuse::Visual* PendingRemoveVisual::Child()
{
    return _Child;
}

// private generated void set_Child(Fuse.Visual value) [instance] :8
void PendingRemoveVisual::Child(::g::Fuse::Visual* value)
{
    _Child = value;
}

// public bool get_HasSubscribers() [instance] :36
bool PendingRemoveVisual::HasSubscribers()
{
    return subscribers > 0;
}

// public generated Fuse.Visual get_Parent() [instance] :7
::g::Fuse::Visual* PendingRemoveVisual::Parent()
{
    return _Parent;
}

// private generated void set_Parent(Fuse.Visual value) [instance] :7
void PendingRemoveVisual::Parent(::g::Fuse::Visual* value)
{
    _Parent = value;
}

// public void Remove() [instance] :40
void PendingRemoveVisual::Remove()
{
    if (_done)
        return;

    if (::g::Uno::Delegate::op_Inequality(_then, NULL))
        uPtr(_then)->InvokeVoid(Child());

    _done = true;
    uPtr(Child())->ConcludePendingRemove();
}

// public void RemoveSubscriber() [instance] :25
void PendingRemoveVisual::RemoveSubscriber()
{
    subscribers--;

    if (subscribers == 0)
        Remove();
}

// internal PendingRemoveVisual New(Fuse.Visual child, Fuse.Visual parent, Uno.Action<Fuse.Node> then) [static] :12
PendingRemoveVisual* PendingRemoveVisual::New1(::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then)
{
    PendingRemoveVisual* obj1 = (PendingRemoveVisual*)uNew(PendingRemoveVisual_typeof());
    obj1->ctor_(child, parent, then);
    return obj1;
}
// }

// /Users/r0xstation/Library/Application Support/Fusetools/Packages/Fuse.Launcher.Phone/1.3.1/Phone/PhoneUriHelper.uno
// -------------------------------------------------------------------------------------------------------------------

// internal static class PhoneUriHelper :7
// {
static void PhoneUriHelper_build(uType* type)
{
    ::STRINGS[65] = uString::Const("tel:");
    type->SetDependencies(
        ::g::Uno::Net::Http::Uri_typeof());
}

uClassType* PhoneUriHelper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.PhoneUriHelper", options);
    type->fp_build_ = PhoneUriHelper_build;
    return type;
}

// public static string PhoneNumberToUri(string phoneNumber) :9
void PhoneUriHelper__PhoneNumberToUri_fn(uString* phoneNumber, uString** __retval)
{
    *__retval = PhoneUriHelper::PhoneNumberToUri(phoneNumber);
}

// public static string PhoneNumberToUri(string phoneNumber) [static] :9
uString* PhoneUriHelper::PhoneNumberToUri(uString* phoneNumber)
{
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();
    builder->Append2(::STRINGS[65/*"tel:"*/]);
    builder->Append2(::g::Uno::Net::Http::Uri::Encode(phoneNumber));
    return builder->ToString();
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno
// --------------------------------------------------------------

// public sealed class PlacedArgs :21
// {
static void PlacedArgs_build(uType* type)
{
    ::STRINGS[44] = uString::Const("x");
    ::STRINGS[66] = uString::Const("y");
    ::STRINGS[67] = uString::Const("width");
    ::STRINGS[68] = uString::Const("height");
    ::TYPES[60] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(PlacedArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(PlacedArgs, _HasPrev), 0,
        ::g::Uno::Float2_typeof(), offsetof(PlacedArgs, _NewPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(PlacedArgs, _NewSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(PlacedArgs, _PrevPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(PlacedArgs, _PrevSize), 0);
}

PlacedArgs_type* PlacedArgs_typeof()
{
    static uSStrong<PlacedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PlacedArgs);
    options.TypeSize = sizeof(PlacedArgs_type);
    type = (PlacedArgs_type*)uClassType::New("Fuse.PlacedArgs", options);
    type->fp_build_ = PlacedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))PlacedArgs__Serialize_fn;
    return type;
}

// internal PlacedArgs(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) :29
void PlacedArgs__ctor_1_fn(PlacedArgs* __this, bool* hasPrev, ::g::Uno::Float2* prevPosition, ::g::Uno::Float2* newPosition, ::g::Uno::Float2* prevSize, ::g::Uno::Float2* newSize)
{
    __this->ctor_1(*hasPrev, *prevPosition, *newPosition, *prevSize, *newSize);
}

// public generated bool get_HasPrev() :23
void PlacedArgs__get_HasPrev_fn(PlacedArgs* __this, bool* __retval)
{
    *__retval = __this->HasPrev();
}

// private generated void set_HasPrev(bool value) :23
void PlacedArgs__set_HasPrev_fn(PlacedArgs* __this, bool* value)
{
    __this->HasPrev(*value);
}

// internal PlacedArgs New(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) :29
void PlacedArgs__New2_fn(bool* hasPrev, ::g::Uno::Float2* prevPosition, ::g::Uno::Float2* newPosition, ::g::Uno::Float2* prevSize, ::g::Uno::Float2* newSize, PlacedArgs** __retval)
{
    *__retval = PlacedArgs::New2(*hasPrev, *prevPosition, *newPosition, *prevSize, *newSize);
}

// public generated float2 get_NewPosition() :27
void PlacedArgs__get_NewPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->NewPosition();
}

// private generated void set_NewPosition(float2 value) :27
void PlacedArgs__set_NewPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->NewPosition(*value);
}

// public generated float2 get_NewSize() :26
void PlacedArgs__get_NewSize_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->NewSize();
}

// private generated void set_NewSize(float2 value) :26
void PlacedArgs__set_NewSize_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->NewSize(*value);
}

// public generated float2 get_PrevPosition() :24
void PlacedArgs__get_PrevPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PrevPosition();
}

// private generated void set_PrevPosition(float2 value) :24
void PlacedArgs__set_PrevPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->PrevPosition(*value);
}

// public generated float2 get_PrevSize() :25
void PlacedArgs__get_PrevSize_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PrevSize();
}

// private generated void set_PrevSize(float2 value) :25
void PlacedArgs__set_PrevSize_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->PrevSize(*value);
}

// public void Serialize(Fuse.Scripting.IEventSerializer serializer) :39
void PlacedArgs__Serialize_fn(PlacedArgs* __this, uObject* serializer)
{
    __this->Serialize(serializer);
}

// internal PlacedArgs(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) [instance] :29
void PlacedArgs::ctor_1(bool hasPrev, ::g::Uno::Float2 prevPosition, ::g::Uno::Float2 newPosition, ::g::Uno::Float2 prevSize, ::g::Uno::Float2 newSize)
{
    ctor_();
    HasPrev(hasPrev);
    PrevPosition(prevPosition);
    PrevSize(prevSize);
    NewSize(newSize);
    NewPosition(newPosition);
}

// public generated bool get_HasPrev() [instance] :23
bool PlacedArgs::HasPrev()
{
    return _HasPrev;
}

// private generated void set_HasPrev(bool value) [instance] :23
void PlacedArgs::HasPrev(bool value)
{
    _HasPrev = value;
}

// public generated float2 get_NewPosition() [instance] :27
::g::Uno::Float2 PlacedArgs::NewPosition()
{
    return _NewPosition;
}

// private generated void set_NewPosition(float2 value) [instance] :27
void PlacedArgs::NewPosition(::g::Uno::Float2 value)
{
    _NewPosition = value;
}

// public generated float2 get_NewSize() [instance] :26
::g::Uno::Float2 PlacedArgs::NewSize()
{
    return _NewSize;
}

// private generated void set_NewSize(float2 value) [instance] :26
void PlacedArgs::NewSize(::g::Uno::Float2 value)
{
    _NewSize = value;
}

// public generated float2 get_PrevPosition() [instance] :24
::g::Uno::Float2 PlacedArgs::PrevPosition()
{
    return _PrevPosition;
}

// private generated void set_PrevPosition(float2 value) [instance] :24
void PlacedArgs::PrevPosition(::g::Uno::Float2 value)
{
    _PrevPosition = value;
}

// public generated float2 get_PrevSize() [instance] :25
::g::Uno::Float2 PlacedArgs::PrevSize()
{
    return _PrevSize;
}

// private generated void set_PrevSize(float2 value) [instance] :25
void PlacedArgs::PrevSize(::g::Uno::Float2 value)
{
    _PrevSize = value;
}

// public void Serialize(Fuse.Scripting.IEventSerializer serializer) [instance] :39
void PlacedArgs::Serialize(uObject* serializer)
{
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(uPtr(serializer), ::TYPES[60/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[44/*"x"*/], (double)NewPosition().X);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(serializer, ::TYPES[60/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[66/*"y"*/], (double)NewPosition().Y);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(serializer, ::TYPES[60/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[67/*"width"*/], (double)NewSize().X);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(serializer, ::TYPES[60/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[68/*"height"*/], (double)NewSize().Y);
}

// internal PlacedArgs New(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) [static] :29
PlacedArgs* PlacedArgs::New2(bool hasPrev, ::g::Uno::Float2 prevPosition, ::g::Uno::Float2 newPosition, ::g::Uno::Float2 prevSize, ::g::Uno::Float2 newSize)
{
    PlacedArgs* obj1 = (PlacedArgs*)uNew(PlacedArgs_typeof());
    obj1->ctor_1(hasPrev, prevPosition, newPosition, prevSize, newSize);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno
// --------------------------------------------------------------

// public delegate void PlacedHandler(object sender, Fuse.PlacedArgs args) :52
uDelegateType* PlacedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.PlacedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::PlacedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Properties.uno
// --------------------------------------------------------------

// public sealed class Properties :15
// {
// static generated Properties() :15
static void Properties__cctor__fn(uType* __type)
{
    Properties::NoValue_ = ::g::Uno::Object::New();
}

static void Properties_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(Properties, _handle), 0,
        type, offsetof(Properties, _next), 0,
        uObject_typeof(), offsetof(Properties, _value), 0,
        uObject_typeof(), (uintptr_t)&Properties::NoValue_, uFieldFlagsStatic);
}

uType* Properties_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Properties);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Properties", options);
    type->fp_build_ = Properties_build;
    type->fp_ctor_ = (void*)Properties__New1_fn;
    type->fp_cctor_ = Properties__cctor__fn;
    return type;
}

// public generated Properties() :15
void Properties__ctor__fn(Properties* __this)
{
    __this->ctor_();
}

// public void AddToList(Fuse.PropertyHandle handle, object val) :66
void Properties__AddToList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->AddToList(handle, val);
}

// public void Clear(Fuse.PropertyHandle handle) :149
void Properties__Clear_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle)
{
    __this->Clear(handle);
}

// private void Clear(Fuse.PropertyHandle handle, object val, bool all) :156
void Properties__Clear1_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val, bool* all)
{
    __this->Clear1(handle, val, *all);
}

// public static Fuse.PropertyHandle CreateHandle() :21
void Properties__CreateHandle_fn(::g::Fuse::PropertyHandle** __retval)
{
    *__retval = Properties::CreateHandle();
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object[]> action, object[] state) :132
void Properties__ForeachInList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uDelegate* action, uArray* state)
{
    __this->ForeachInList(handle, action, state);
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object> action, object state) :115
void Properties__ForeachInList1_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uDelegate* action, uObject* state)
{
    __this->ForeachInList1(handle, action, state);
}

// public object Get(Fuse.PropertyHandle handle) :26
void Properties__Get_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject** __retval)
{
    *__retval = __this->Get(handle);
}

// public bool Has(Fuse.PropertyHandle handle) :41
void Properties__Has_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, bool* __retval)
{
    *__retval = __this->Has(handle);
}

// public generated Properties New() :15
void Properties__New1_fn(Properties** __retval)
{
    *__retval = Properties::New1();
}

// public void RemoveFromList(Fuse.PropertyHandle handle, object val) :84
void Properties__RemoveFromList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->RemoveFromList(handle, val);
}

// public void Set(Fuse.PropertyHandle handle, object val) :48
void Properties__Set_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->Set(handle, val);
}

// public bool TryGet(Fuse.PropertyHandle handle, object& val) :33
void Properties__TryGet_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject** val, bool* __retval)
{
    *__retval = __this->TryGet(handle, val);
}

uSStrong<uObject*> Properties::NoValue_;

// public generated Properties() [instance] :15
void Properties::ctor_()
{
}

// public void AddToList(Fuse.PropertyHandle handle, object val) [instance] :66
void Properties::AddToList(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    if (_handle == NULL)
    {
        _handle = handle;
        _value = val;
    }
    else if (_next == NULL)
    {
        _next = Properties::New1();
        uPtr(_next)->AddToList(handle, val);
    }
    else
        uPtr(_next)->AddToList(handle, val);
}

// public void Clear(Fuse.PropertyHandle handle) [instance] :149
void Properties::Clear(::g::Fuse::PropertyHandle* handle)
{
    Clear1(handle, Properties::NoValue_, true);
}

// private void Clear(Fuse.PropertyHandle handle, object val, bool all) [instance] :156
void Properties::Clear1(::g::Fuse::PropertyHandle* handle, uObject* val, bool all)
{
    if (_handle == NULL)
        return;

    Properties* p = this;
    Properties* previous = NULL;

    while (p != NULL)
        if ((uPtr(p)->_handle == handle) && ((val == Properties::NoValue_) || ::g::Uno::Object::Equals(uPtr(val), uPtr(p)->_value)))
        {
            if (previous == NULL)
            {
                if (uPtr(p)->_next == NULL)
                {
                    uPtr(p)->_handle = NULL;
                    p->_value = NULL;
                    break;
                }
                else
                {
                    uPtr(p)->_handle = uPtr(uPtr(p)->_next)->_handle;
                    p->_value = uPtr(p->_next)->_value;
                    p->_next = uPtr(p->_next)->_next;

                    if (all)
                        continue;
                    else
                        break;
                }
            }
            else
            {
                uPtr(previous)->_next = uPtr(p)->_next;
                p = uPtr(p)->_next;

                if (all)
                    continue;
                else
                    break;
            }
        }
        else
        {
            previous = p;
            p = uPtr(p)->_next;
        }
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object[]> action, object[] state) [instance] :132
void Properties::ForeachInList(::g::Fuse::PropertyHandle* handle, uDelegate* action, uArray* state)
{
    if (_handle == NULL)
        return;

    Properties* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->_handle == handle)
            uPtr(action)->Invoke(2, (uObject*)uPtr(p)->_value, state);

        p = uPtr(p)->_next;
    }
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object> action, object state) [instance] :115
void Properties::ForeachInList1(::g::Fuse::PropertyHandle* handle, uDelegate* action, uObject* state)
{
    if (_handle == NULL)
        return;

    Properties* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->_handle == handle)
            uPtr(action)->Invoke(2, (uObject*)uPtr(p)->_value, state);

        p = uPtr(p)->_next;
    }
}

// public object Get(Fuse.PropertyHandle handle) [instance] :26
uObject* Properties::Get(::g::Fuse::PropertyHandle* handle)
{
    if (_handle == handle)
        return _value;

    if (_next != NULL)
        return uPtr(_next)->Get(handle);

    return NULL;
}

// public bool Has(Fuse.PropertyHandle handle) [instance] :41
bool Properties::Has(::g::Fuse::PropertyHandle* handle)
{
    if (_handle == handle)
        return true;

    if (_next != NULL)
        return uPtr(_next)->Has(handle);

    return false;
}

// public void RemoveFromList(Fuse.PropertyHandle handle, object val) [instance] :84
void Properties::RemoveFromList(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    Clear1(handle, val, false);
}

// public void Set(Fuse.PropertyHandle handle, object val) [instance] :48
void Properties::Set(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    if (_handle == NULL)
    {
        _handle = handle;
        _value = val;
    }
    else if (_handle == handle)
        _value = val;
    else
    {
        if (_next == NULL)
            _next = Properties::New1();

        uPtr(_next)->Set(handle, val);
    }
}

// public bool TryGet(Fuse.PropertyHandle handle, object& val) [instance] :33
bool Properties::TryGet(::g::Fuse::PropertyHandle* handle, uObject** val)
{
    if (_handle == handle)
    {
        *val = _value;
        return true;
    }

    if (_next != NULL)
        return uPtr(_next)->TryGet(handle, val);

    *val = NULL;
    return false;
}

// public static Fuse.PropertyHandle CreateHandle() [static] :21
::g::Fuse::PropertyHandle* Properties::CreateHandle()
{
    return ::g::Fuse::PropertyHandle::New1();
}

// public generated Properties New() [static] :15
Properties* Properties::New1()
{
    Properties* obj1 = (Properties*)uNew(Properties_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Properties.uno
// --------------------------------------------------------------

// public sealed class PropertyHandle :5
// {
static void PropertyHandle_build(uType* type)
{
}

uType* PropertyHandle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(PropertyHandle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.PropertyHandle", options);
    type->fp_build_ = PropertyHandle_build;
    type->fp_ctor_ = (void*)PropertyHandle__New1_fn;
    return type;
}

// internal PropertyHandle() :7
void PropertyHandle__ctor__fn(PropertyHandle* __this)
{
    __this->ctor_();
}

// internal PropertyHandle New() :7
void PropertyHandle__New1_fn(PropertyHandle** __retval)
{
    *__retval = PropertyHandle::New1();
}

// internal PropertyHandle() [instance] :7
void PropertyHandle::ctor_()
{
}

// internal PropertyHandle New() [static] :7
PropertyHandle* PropertyHandle::New1()
{
    PropertyHandle* obj1 = (PropertyHandle*)uNew(PropertyHandle_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Ray.uno
// -------------------------------------------------------

// public struct Ray :5
// {
static void Ray_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(Ray, Position), 0,
        ::g::Uno::Float3_typeof(), offsetof(Ray, Direction), 0);
}

uStructType* Ray_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Ray);
    options.ValueSize = sizeof(Ray);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Ray", options);
    type->fp_build_ = Ray_build;
    return type;
}

// public Ray(float3 pos, float3 dir) :10
void Ray__ctor__fn(Ray* __this, ::g::Uno::Float3* pos, ::g::Uno::Float3* dir)
{
    __this->ctor_(*pos, *dir);
}

// public Ray New(float3 pos, float3 dir) :10
void Ray__New1_fn(::g::Uno::Float3* pos, ::g::Uno::Float3* dir, Ray* __retval)
{
    *__retval = Ray__New1(*pos, *dir);
}

// public Ray(float3 pos, float3 dir) [instance] :10
void Ray::ctor_(::g::Uno::Float3 pos, ::g::Uno::Float3 dir)
{
    Position = pos;
    Direction = dir;
}

// public Ray New(float3 pos, float3 dir) [static] :10
Ray Ray__New1(::g::Uno::Float3 pos, ::g::Uno::Float3 dir)
{
    Ray obj2;
    obj2.ctor_(pos, dir);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Transform.uno
// ------------------------------------------------------------

// public abstract class RelativeTransform<TransformMode> :300
// {
static void RelativeTransform_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[61] = ::g::Fuse::ITransformMode_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RelativeTransform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(RelativeTransform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(RelativeTransform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(RelativeTransform_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RelativeTransform_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RelativeTransform_type, interface5),
        ::g::Fuse::ITransformRelative_typeof(), offsetof(RelativeTransform_type, interface6));
    type->SetFields(16,
        ::g::Fuse::Visual_typeof(), offsetof(RelativeTransform, _relativeNode), 0,
        type->T(0), offsetof(RelativeTransform, _relativeTo), 0,
        uObject_typeof(), offsetof(RelativeTransform, _subscription), 0,
        ::g::Fuse::Visual_typeof(), offsetof(RelativeTransform, _waitRootingCompleted), 0);
}

RelativeTransform_type* RelativeTransform_typeof()
{
    static uSStrong<RelativeTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 20;
    options.GenericCount = 1;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(RelativeTransform);
    options.TypeSize = sizeof(RelativeTransform_type);
    type = (RelativeTransform_type*)uClassType::New("Fuse.RelativeTransform`1", options);
    type->fp_build_ = RelativeTransform_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))RelativeTransform__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))RelativeTransform__OnUnrooted_fn;
    type->interface6.fp_OnTransformChanged = (void(*)(uObject*, uObject*, uObject*))RelativeTransform__FuseITransformRelativeOnTransformChanged_fn;
    type->interface6.fp_get_Target = (void(*)(uObject*, ::g::Fuse::Visual**))RelativeTransform__FuseITransformRelativeget_Target_fn;
    type->interface6.fp_get_RelativeNode = (void(*)(uObject*, ::g::Fuse::Visual**))RelativeTransform__FuseITransformRelativeget_RelativeNode_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal RelativeTransform(TransformMode defaultTransform) :332
void RelativeTransform__ctor_3_fn(RelativeTransform* __this, uObject* defaultTransform)
{
    __this->ctor_3(defaultTransform);
}

// private void CheckSubscription(bool fromRooted) :379
void RelativeTransform__CheckSubscription_fn(RelativeTransform* __this, bool* fromRooted)
{
    __this->CheckSubscription(*fromRooted);
}

// private void ClearRootingCompleted() :365
void RelativeTransform__ClearRootingCompleted_fn(RelativeTransform* __this)
{
    __this->ClearRootingCompleted();
}

// private void ClearSubscription() :354
void RelativeTransform__ClearSubscription_fn(RelativeTransform* __this)
{
    __this->ClearSubscription();
}

// private void Fuse.ITransformRelative.OnTransformChanged(object s, object a) :339
void RelativeTransform__FuseITransformRelativeOnTransformChanged_fn(RelativeTransform* __this, uObject* s, uObject* a)
{
    __this->OnMatrixChanged(NULL, NULL);
}

// private Fuse.Visual Fuse.ITransformRelative.get_RelativeNode() :338
void RelativeTransform__FuseITransformRelativeget_RelativeNode_fn(RelativeTransform* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->RelativeNode(), void();
}

// private Fuse.Visual Fuse.ITransformRelative.get_Target() :337
void RelativeTransform__FuseITransformRelativeget_Target_fn(RelativeTransform* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->Parent(), void();
}

// protected override sealed void OnRooted() :341
void RelativeTransform__OnRooted_fn(RelativeTransform* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->CheckSubscription(true);
}

// private void OnRootingCompleted() :373
void RelativeTransform__OnRootingCompleted_fn(RelativeTransform* __this)
{
    __this->OnRootingCompleted();
}

// protected override sealed void OnUnrooted() :347
void RelativeTransform__OnUnrooted_fn(RelativeTransform* __this)
{
    __this->ClearRootingCompleted();
    __this->ClearSubscription();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public Fuse.Visual get_RelativeNode() :306
void RelativeTransform__get_RelativeNode_fn(RelativeTransform* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->RelativeNode();
}

// public void set_RelativeNode(Fuse.Visual value) :307
void RelativeTransform__set_RelativeNode_fn(RelativeTransform* __this, ::g::Fuse::Visual* value)
{
    __this->RelativeNode(value);
}

// public TransformMode get_RelativeTo() :320
void RelativeTransform__get_RelativeTo_fn(RelativeTransform* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(TransformMode value) :321
void RelativeTransform__set_RelativeTo_fn(RelativeTransform* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal RelativeTransform(TransformMode defaultTransform) [instance] :332
void RelativeTransform::ctor_3(uObject* defaultTransform)
{
    ctor_2();
    _relativeTo = defaultTransform;
}

// private void CheckSubscription(bool fromRooted) [instance] :379
void RelativeTransform::CheckSubscription(bool fromRooted)
{
    if (!fromRooted && !IsRootingCompleted())
        return;

    if ((RelativeNode() != NULL) && !uPtr(RelativeNode())->IsRootingStarted())
    {
        ClearRootingCompleted();
        _waitRootingCompleted = RelativeNode();
        uPtr(_waitRootingCompleted)->add_RootingCompleted(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)RelativeTransform__OnRootingCompleted_fn, this));
        return;
    }

    ClearSubscription();
    _subscription = ::g::Fuse::ITransformMode::Subscribe(uInterface(uPtr(uAs<uObject*>(RelativeTo(), ::TYPES[61/*Fuse.ITransformMode*/])), ::TYPES[61/*Fuse.ITransformMode*/]), (uObject*)this);
    OnMatrixChanged(NULL, NULL);
}

// private void ClearRootingCompleted() [instance] :365
void RelativeTransform::ClearRootingCompleted()
{
    if (_waitRootingCompleted != NULL)
    {
        uPtr(_waitRootingCompleted)->remove_RootingCompleted(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)RelativeTransform__OnRootingCompleted_fn, this));
        _waitRootingCompleted = NULL;
    }
}

// private void ClearSubscription() [instance] :354
void RelativeTransform::ClearSubscription()
{
    if (_subscription != NULL)
    {
        ::g::Fuse::ITransformMode::Unsubscribe(uInterface(uPtr(uAs<uObject*>(RelativeTo(), ::TYPES[61/*Fuse.ITransformMode*/])), ::TYPES[61/*Fuse.ITransformMode*/]), (uObject*)this, _subscription);
        _subscription = NULL;
    }
}

// private void OnRootingCompleted() [instance] :373
void RelativeTransform::OnRootingCompleted()
{
    CheckSubscription(false);
}

// public Fuse.Visual get_RelativeNode() [instance] :306
::g::Fuse::Visual* RelativeTransform::RelativeNode()
{
    ::g::Fuse::Visual* ind1;
    ind1 = _relativeNode;
    return (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)Parent();
}

// public void set_RelativeNode(Fuse.Visual value) [instance] :307
void RelativeTransform::RelativeNode(::g::Fuse::Visual* value)
{
    if (_relativeNode == value)
        return;

    _relativeNode = value;
    CheckSubscription(false);
}

// public TransformMode get_RelativeTo() [instance] :320
uObject* RelativeTransform::RelativeTo()
{
    return _relativeTo;
}

// public void set_RelativeTo(TransformMode value) [instance] :321
void RelativeTransform::RelativeTo(uObject* value)
{
    if (_relativeTo == value)
        return;

    ClearSubscription();
    _relativeTo = value;
    CheckSubscription(false);
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/DrawContext.uno
// --------------------------------------------------------------

// internal sealed class RenderTargetEntry :11
// {
static void RenderTargetEntry_build(uType* type)
{
    type->SetFields(0,
        ::g::OpenGL::GLFramebufferHandle_typeof(), offsetof(RenderTargetEntry, GLFramebuffer), 0,
        ::g::Uno::Int4_typeof(), offsetof(RenderTargetEntry, GLScissor), 0,
        ::g::Uno::Int2_typeof(), offsetof(RenderTargetEntry, GLViewportPixelSize), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(RenderTargetEntry, RenderTarget), 0);
}

uType* RenderTargetEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(RenderTargetEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.RenderTargetEntry", options);
    type->fp_build_ = RenderTargetEntry_build;
    return type;
}

// public extern RenderTargetEntry(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) :18
void RenderTargetEntry__ctor__fn(RenderTargetEntry* __this, ::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glScissor, uint32_t* handle)
{
    __this->ctor_(rt, *viewportPixelSize, *glScissor, *handle);
}

// public extern RenderTargetEntry New(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) :18
void RenderTargetEntry__New1_fn(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glScissor, uint32_t* handle, RenderTargetEntry** __retval)
{
    *__retval = RenderTargetEntry::New1(rt, *viewportPixelSize, *glScissor, *handle);
}

// public extern RenderTargetEntry(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) [instance] :18
void RenderTargetEntry::ctor_(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glScissor, uint32_t handle)
{
    RenderTarget = rt;
    GLViewportPixelSize = viewportPixelSize;
    GLScissor = glScissor;
    GLFramebuffer = handle;
}

// public extern RenderTargetEntry New(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) [static] :18
RenderTargetEntry* RenderTargetEntry::New1(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glScissor, uint32_t handle)
{
    RenderTargetEntry* obj1 = (RenderTargetEntry*)uNew(RenderTargetEntry_typeof());
    obj1->ctor_(rt, viewportPixelSize, glScissor, handle);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Layout.uno
// ----------------------------------------------------------------

// public sealed class RequestBringIntoViewArgs :74
// {
static void RequestBringIntoViewArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(RequestBringIntoViewArgs, _Visual), 0);
}

uType* RequestBringIntoViewArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(RequestBringIntoViewArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.RequestBringIntoViewArgs", options);
    type->fp_build_ = RequestBringIntoViewArgs_build;
    return type;
}

// public RequestBringIntoViewArgs(Fuse.Visual elm) :77
void RequestBringIntoViewArgs__ctor_1_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Visual* elm)
{
    __this->ctor_1(elm);
}

// public RequestBringIntoViewArgs New(Fuse.Visual elm) :77
void RequestBringIntoViewArgs__New2_fn(::g::Fuse::Visual* elm, RequestBringIntoViewArgs** __retval)
{
    *__retval = RequestBringIntoViewArgs::New2(elm);
}

// public generated Fuse.Visual get_Visual() :76
void RequestBringIntoViewArgs__get_Visual_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :76
void RequestBringIntoViewArgs__set_Visual_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public RequestBringIntoViewArgs(Fuse.Visual elm) [instance] :77
void RequestBringIntoViewArgs::ctor_1(::g::Fuse::Visual* elm)
{
    ctor_();
    Visual(elm);
}

// public generated Fuse.Visual get_Visual() [instance] :76
::g::Fuse::Visual* RequestBringIntoViewArgs::Visual()
{
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :76
void RequestBringIntoViewArgs::Visual(::g::Fuse::Visual* value)
{
    _Visual = value;
}

// public RequestBringIntoViewArgs New(Fuse.Visual elm) [static] :77
RequestBringIntoViewArgs* RequestBringIntoViewArgs::New2(::g::Fuse::Visual* elm)
{
    RequestBringIntoViewArgs* obj1 = (RequestBringIntoViewArgs*)uNew(RequestBringIntoViewArgs_typeof());
    obj1->ctor_1(elm);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Layout.uno
// ----------------------------------------------------------------

// public delegate void RequestBringIntoViewHandler(object sender, Fuse.RequestBringIntoViewArgs args) :83
uDelegateType* RequestBringIntoViewHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.RequestBringIntoViewHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::RequestBringIntoViewArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Node.Rooting.uno
// ---------------------------------------------------------------

// internal enum RootStage :7
uEnumType* RootStage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.RootStage", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Unrooted", 0LL,
        "Started", 1LL,
        "Completed", 2LL,
        "Unrooting", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.iOS/1.3.1/iOSApp.uno
// -------------------------------------------------------

// private sealed class App.RootViewHost :15
// {
static void App__RootViewHost_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::INativeViewRoot_typeof(), offsetof(App__RootViewHost_type, interface0));
}

App__RootViewHost_type* App__RootViewHost_typeof()
{
    static uSStrong<App__RootViewHost_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(App__RootViewHost);
    options.TypeSize = sizeof(App__RootViewHost_type);
    type = (App__RootViewHost_type*)uClassType::New("Fuse.App.RootViewHost", options);
    type->fp_build_ = App__RootViewHost_build;
    type->fp_ctor_ = (void*)App__RootViewHost__New1_fn;
    type->interface0.fp_Add = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))App__RootViewHost__FuseControlsINativeViewRootAdd_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))App__RootViewHost__FuseControlsINativeViewRootRemove_fn;
    return type;
}

// public generated RootViewHost() :15
void App__RootViewHost__ctor__fn(App__RootViewHost* __this)
{
    __this->ctor_();
}

// private void Fuse.Controls.INativeViewRoot.Add(Fuse.Controls.Native.ViewHandle handle) :17
void App__RootViewHost__FuseControlsINativeViewRootAdd_fn(App__RootViewHost* __this, ::g::Fuse::Controls::Native::ViewHandle* handle)
{
    ::g::Fuse::AppRoot::SetRootView(handle);
}

// private void Fuse.Controls.INativeViewRoot.Remove(Fuse.Controls.Native.ViewHandle handle) :18
void App__RootViewHost__FuseControlsINativeViewRootRemove_fn(App__RootViewHost* __this, ::g::Fuse::Controls::Native::ViewHandle* handle)
{
    ::g::Fuse::AppRoot::ClearRoot(handle);
}

// public generated RootViewHost New() :15
void App__RootViewHost__New1_fn(App__RootViewHost** __retval)
{
    *__retval = App__RootViewHost::New1();
}

// public generated RootViewHost() [instance] :15
void App__RootViewHost::ctor_()
{
}

// public generated RootViewHost New() [static] :15
App__RootViewHost* App__RootViewHost::New1()
{
    App__RootViewHost* obj1 = (App__RootViewHost*)uNew(App__RootViewHost_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/RootViewport.uno
// ---------------------------------------------------------------

// public class RootViewport :33
// {
static void RootViewport_build(uType* type)
{
    ::TYPES[62] = ::g::Fuse::IFrame_typeof();
    ::TYPES[24] = ::g::Uno::EventHandler_typeof();
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[63] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[64] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[65] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::AppBase_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RootViewport_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(RootViewport_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(RootViewport_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(RootViewport_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RootViewport_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RootViewport_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(RootViewport_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(RootViewport_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(RootViewport_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(RootViewport_type, interface9),
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(RootViewport_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(RootViewport_type, interface11),
        ::g::Fuse::IViewport_typeof(), offsetof(RootViewport_type, interface12),
        ::g::Uno::IDisposable_typeof(), offsetof(RootViewport_type, interface13),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(RootViewport_type, interface14));
    type->SetFields(65,
        ::TYPES[62/*Fuse.IFrame*/], offsetof(RootViewport, _frame), 0,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(RootViewport, _frustumViewport), 0,
        ::g::Uno::Float_typeof(), offsetof(RootViewport, _overridePixelsPerPoint), 0,
        ::g::Uno::Float2_typeof(), offsetof(RootViewport, _pixelSize), 0,
        ::g::Uno::Float_typeof(), offsetof(RootViewport, _pixelsPerOSPoint), 0,
        ::g::Uno::Float_typeof(), offsetof(RootViewport, _pixelsPerPoint), 0,
        ::g::Uno::Bool_typeof(), offsetof(RootViewport, _sizeOverridden), 0,
        ::g::Fuse::IFrustum_typeof(), offsetof(RootViewport, Frustum), 0,
        ::TYPES[65/*Uno.Action<float2>*/], offsetof(RootViewport, Resized1), 0);
}

RootViewport_type* RootViewport_typeof()
{
    static uSStrong<RootViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Visual_typeof();
    options.FieldCount = 74;
    options.InterfaceCount = 15;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RootViewport);
    options.TypeSize = sizeof(RootViewport_type);
    type = (RootViewport_type*)uClassType::New("Fuse.RootViewport", options);
    type->fp_build_ = RootViewport_build;
    type->fp_Draw = (void(*)(::g::Fuse::Visual*, ::g::Fuse::DrawContext*))RootViewport__Draw_fn;
    type->fp_get_VisualContext = (void(*)(::g::Fuse::Visual*, int*))RootViewport__get_VisualContext_fn;
    type->interface13.fp_Dispose = (void(*)(uObject*))RootViewport__UnoIDisposableDispose_fn;
    type->interface12.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Fuse::Ray*))RootViewport__PointToWorldRay_fn;
    type->interface12.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Fuse::Ray*, ::g::Fuse::Visual*, ::g::Fuse::Ray*))RootViewport__WorldToLocalRay_fn;
    type->interface14.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))RootViewport__get_PixelsPerPoint_fn;
    type->interface14.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))RootViewport__get_Size_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public extern RootViewport() :61
void RootViewport__ctor_3_fn(RootViewport* __this)
{
    __this->ctor_3();
}

// public extern RootViewport(Fuse.IFrame frame) :43
void RootViewport__ctor_4_fn(RootViewport* __this, uObject* frame)
{
    __this->ctor_4(frame);
}

// public override sealed void Draw(Fuse.DrawContext dc) :99
void RootViewport__Draw_fn(RootViewport* __this, ::g::Fuse::DrawContext* dc)
{
    for (::g::Fuse::Visual* v = (::g::Fuse::Visual*)__this->FirstChild(::TYPES[63/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (::g::Fuse::Visual*)uPtr(v)->NextSibling(::TYPES[64/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
        uPtr(v)->Draw(dc);
}

// private void EstablishSize() :148
void RootViewport__EstablishSize_fn(RootViewport* __this)
{
    __this->EstablishSize();
}

// private extern void EstablishSizeInternals() :211
void RootViewport__EstablishSizeInternals_fn(RootViewport* __this)
{
    __this->EstablishSizeInternals();
}

// internal void OnResized(object s, object a) :129
void RootViewport__OnResized_fn(RootViewport* __this, uObject* s, uObject* a)
{
    __this->OnResized(s, a);
}

// public float2 get_PixelSize() :250
void RootViewport__get_PixelSize_fn(RootViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// public float get_PixelsPerPoint() :237
void RootViewport__get_PixelsPerPoint_fn(RootViewport* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public Fuse.Ray PointToWorldRay(float2 pixelPos) :267
void RootViewport__PointToWorldRay_fn(RootViewport* __this, ::g::Uno::Float2* pixelPos, ::g::Fuse::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pixelPos);
}

// public generated void add_Resized(Uno.Action<float2> value) :37
void RootViewport__add_Resized_fn(RootViewport* __this, uDelegate* value)
{
    __this->add_Resized(value);
}

// public generated void remove_Resized(Uno.Action<float2> value) :37
void RootViewport__remove_Resized_fn(RootViewport* __this, uDelegate* value)
{
    __this->remove_Resized(value);
}

// public float2 get_Size() :244
void RootViewport__get_Size_fn(RootViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// private void Uno.IDisposable.Dispose() :88
void RootViewport__UnoIDisposableDispose_fn(RootViewport* __this)
{
    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)::g::Fuse::Visual__PerformLayout_fn, __this), 1);
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(__this->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]));
}

// public override sealed Fuse.VisualContext get_VisualContext() :96
void RootViewport__get_VisualContext_fn(RootViewport* __this, int* __retval)
{
    return *__retval = 1, void();
}

// public Fuse.Ray WorldToLocalRay(Fuse.IViewport world, Fuse.Ray worldRay, Fuse.Visual where) :271
void RootViewport__WorldToLocalRay_fn(RootViewport* __this, uObject* world, ::g::Fuse::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Fuse::Ray* __retval)
{
    *__retval = __this->WorldToLocalRay(world, *worldRay, where);
}

// public extern RootViewport() [instance] :61
void RootViewport::ctor_3()
{
    Frustum = (uObject*)::g::Fuse::OrthographicFrustum::New1();
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    ctor_4((uObject*)::g::Fuse::SystemUIFrame::New1());
}

// public extern RootViewport(Fuse.IFrame frame) [instance] :43
void RootViewport::ctor_4(uObject* frame)
{
    Frustum = (uObject*)::g::Fuse::OrthographicFrustum::New1();
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    ctor_2();
    _frame = frame;
    ::g::Fuse::IFrame::add_FrameChanged(uInterface(uPtr(_frame), ::TYPES[62/*Fuse.IFrame*/]), uDelegate::New(::TYPES[24/*Uno.EventHandler*/], (void*)RootViewport__OnResized_fn, this));
    _overridePixelsPerPoint = 0.0f;
    EstablishSize();
    uPtr(_frustumViewport)->Update((uObject*)this, Frustum);
    RootInternal(NULL);
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)::g::Fuse::Visual__PerformLayout_fn, this), 1);
}

// private void EstablishSize() [instance] :148
void RootViewport::EstablishSize()
{
    if (!_sizeOverridden)
        EstablishSizeInternals();

    if (::g::Uno::Delegate::op_Inequality(Resized1, NULL))
        uPtr(Resized1)->InvokeVoid(uCRef(_pixelSize));
}

// private extern void EstablishSizeInternals() [instance] :211
void RootViewport::EstablishSizeInternals()
{
    if (::g::Fuse::AppBase::Current2() == NULL)
    {
        _pixelsPerPoint = 1.0f;
        _pixelsPerOSPoint = 1.0f;
        return;
    }

    _pixelSize = ::g::Fuse::IFrame::Size(uInterface(uPtr(_frame), ::TYPES[62/*Fuse.IFrame*/]));
    _pixelsPerOSPoint = uPtr(::g::Uno::Platform::Displays::MainDisplay())->Density();
    _pixelsPerPoint = _pixelsPerOSPoint;
}

// internal void OnResized(object s, object a) [instance] :129
void RootViewport::OnResized(uObject* s, uObject* a)
{
    EstablishSize();
    uPtr(_frustumViewport)->Update((uObject*)this, Frustum);
}

// public float2 get_PixelSize() [instance] :250
::g::Uno::Float2 RootViewport::PixelSize()
{
    return _pixelSize;
}

// public float get_PixelsPerPoint() [instance] :237
float RootViewport::PixelsPerPoint()
{
    return (_overridePixelsPerPoint > 0.0f) ? _overridePixelsPerPoint : _pixelsPerPoint;
}

// public Fuse.Ray PointToWorldRay(float2 pixelPos) [instance] :267
::g::Fuse::Ray RootViewport::PointToWorldRay(::g::Uno::Float2 pixelPos)
{
    return ::g::Fuse::ViewportHelpers::PointToWorldRay((uObject*)this, uPtr(_frustumViewport)->ViewProjectionTransformInverse, pixelPos);
}

// public generated void add_Resized(Uno.Action<float2> value) [instance] :37
void RootViewport::add_Resized(uDelegate* value)
{
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Resized1, value), ::TYPES[65/*Uno.Action<float2>*/]);
}

// public generated void remove_Resized(Uno.Action<float2> value) [instance] :37
void RootViewport::remove_Resized(uDelegate* value)
{
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Resized1, value), ::TYPES[65/*Uno.Action<float2>*/]);
}

// public float2 get_Size() [instance] :244
::g::Uno::Float2 RootViewport::Size()
{
    return ::g::Uno::Float2__op_Division1(PixelSize(), PixelsPerPoint());
}

// public Fuse.Ray WorldToLocalRay(Fuse.IViewport world, Fuse.Ray worldRay, Fuse.Visual where) [instance] :271
::g::Fuse::Ray RootViewport::WorldToLocalRay(uObject* world, ::g::Fuse::Ray worldRay, ::g::Fuse::Visual* where)
{
    return ::g::Fuse::ViewportHelpers::WorldToLocalRay((uObject*)this, world, worldRay, where);
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Transform.uno
// ------------------------------------------------------------

// public sealed class Rotation :59
// {
static void Rotation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Transform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Transform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Transform_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface5));
    type->SetFields(16,
        ::g::Uno::Float3_typeof(), offsetof(Rotation, _euler), 0);
}

::g::Fuse::Transform_type* Rotation_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 17;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Rotation);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Rotation", options);
    type->fp_build_ = Rotation_build;
    type->fp_ctor_ = (void*)Rotation__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Rotation__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Rotation__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Rotation__PrependTo_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Rotation() :59
void Rotation__ctor_3_fn(Rotation* __this)
{
    __this->ctor_3();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :160
void Rotation__AppendTo_fn(Rotation* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    float weight_ = *weight;

    if (__this->HasRotation())
        uPtr(m)->AppendRotationQuaternion(::g::Uno::Quaternion::FromEulerAngle1(::g::Uno::Float3__op_Multiply1(__this->_euler, weight_)));
}

// public float get_Degrees() :99
void Rotation__get_Degrees_fn(Rotation* __this, float* __retval)
{
    *__retval = __this->Degrees();
}

// public void set_Degrees(float value) :100
void Rotation__set_Degrees_fn(Rotation* __this, float* value)
{
    __this->Degrees(*value);
}

// public float get_DegreesZ() :108
void Rotation__get_DegreesZ_fn(Rotation* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :109
void Rotation__set_DegreesZ_fn(Rotation* __this, float* value)
{
    __this->DegreesZ(*value);
}

// public float3 get_EulerAngle() :67
void Rotation__get_EulerAngle_fn(Rotation* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->EulerAngle();
}

// public void set_EulerAngle(float3 value) :68
void Rotation__set_EulerAngle_fn(Rotation* __this, ::g::Uno::Float3* value)
{
    __this->EulerAngle(*value);
}

// private bool get_HasRotation() :153
void Rotation__get_HasRotation_fn(Rotation* __this, bool* __retval)
{
    *__retval = __this->HasRotation();
}

// public override sealed bool get_IsFlat() :174
void Rotation__get_IsFlat_fn(Rotation* __this, bool* __retval)
{
    return *__retval = (::g::Uno::Math::Abs1(__this->_euler.X) < 1e-05f) && (::g::Uno::Math::Abs1(__this->_euler.Y) < 1e-05f), void();
}

// public generated Rotation New() :59
void Rotation__New2_fn(Rotation** __retval)
{
    *__retval = Rotation::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :166
void Rotation__PrependTo_fn(Rotation* __this, ::g::Fuse::FastMatrix* m)
{
    if (__this->HasRotation())
        uPtr(m)->PrependRotationQuaternion(::g::Uno::Quaternion::FromEulerAngle1(__this->_euler));
}

// public generated Rotation() [instance] :59
void Rotation::ctor_3()
{
    ctor_2();
}

// public float get_Degrees() [instance] :99
float Rotation::Degrees()
{
    return DegreesZ();
}

// public void set_Degrees(float value) [instance] :100
void Rotation::Degrees(float value)
{
    DegreesZ(value);
}

// public float get_DegreesZ() [instance] :108
float Rotation::DegreesZ()
{
    return ::g::Uno::Math::RadiansToDegrees1(_euler.Z);
}

// public void set_DegreesZ(float value) [instance] :109
void Rotation::DegreesZ(float value)
{
    float r = ::g::Uno::Math::DegreesToRadians1(value);

    if (_euler.Z != r)
    {
        _euler.Z = r;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float3 get_EulerAngle() [instance] :67
::g::Uno::Float3 Rotation::EulerAngle()
{
    return _euler;
}

// public void set_EulerAngle(float3 value) [instance] :68
void Rotation::EulerAngle(::g::Uno::Float3 value)
{
    if (::g::Uno::Float3__op_Inequality(_euler, value))
    {
        _euler = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// private bool get_HasRotation() [instance] :153
bool Rotation::HasRotation()
{
    return ((::g::Uno::Math::Abs1(_euler.X) + ::g::Uno::Math::Abs1(_euler.Y)) + ::g::Uno::Math::Abs1(_euler.Z)) > 1e-05f;
}

// public generated Rotation New() [static] :59
Rotation* Rotation::New2()
{
    Rotation* obj1 = (Rotation*)uNew(Rotation_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Children.SafeIterator.uno
// -------------------------------------------------------------------------------

// private sealed class Visual.SafeIterator :53
// {
static void Visual__SafeIterator_build(uType* type)
{
    ::TYPES[66] = ::g::Fuse::Node_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Visual__SafeIterator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Visual__SafeIterator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Visual__SafeIterator_type, interface2));
    type->SetFields(0,
        ::TYPES[66/*Fuse.Node[]*/], offsetof(Visual__SafeIterator, _array), 0,
        ::g::Fuse::Node_typeof(), offsetof(Visual__SafeIterator, _current), 0,
        type, offsetof(Visual__SafeIterator, _nextIterator), 0,
        ::g::Uno::Int_typeof(), offsetof(Visual__SafeIterator, _pos), 0,
        ::g::Uno::Bool_typeof(), offsetof(Visual__SafeIterator, _reachedEnd), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Visual__SafeIterator, _v), 0);
}

Visual__SafeIterator_type* Visual__SafeIterator_typeof()
{
    static uSStrong<Visual__SafeIterator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Visual__SafeIterator);
    options.TypeSize = sizeof(Visual__SafeIterator_type);
    type = (Visual__SafeIterator_type*)uClassType::New("Fuse.Visual.SafeIterator", options);
    type->fp_build_ = Visual__SafeIterator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))Visual__SafeIterator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Visual__SafeIterator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))Visual__SafeIterator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))Visual__SafeIterator__MoveNext_fn;
    return type;
}

// internal SafeIterator(Fuse.Visual v) :61
void Visual__SafeIterator__ctor__fn(Visual__SafeIterator* __this, ::g::Fuse::Visual* v)
{
    __this->ctor_(v);
}

// private void AddToIteratorList() :122
void Visual__SafeIterator__AddToIteratorList_fn(Visual__SafeIterator* __this)
{
    __this->AddToIteratorList();
}

// public Fuse.Node get_Current() :69
void Visual__SafeIterator__get_Current_fn(Visual__SafeIterator* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Current();
}

// public void Dispose() :107
void Visual__SafeIterator__Dispose_fn(Visual__SafeIterator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :85
void Visual__SafeIterator__MoveNext_fn(Visual__SafeIterator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// private bool get_MultipleIterators() :145
void Visual__SafeIterator__get_MultipleIterators_fn(Visual__SafeIterator* __this, bool* __retval)
{
    *__retval = __this->MultipleIterators();
}

// internal SafeIterator New(Fuse.Visual v) :61
void Visual__SafeIterator__New1_fn(::g::Fuse::Visual* v, Visual__SafeIterator** __retval)
{
    *__retval = Visual__SafeIterator::New1(v);
}

// private void RemoveFromIteratorList() :128
void Visual__SafeIterator__RemoveFromIteratorList_fn(Visual__SafeIterator* __this)
{
    __this->RemoveFromIteratorList();
}

// public void Reset() :114
void Visual__SafeIterator__Reset_fn(Visual__SafeIterator* __this)
{
    __this->Reset();
}

// internal void SecureCopy() :147
void Visual__SafeIterator__SecureCopy_fn(Visual__SafeIterator* __this)
{
    __this->SecureCopy();
}

// internal SafeIterator(Fuse.Visual v) [instance] :61
void Visual__SafeIterator::ctor_(::g::Fuse::Visual* v)
{
    _pos = -1;
    _v = v;
    AddToIteratorList();
}

// private void AddToIteratorList() [instance] :122
void Visual__SafeIterator::AddToIteratorList()
{
    _nextIterator = uPtr(_v)->_safeIterator;
    uPtr(_v)->_safeIterator = this;
}

// public Fuse.Node get_Current() [instance] :69
::g::Fuse::Node* Visual__SafeIterator::Current()
{
    if (_array != NULL)
    {
        if (uPtr(_array)->Strong< ::g::Fuse::Node*>(_pos) == NULL)
            U_THROW(::g::Uno::Exception::New1());

        return uPtr(_array)->Strong< ::g::Fuse::Node*>(_pos);
    }
    else
    {
        if (_current == NULL)
            U_THROW(::g::Uno::Exception::New1());

        return _current;
    }
}

// public void Dispose() [instance] :107
void Visual__SafeIterator::Dispose()
{
    Reset();
    RemoveFromIteratorList();
    _v = NULL;
}

// public bool MoveNext() [instance] :85
bool Visual__SafeIterator::MoveNext()
{
    if (_reachedEnd)
        return false;

    if (_pos == -1)
        _array = uPtr(_v)->Children_cachedArray;

    _pos++;

    if (_array != NULL)
        return _pos < uPtr(_array)->Length();

    if (_current == NULL)
        _current = uPtr(_v)->_firstChild;
    else
        _current = uPtr(_current)->_nextSibling;

    _reachedEnd = (_current == NULL);
    return !_reachedEnd;
}

// private bool get_MultipleIterators() [instance] :145
bool Visual__SafeIterator::MultipleIterators()
{
    return uPtr(uPtr(_v)->_safeIterator)->_nextIterator != NULL;
}

// private void RemoveFromIteratorList() [instance] :128
void Visual__SafeIterator::RemoveFromIteratorList()
{
    if (uPtr(_v)->_safeIterator == this)
        uPtr(_v)->_safeIterator = _nextIterator;
    else

        for (Visual__SafeIterator* si = uPtr(_v)->_safeIterator; si != NULL; si = uPtr(si)->_nextIterator)
            if (uPtr(si)->_nextIterator == this)
            {
                uPtr(si)->_nextIterator = _nextIterator;
                return;
            }
}

// public void Reset() [instance] :114
void Visual__SafeIterator::Reset()
{
    _pos = -1;
    _current = NULL;
    _array = NULL;
    _reachedEnd = false;
}

// internal void SecureCopy() [instance] :147
void Visual__SafeIterator::SecureCopy()
{
    if (_array == NULL)
    {
        if ((uPtr(_v)->Children_cachedArray != NULL) || MultipleIterators())
            _array = uPtr(_v)->Children_GetCachedArray();
        else
        {
            _array = uArray::New(::TYPES[66/*Fuse.Node[]*/], uPtr(_v)->_childCount - _pos);
            int i = 0;

            while (_current != NULL)
            {
                uPtr(_array)->Strong< ::g::Fuse::Node*>(i++) = _current;
                _current = uPtr(_current)->_nextSibling;
            }

            if ((_pos != -1) && (uPtr(_array)->Length() > 0))
                _pos = 0;
        }
    }

    if (_nextIterator != NULL)
        uPtr(_nextIterator)->SecureCopy();

    RemoveFromIteratorList();
}

// internal SafeIterator New(Fuse.Visual v) [static] :61
Visual__SafeIterator* Visual__SafeIterator::New1(::g::Fuse::Visual* v)
{
    Visual__SafeIterator* obj1 = (Visual__SafeIterator*)uNew(Visual__SafeIterator_typeof());
    obj1->ctor_(v);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Scaling.uno
// ----------------------------------------------------------

// public sealed class Scaling :43
// {
static void Scaling_build(uType* type)
{
    ::TYPES[67] = ::g::Fuse::IScalingMode_typeof();
    type->SetBase(::g::Fuse::RelativeTransform_typeof()->MakeType(::g::Fuse::IScalingMode_typeof(), NULL));
    type->SetDependencies(
        ::g::Fuse::ScalingModes_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RelativeTransform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RelativeTransform_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RelativeTransform_type, interface5),
        ::g::Fuse::ITransformRelative_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface6));
    type->SetFields(20,
        ::g::Uno::Float3_typeof(), offsetof(Scaling, _vector), 0);
}

::g::Fuse::RelativeTransform_type* Scaling_typeof()
{
    static uSStrong< ::g::Fuse::RelativeTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::RelativeTransform_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Scaling);
    options.TypeSize = sizeof(::g::Fuse::RelativeTransform_type);
    type = (::g::Fuse::RelativeTransform_type*)uClassType::New("Fuse.Scaling", options);
    type->fp_build_ = Scaling_build;
    type->fp_ctor_ = (void*)Scaling__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Scaling__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Scaling__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Scaling__PrependTo_fn;
    type->interface6.fp_OnTransformChanged = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::RelativeTransform__FuseITransformRelativeOnTransformChanged_fn;
    type->interface6.fp_get_Target = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::RelativeTransform__FuseITransformRelativeget_Target_fn;
    type->interface6.fp_get_RelativeNode = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::RelativeTransform__FuseITransformRelativeget_RelativeNode_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Scaling() :45
void Scaling__ctor_4_fn(Scaling* __this)
{
    __this->ctor_4();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :123
void Scaling__AppendTo_fn(Scaling* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    float weight_ = *weight;
    ::g::Uno::Float3 v = __this->EffectiveVector();

    if (!__this->IsIdentity(v))
        uPtr(m)->AppendScale1(::g::Uno::Math::Lerp4(::g::Uno::Float3__New1(1.0f), v, weight_));
}

// private float3 get_EffectiveVector() :109
void Scaling__get_EffectiveVector_fn(Scaling* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->EffectiveVector();
}

// public override sealed bool get_IsFlat() :139
void Scaling__get_IsFlat_fn(Scaling* __this, bool* __retval)
{
    return *__retval = true, void();
}

// private bool IsIdentity(float3 v) :115
void Scaling__IsIdentity_fn(Scaling* __this, ::g::Uno::Float3* v, bool* __retval)
{
    *__retval = __this->IsIdentity(*v);
}

// public Scaling New() :45
void Scaling__New2_fn(Scaling** __retval)
{
    *__retval = Scaling::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :130
void Scaling__PrependTo_fn(Scaling* __this, ::g::Fuse::FastMatrix* m)
{
    ::g::Uno::Float3 v = __this->EffectiveVector();

    if (!__this->IsIdentity(v))
        uPtr(m)->PrependScale1(v);
}

// public float3 get_Vector() :75
void Scaling__get_Vector_fn(Scaling* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float3 value) :76
void Scaling__set_Vector_fn(Scaling* __this, ::g::Uno::Float3* value)
{
    __this->Vector(*value);
}

// public Scaling() [instance] :45
void Scaling::ctor_4()
{
    _vector = ::g::Uno::Float3__New1(1.0f);
    ctor_3(::g::Fuse::ScalingModes::Identity_);
}

// private float3 get_EffectiveVector() [instance] :109
::g::Uno::Float3 Scaling::EffectiveVector()
{
    return ::g::Fuse::IScalingMode::GetScaleVector(uInterface(uPtr((uObject*)RelativeTo()), ::TYPES[67/*Fuse.IScalingMode*/]), this);
}

// private bool IsIdentity(float3 v) [instance] :115
bool Scaling::IsIdentity(::g::Uno::Float3 v)
{
    float zeroTolerance = 1e-05f;
    return ((::g::Uno::Math::Abs1(v.X - 1.0f) < 1e-05f) && (::g::Uno::Math::Abs1(v.Y - 1.0f) < 1e-05f)) && (::g::Uno::Math::Abs1(v.Z - 1.0f) < 1e-05f);
}

// public float3 get_Vector() [instance] :75
::g::Uno::Float3 Scaling::Vector()
{
    return _vector;
}

// public void set_Vector(float3 value) [instance] :76
void Scaling::Vector(::g::Uno::Float3 value)
{
    if (::g::Uno::Float3__op_Inequality(_vector, value))
    {
        _vector = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public Scaling New() [static] :45
Scaling* Scaling::New2()
{
    Scaling* obj1 = (Scaling*)uNew(Scaling_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Scaling.uno
// ----------------------------------------------------------

// public static class ScalingModes :11
// {
// static generated ScalingModes() :11
static void ScalingModes__cctor__fn(uType* __type)
{
    ScalingModes::Identity_ = (uObject*)ScalingModes__IdentityMode::New1();
}

static void ScalingModes_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&ScalingModes::Identity_, uFieldFlagsStatic);
}

uClassType* ScalingModes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.ScalingModes", options);
    type->fp_build_ = ScalingModes_build;
    type->fp_cctor_ = ScalingModes__cctor__fn;
    return type;
}

uSStrong<uObject*> ScalingModes::Identity_;
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/iOSDevice.uno
// -------------------------------------------------------------

// public enum iOSDevice.ScreenOrientation :28
uEnumType* iOSDevice__ScreenOrientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.iOSDevice.ScreenOrientation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Portrait", 0LL,
        "Landscape", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Transform.uno
// ------------------------------------------------------------

// public sealed class Shear :184
// {
static void Shear_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Transform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Transform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Transform_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface5));
    type->SetFields(16,
        ::g::Uno::Float2_typeof(), offsetof(Shear, _vector), 0);
}

::g::Fuse::Transform_type* Shear_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 17;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Shear);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Shear", options);
    type->fp_build_ = Shear_build;
    type->fp_ctor_ = (void*)Shear__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Shear__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Shear__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Shear__PrependTo_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Shear() :184
void Shear__ctor_3_fn(Shear* __this)
{
    __this->ctor_3();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :242
void Shear__AppendTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    float weight_ = *weight;
    ::g::Uno::Float2 v = ::g::Uno::Float2__op_Multiply1(__this->Vector(), weight_);
    uPtr(m)->AppendShear(v.X, v.Y);
}

// public override sealed bool get_IsFlat() :256
void Shear__get_IsFlat_fn(Shear* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public generated Shear New() :184
void Shear__New2_fn(Shear** __retval)
{
    *__retval = Shear::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :248
void Shear__PrependTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m)
{
    ::g::Uno::Float2 v = __this->Vector();
    uPtr(m)->PrependShear(v.X, v.Y);
}

// public float2 get_Vector() :190
void Shear__get_Vector_fn(Shear* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float2 value) :191
void Shear__set_Vector_fn(Shear* __this, ::g::Uno::Float2* value)
{
    __this->Vector(*value);
}

// public generated Shear() [instance] :184
void Shear::ctor_3()
{
    ctor_2();
}

// public float2 get_Vector() [instance] :190
::g::Uno::Float2 Shear::Vector()
{
    return _vector;
}

// public void set_Vector(float2 value) [instance] :191
void Shear::Vector(::g::Uno::Float2 value)
{
    if (::g::Uno::Float2__op_Inequality(_vector, value))
    {
        _vector = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public generated Shear New() [static] :184
Shear* Shear::New2()
{
    Shear* obj1 = (Shear*)uNew(Shear_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Marshal.Convert.uno
// --------------------------------------------------------------------

// private sealed class Marshal.SingleArray :15
// {
static void Marshal__SingleArray_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(Marshal__SingleArray_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(Marshal__SingleArray, _obj), 0);
}

Marshal__SingleArray_type* Marshal__SingleArray_typeof()
{
    static uSStrong<Marshal__SingleArray_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Marshal__SingleArray);
    options.TypeSize = sizeof(Marshal__SingleArray_type);
    type = (Marshal__SingleArray_type*)uClassType::New("Fuse.Marshal.SingleArray", options);
    type->fp_build_ = Marshal__SingleArray_build;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))Marshal__SingleArray__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))Marshal__SingleArray__get_Item_fn;
    return type;
}

// public SingleArray(object obj) :18
void Marshal__SingleArray__ctor__fn(Marshal__SingleArray* __this, uObject* obj)
{
    __this->ctor_(obj);
}

// public object get_Item(int index) :22
void Marshal__SingleArray__get_Item_fn(Marshal__SingleArray* __this, int* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// public int get_Length() :19
void Marshal__SingleArray__get_Length_fn(Marshal__SingleArray* __this, int* __retval)
{
    *__retval = __this->Length();
}

// public SingleArray New(object obj) :18
void Marshal__SingleArray__New1_fn(uObject* obj, Marshal__SingleArray** __retval)
{
    *__retval = Marshal__SingleArray::New1(obj);
}

// public SingleArray(object obj) [instance] :18
void Marshal__SingleArray::ctor_(uObject* obj)
{
    _obj = obj;
}

// public object get_Item(int index) [instance] :22
uObject* Marshal__SingleArray::Item(int index)
{
    if (index != 0)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    return _obj;
}

// public int get_Length() [instance] :19
int Marshal__SingleArray::Length()
{
    return 1;
}

// public SingleArray New(object obj) [static] :18
Marshal__SingleArray* Marshal__SingleArray::New1(uObject* obj)
{
    Marshal__SingleArray* obj1 = (Marshal__SingleArray*)uNew(Marshal__SingleArray_typeof());
    obj1->ctor_(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno
// -------------------------------------------------------------

// internal sealed class Size2Computer :95
// {
static void Size2Computer_build(uType* type)
{
    type->SetBase(::g::Fuse::Computer1_typeof()->MakeType(::g::Uno::UX::Size2_typeof(), NULL));
}

::g::Fuse::Computer1_type* Size2Computer_typeof()
{
    static uSStrong< ::g::Fuse::Computer1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer1_typeof();
    options.ObjectSize = sizeof(Size2Computer);
    options.TypeSize = sizeof(::g::Fuse::Computer1_type);
    type = (::g::Fuse::Computer1_type*)uClassType::New("Fuse.Size2Computer", options);
    type->fp_build_ = Size2Computer_build;
    type->fp_ctor_ = (void*)Size2Computer__New1_fn;
    type->fp_Add1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Size2Computer__Add1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Computer1*, uObject*, uTRef))Size2Computer__Convert_fn;
    type->fp_Divide1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Size2Computer__Divide1_fn;
    type->fp_EqualTo1 = (void(*)(::g::Fuse::Computer1*, void*, void*, bool*))Size2Computer__EqualTo1_fn;
    type->fp_Multiply1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Size2Computer__Multiply1_fn;
    type->fp_Subtract1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))Size2Computer__Subtract1_fn;
    return type;
}

// public generated Size2Computer() :95
void Size2Computer__ctor_2_fn(Size2Computer* __this)
{
    __this->ctor_2();
}

// public override sealed Uno.UX.Size2 Add(Uno.UX.Size2 a, Uno.UX.Size2 b) :98
void Size2Computer__Add1_fn(Size2Computer* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Addition(a_, b_), void();
}

// public override sealed Uno.UX.Size2 Convert(object obj) :97
void Size2Computer__Convert_fn(Size2Computer* __this, uObject* obj, ::g::Uno::UX::Size2* __retval)
{
    return *__retval = ::g::Fuse::Marshal::ToSize2(obj), void();
}

// public override sealed Uno.UX.Size2 Divide(Uno.UX.Size2 a, Uno.UX.Size2 b) :101
void Size2Computer__Divide1_fn(Size2Computer* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Division1(a_, b_), void();
}

// public override sealed bool EqualTo(Uno.UX.Size2 a, Uno.UX.Size2 b) :102
void Size2Computer__EqualTo1_fn(Size2Computer* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, bool* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Equality(a_, b_), void();
}

// public override sealed Uno.UX.Size2 Multiply(Uno.UX.Size2 a, Uno.UX.Size2 b) :100
void Size2Computer__Multiply1_fn(Size2Computer* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Multiply1(a_, b_), void();
}

// public generated Size2Computer New() :95
void Size2Computer__New1_fn(Size2Computer** __retval)
{
    *__retval = Size2Computer::New1();
}

// public override sealed Uno.UX.Size2 Subtract(Uno.UX.Size2 a, Uno.UX.Size2 b) :99
void Size2Computer__Subtract1_fn(Size2Computer* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Subtraction(a_, b_), void();
}

// public generated Size2Computer() [instance] :95
void Size2Computer::ctor_2()
{
    ctor_1();
}

// public generated Size2Computer New() [static] :95
Size2Computer* Size2Computer::New1()
{
    Size2Computer* obj1 = (Size2Computer*)uNew(Size2Computer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno
// -------------------------------------------------------------

// internal sealed class SizeComputer :79
// {
static void SizeComputer_build(uType* type)
{
    type->SetBase(::g::Fuse::Computer1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
}

::g::Fuse::Computer1_type* SizeComputer_typeof()
{
    static uSStrong< ::g::Fuse::Computer1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer1_typeof();
    options.ObjectSize = sizeof(SizeComputer);
    options.TypeSize = sizeof(::g::Fuse::Computer1_type);
    type = (::g::Fuse::Computer1_type*)uClassType::New("Fuse.SizeComputer", options);
    type->fp_build_ = SizeComputer_build;
    type->fp_ctor_ = (void*)SizeComputer__New1_fn;
    type->fp_Add1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))SizeComputer__Add1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Computer1*, uObject*, uTRef))SizeComputer__Convert_fn;
    type->fp_Divide1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))SizeComputer__Divide1_fn;
    type->fp_EqualTo1 = (void(*)(::g::Fuse::Computer1*, void*, void*, bool*))SizeComputer__EqualTo1_fn;
    type->fp_GreaterThan1 = (void(*)(::g::Fuse::Computer1*, void*, void*, bool*))SizeComputer__GreaterThan1_fn;
    type->fp_LessThan1 = (void(*)(::g::Fuse::Computer1*, void*, void*, bool*))SizeComputer__LessThan1_fn;
    type->fp_Multiply1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))SizeComputer__Multiply1_fn;
    type->fp_Subtract1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))SizeComputer__Subtract1_fn;
    return type;
}

// public generated SizeComputer() :79
void SizeComputer__ctor_2_fn(SizeComputer* __this)
{
    __this->ctor_2();
}

// public override sealed Uno.UX.Size Add(Uno.UX.Size a, Uno.UX.Size b) :82
void SizeComputer__Add1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Addition(a_, b_), void();
}

// public override sealed Uno.UX.Size Convert(object obj) :81
void SizeComputer__Convert_fn(SizeComputer* __this, uObject* obj, ::g::Uno::UX::Size* __retval)
{
    return *__retval = ::g::Fuse::Marshal::ToSize(obj), void();
}

// public override sealed Uno.UX.Size Divide(Uno.UX.Size a, Uno.UX.Size b) :85
void SizeComputer__Divide1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Division1(a_, b_), void();
}

// public override sealed bool EqualTo(Uno.UX.Size a, Uno.UX.Size b) :90
void SizeComputer__EqualTo1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, bool* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Equality(a_, b_), void();
}

// public override sealed bool GreaterThan(Uno.UX.Size a, Uno.UX.Size b) :88
void SizeComputer__GreaterThan1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, bool* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = a_.Value > b_.Value, void();
}

// public override sealed bool LessThan(Uno.UX.Size a, Uno.UX.Size b) :86
void SizeComputer__LessThan1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, bool* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = a_.Value < b_.Value, void();
}

// public override sealed Uno.UX.Size Multiply(Uno.UX.Size a, Uno.UX.Size b) :84
void SizeComputer__Multiply1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Multiply1(a_, b_), void();
}

// public generated SizeComputer New() :79
void SizeComputer__New1_fn(SizeComputer** __retval)
{
    *__retval = SizeComputer::New1();
}

// public override sealed Uno.UX.Size Subtract(Uno.UX.Size a, Uno.UX.Size b) :83
void SizeComputer__Subtract1_fn(SizeComputer* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Subtraction(a_, b_), void();
}

// public generated SizeComputer() [instance] :79
void SizeComputer::ctor_2()
{
    ctor_1();
}

// public generated SizeComputer New() [static] :79
SizeComputer* SizeComputer::New1()
{
    SizeComputer* obj1 = (SizeComputer*)uNew(SizeComputer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno
// --------------------------------------------------------------

// private class TranslationModes.SizeMode :75
// {
static void TranslationModes__SizeMode_build(uType* type)
{
    ::TYPES[57] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[58] = ::g::Fuse::ITransformRelative_typeof();
    ::TYPES[59] = ::g::Fuse::PlacedHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__SizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__SizeMode_type, interface1));
}

TranslationModes__SizeMode_type* TranslationModes__SizeMode_typeof()
{
    static uSStrong<TranslationModes__SizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TranslationModes__SizeMode);
    options.TypeSize = sizeof(TranslationModes__SizeMode_type);
    type = (TranslationModes__SizeMode_type*)uClassType::New("Fuse.TranslationModes.SizeMode", options);
    type->fp_build_ = TranslationModes__SizeMode_build;
    type->fp_ctor_ = (void*)TranslationModes__SizeMode__New1_fn;
    type->fp_GetAbsVector = TranslationModes__SizeMode__GetAbsVector_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__SizeMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TranslationModes__SizeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))TranslationModes__SizeMode__Unsubscribe_fn;
    return type;
}

// public generated SizeMode() :75
void TranslationModes__SizeMode__ctor__fn(TranslationModes__SizeMode* __this)
{
    __this->ctor_();
}

// public virtual float3 GetAbsVector(Fuse.Translation t) :77
void TranslationModes__SizeMode__GetAbsVector_fn(TranslationModes__SizeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__op_Multiply2(::g::Fuse::TranslationModes::SizeOf(uPtr(t)->RelativeNode()), uPtr(t)->Vector()), void();
}

// public generated SizeMode New() :75
void TranslationModes__SizeMode__New1_fn(TranslationModes__SizeMode** __retval)
{
    *__retval = TranslationModes__SizeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :78
void TranslationModes__SizeMode__Subscribe_fn(TranslationModes__SizeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :85
void TranslationModes__SizeMode__Unsubscribe_fn(TranslationModes__SizeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated SizeMode() [instance] :75
void TranslationModes__SizeMode::ctor_()
{
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :78
uObject* TranslationModes__SizeMode::Subscribe(uObject* transform)
{
    uObject* n = uAs<uObject*>(::g::Fuse::ITransformRelative::RelativeNode(uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/])), ::TYPES[57/*Fuse.IActualPlacement*/]);

    if (n != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(n), ::TYPES[57/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[59/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));

    return ::g::Fuse::ITransformRelative::RelativeNode(uInterface(transform, ::TYPES[58/*Fuse.ITransformRelative*/]));
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :85
void TranslationModes__SizeMode::Unsubscribe(uObject* transform, uObject* sub)
{
    ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(uAs<uObject*>(sub, ::TYPES[57/*Fuse.IActualPlacement*/])), ::TYPES[57/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[59/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[58/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));
}

// public generated SizeMode New() [static] :75
TranslationModes__SizeMode* TranslationModes__SizeMode::New1()
{
    TranslationModes__SizeMode* obj1 = (TranslationModes__SizeMode*)uNew(TranslationModes__SizeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/UpdateManager.uno
// -----------------------------------------------------------------

// internal sealed class Stage :81
// {
static void Stage_build(uType* type)
{
    ::TYPES[68] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof(), NULL);
    ::TYPES[69] = ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Fuse::UpdateAction_typeof(), NULL)->Array();
    ::TYPES[70] = ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Fuse::UpdateAction_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(Stage, HasListenersRemoved), 0,
        ::TYPES[68/*Uno.Collections.List<Fuse.UpdateListener>*/], offsetof(Stage, Listeners), 0,
        ::TYPES[68/*Uno.Collections.List<Fuse.UpdateListener>*/], offsetof(Stage, Onces), 0,
        ::TYPES[68/*Uno.Collections.List<Fuse.UpdateListener>*/], offsetof(Stage, OncesPending), 0,
        ::TYPES[69/*Uno.Collections.Queue<Fuse.UpdateAction>[]*/], offsetof(Stage, PhaseDeferredActions), 0,
        ::g::Fuse::UpdateStage_typeof(), offsetof(Stage, UpdateStage), 0);
}

uType* Stage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Stage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Stage", options);
    type->fp_build_ = Stage_build;
    return type;
}

// public Stage(Fuse.UpdateStage _updateStage) :105
void Stage__ctor__fn(Stage* __this, int* _updateStage)
{
    __this->ctor_(*_updateStage);
}

// public void AddDeferredAction(Uno.Action pu, Fuse.IUpdateListener ul, [Fuse.LayoutPriority priority]) :130
void Stage__AddDeferredAction_fn(Stage* __this, uDelegate* pu, uObject* ul, int* priority)
{
    __this->AddDeferredAction(pu, ul, *priority);
}

// public Fuse.UpdateAction GetFirstPriorityAction() :93
void Stage__GetFirstPriorityAction_fn(Stage* __this, ::g::Fuse::UpdateAction** __retval)
{
    *__retval = __this->GetFirstPriorityAction();
}

// public void Insert(Uno.Collections.List<Fuse.UpdateListener> list, Fuse.UpdateListener us) :116
void Stage__Insert_fn(Stage* __this, ::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us)
{
    __this->Insert(list, us);
}

// public Stage New(Fuse.UpdateStage _updateStage) :105
void Stage__New1_fn(int* _updateStage, Stage** __retval)
{
    *__retval = Stage::New1(*_updateStage);
}

// public Stage(Fuse.UpdateStage _updateStage) [instance] :105
void Stage::ctor_(int _updateStage)
{
    Listeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[68/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    Onces = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[68/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    OncesPending = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[68/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    UpdateStage = _updateStage;
    int queueCount = 6;
    PhaseDeferredActions = uArray::New(::TYPES[69/*Uno.Collections.Queue<Fuse.UpdateAction>[]*/], queueCount);

    for (int i = 0; i < queueCount; ++i)
        uPtr(PhaseDeferredActions)->Strong< ::g::Uno::Collections::Queue*>(i) = (::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[70/*Uno.Collections.Queue<Fuse.UpdateAction>*/]);
}

// public void AddDeferredAction(Uno.Action pu, Fuse.IUpdateListener ul, [Fuse.LayoutPriority priority]) [instance] :130
void Stage::AddDeferredAction(uDelegate* pu, uObject* ul, int priority)
{
    ::g::Fuse::UpdateAction* collection1;
    ::g::Uno::Collections::Queue* queue = uPtr(PhaseDeferredActions)->Strong< ::g::Uno::Collections::Queue*>(priority);
    ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(queue), (collection1 = ::g::Fuse::UpdateAction::New1(), uPtr(collection1)->action = pu, uPtr(collection1)->update = ul, collection1));
}

// public Fuse.UpdateAction GetFirstPriorityAction() [instance] :93
::g::Fuse::UpdateAction* Stage::GetFirstPriorityAction()
{
    ::g::Fuse::UpdateAction* ret3;

    for (int i = 0; i < uPtr(PhaseDeferredActions)->Length(); i++)
    {
        ::g::Uno::Collections::Queue* q = uPtr(PhaseDeferredActions)->Strong< ::g::Uno::Collections::Queue*>(i);

        if (uPtr(q)->Count() > 0)
            return (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(q), &ret3), ret3);
    }

    return NULL;
}

// public void Insert(Uno.Collections.List<Fuse.UpdateListener> list, Fuse.UpdateListener us) [instance] :116
void Stage::Insert(::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us)
{
    ::g::Fuse::UpdateListener* ret4;

    for (int i = uPtr(list)->Count(); i > 0; --i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i - 1), &ret4), ret4))->sequence <= uPtr(us)->sequence)
        {
            ::g::Uno::Collections::List__Insert_fn(uPtr(list), uCRef<int>(i), us);
            return;
        }

    ::g::Uno::Collections::List__Insert_fn(list, uCRef<int>(0), us);
}

// public Stage New(Fuse.UpdateStage _updateStage) [static] :105
Stage* Stage::New1(int _updateStage)
{
    Stage* obj2 = (Stage*)uNew(Stage_typeof());
    obj2->ctor_(_updateStage);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Computer.uno
// -------------------------------------------------------------

// internal sealed class StringComputer :56
// {
static void StringComputer_build(uType* type)
{
    type->SetBase(::g::Fuse::Computer1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
}

::g::Fuse::Computer1_type* StringComputer_typeof()
{
    static uSStrong< ::g::Fuse::Computer1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Computer1_typeof();
    options.ObjectSize = sizeof(StringComputer);
    options.TypeSize = sizeof(::g::Fuse::Computer1_type);
    type = (::g::Fuse::Computer1_type*)uClassType::New("Fuse.StringComputer", options);
    type->fp_build_ = StringComputer_build;
    type->fp_ctor_ = (void*)StringComputer__New1_fn;
    type->fp_Add1 = (void(*)(::g::Fuse::Computer1*, void*, void*, uTRef))StringComputer__Add1_fn;
    type->fp_Convert = (void(*)(::g::Fuse::Computer1*, uObject*, uTRef))StringComputer__Convert_fn;
    type->fp_EqualTo1 = (void(*)(::g::Fuse::Computer1*, void*, void*, bool*))StringComputer__EqualTo1_fn;
    return type;
}

// public generated StringComputer() :56
void StringComputer__ctor_2_fn(StringComputer* __this)
{
    __this->ctor_2();
}

// public override sealed string Add(string a, string b) :59
void StringComputer__Add1_fn(StringComputer* __this, uString* a, uString* b, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(a, b), void();
}

// public override sealed string Convert(object obj) :58
void StringComputer__Convert_fn(StringComputer* __this, uObject* obj, uString** __retval)
{
    return *__retval = ::g::Uno::Object::ToString(uPtr(obj)), void();
}

// public override sealed bool EqualTo(string a, string b) :60
void StringComputer__EqualTo1_fn(StringComputer* __this, uString* a, uString* b, bool* __retval)
{
    return *__retval = ::g::Uno::String::op_Equality(a, b), void();
}

// public generated StringComputer New() :56
void StringComputer__New1_fn(StringComputer** __retval)
{
    *__retval = StringComputer::New1();
}

// public generated StringComputer() [instance] :56
void StringComputer::ctor_2()
{
    ctor_1();
}

// public generated StringComputer New() [static] :56
StringComputer* StringComputer::New1()
{
    StringComputer* obj1 = (StringComputer*)uNew(StringComputer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/SystemFont.uno
// --------------------------------------------------------------

// public enum SystemFont.Style :51
uEnumType* SystemFont__Style_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.SystemFont.Style", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Normal", 0LL,
        "Italic", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/SystemFont.uno
// --------------------------------------------------------------

// public sealed class SystemFont :36
// {
static void SystemFont_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Internal::SystemFont_typeof());
    type->SetFields(1);
}

uType* SystemFont_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Font_typeof();
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SystemFont);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.SystemFont", options);
    type->fp_build_ = SystemFont_build;
    return type;
}

// public SystemFont(string family, [Fuse.SystemFont.Style style], [Fuse.SystemFont.Weight weight]) :58
void SystemFont__ctor_2_fn(SystemFont* __this, uString* family, int* style, int* weight)
{
    __this->ctor_2(family, *style, *weight);
}

// public SystemFont New(string family, [Fuse.SystemFont.Style style], [Fuse.SystemFont.Weight weight]) :58
void SystemFont__New3_fn(uString* family, int* style, int* weight, SystemFont** __retval)
{
    *__retval = SystemFont::New3(family, *style, *weight);
}

// public SystemFont(string family, [Fuse.SystemFont.Style style], [Fuse.SystemFont.Weight weight]) [instance] :58
void SystemFont::ctor_2(uString* family, int style, int weight)
{
    ctor_(::g::Fuse::Internal::SystemFont::Get(family, style, weight));
}

// public SystemFont New(string family, [Fuse.SystemFont.Style style], [Fuse.SystemFont.Weight weight]) [static] :58
SystemFont* SystemFont::New3(uString* family, int style, int weight)
{
    SystemFont* obj1 = (SystemFont*)uNew(SystemFont_typeof());
    obj1->ctor_2(family, style, weight);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/RootViewport.uno
// ---------------------------------------------------------------

// internal sealed extern class SystemUIFrame :19
// {
static void SystemUIFrame_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Platform::SystemUI_typeof());
    type->SetInterfaces(
        ::g::Fuse::IFrame_typeof(), offsetof(SystemUIFrame_type, interface0));
}

SystemUIFrame_type* SystemUIFrame_typeof()
{
    static uSStrong<SystemUIFrame_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SystemUIFrame);
    options.TypeSize = sizeof(SystemUIFrame_type);
    type = (SystemUIFrame_type*)uClassType::New("Fuse.SystemUIFrame", options);
    type->fp_build_ = SystemUIFrame_build;
    type->fp_ctor_ = (void*)SystemUIFrame__New1_fn;
    type->interface0.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))SystemUIFrame__get_Size_fn;
    type->interface0.fp_add_FrameChanged = (void(*)(uObject*, uDelegate*))SystemUIFrame__add_FrameChanged_fn;
    type->interface0.fp_remove_FrameChanged = (void(*)(uObject*, uDelegate*))SystemUIFrame__remove_FrameChanged_fn;
    return type;
}

// public generated SystemUIFrame() :19
void SystemUIFrame__ctor__fn(SystemUIFrame* __this)
{
    __this->ctor_();
}

// public void add_FrameChanged(Uno.EventHandler value) :23
void SystemUIFrame__add_FrameChanged_fn(SystemUIFrame* __this, uDelegate* value)
{
    __this->add_FrameChanged(value);
}

// public void remove_FrameChanged(Uno.EventHandler value) :24
void SystemUIFrame__remove_FrameChanged_fn(SystemUIFrame* __this, uDelegate* value)
{
    __this->remove_FrameChanged(value);
}

// public generated SystemUIFrame New() :19
void SystemUIFrame__New1_fn(SystemUIFrame** __retval)
{
    *__retval = SystemUIFrame::New1();
}

// public float2 get_Size() :29
void SystemUIFrame__get_Size_fn(SystemUIFrame* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public generated SystemUIFrame() [instance] :19
void SystemUIFrame::ctor_()
{
}

// public void add_FrameChanged(Uno.EventHandler value) [instance] :23
void SystemUIFrame::add_FrameChanged(uDelegate* value)
{
    ::g::Fuse::Platform::SystemUI::add_FrameChanged(value);
}

// public void remove_FrameChanged(Uno.EventHandler value) [instance] :24
void SystemUIFrame::remove_FrameChanged(uDelegate* value)
{
    ::g::Fuse::Platform::SystemUI::remove_FrameChanged(value);
}

// public float2 get_Size() [instance] :29
::g::Uno::Float2 SystemUIFrame::Size()
{
    return ::g::Fuse::Platform::SystemUI::Frame().Size();
}

// public generated SystemUIFrame New() [static] :19
SystemUIFrame* SystemUIFrame::New1()
{
    SystemUIFrame* obj1 = (SystemUIFrame*)uNew(SystemUIFrame_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.Templates.uno
// -------------------------------------------------------------------

// internal struct TemplateSourceImpl :14
// {
static void TemplateSourceImpl_build(uType* type)
{
    ::TYPES[71] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[71/*Uno.Collections.List<Uno.UX.Template>*/], offsetof(TemplateSourceImpl, _templates), 0);
}

uStructType* TemplateSourceImpl_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.Alignment = alignof(TemplateSourceImpl);
    options.ValueSize = sizeof(TemplateSourceImpl);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.TemplateSourceImpl", options);
    type->fp_build_ = TemplateSourceImpl_build;
    return type;
}

// public int get_Count() :18
void TemplateSourceImpl__get_Count_fn(TemplateSourceImpl* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.UX.Template FindTemplate(string key) :30
void TemplateSourceImpl__FindTemplate_fn(TemplateSourceImpl* __this, uString* key, ::g::Uno::UX::Template** __retval)
{
    *__retval = __this->FindTemplate(key);
}

// public Uno.UX.Template get_Item(int index) :19
void TemplateSourceImpl__get_Item_fn(TemplateSourceImpl* __this, int* index, ::g::Uno::UX::Template** __retval)
{
    *__retval = __this->Item(*index);
}

// public Uno.Collections.List<Uno.UX.Template> get_Templates() :22
void TemplateSourceImpl__get_Templates_fn(TemplateSourceImpl* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->Templates();
}

// public int get_Count() [instance] :18
int TemplateSourceImpl::Count()
{
    return (_templates == NULL) ? 0 : uPtr(_templates)->Count();
}

// public Uno.UX.Template FindTemplate(string key) [instance] :30
::g::Uno::UX::Template* TemplateSourceImpl::FindTemplate(uString* key)
{
    ::g::Uno::UX::Template* ret1;

    for (int i = Count() - 1; i >= 0; --i)
    {
        ::g::Uno::UX::Template* t = (::g::Uno::Collections::List__get_Item_fn(uPtr(_templates), uCRef<int>(i), &ret1), ret1);

        if (::g::Uno::String::op_Equality(uPtr(t)->Key(), key))
            return t;
    }

    return NULL;
}

// public Uno.UX.Template get_Item(int index) [instance] :19
::g::Uno::UX::Template* TemplateSourceImpl::Item(int index)
{
    ::g::Uno::UX::Template* ret2;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_templates), uCRef<int>(index), &ret2), ret2);
}

// public Uno.Collections.List<Uno.UX.Template> get_Templates() [instance] :22
::g::Uno::Collections::List* TemplateSourceImpl::Templates()
{
    if (_templates == NULL)
        _templates = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[71/*Uno.Collections.List<Uno.UX.Template>*/]));

    return _templates;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Diagnostics.uno
// ---------------------------------------------------------------

// private sealed class Diagnostics.Temporal :147
// {
static void Diagnostics__Temporal_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Diagnostics__Temporal_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Diagnostic_typeof(), offsetof(Diagnostics__Temporal, _diag), 0);
}

Diagnostics__Temporal_type* Diagnostics__Temporal_typeof()
{
    static uSStrong<Diagnostics__Temporal_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Diagnostics__Temporal);
    options.TypeSize = sizeof(Diagnostics__Temporal_type);
    type = (Diagnostics__Temporal_type*)uClassType::New("Fuse.Diagnostics.Temporal", options);
    type->fp_build_ = Diagnostics__Temporal_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Diagnostics__Temporal__Dispose_fn;
    return type;
}

// public Temporal(Fuse.Diagnostic diag) :150
void Diagnostics__Temporal__ctor__fn(Diagnostics__Temporal* __this, ::g::Fuse::Diagnostic* diag)
{
    __this->ctor_(diag);
}

// public void Dispose() :155
void Diagnostics__Temporal__Dispose_fn(Diagnostics__Temporal* __this)
{
    __this->Dispose();
}

// public Temporal New(Fuse.Diagnostic diag) :150
void Diagnostics__Temporal__New1_fn(::g::Fuse::Diagnostic* diag, Diagnostics__Temporal** __retval)
{
    *__retval = Diagnostics__Temporal::New1(diag);
}

// public Temporal(Fuse.Diagnostic diag) [instance] :150
void Diagnostics__Temporal::ctor_(::g::Fuse::Diagnostic* diag)
{
    _diag = diag;
}

// public void Dispose() [instance] :155
void Diagnostics__Temporal::Dispose()
{
    ::g::Fuse::Diagnostics::Dismiss(_diag);
}

// public Temporal New(Fuse.Diagnostic diag) [static] :150
Diagnostics__Temporal* Diagnostics__Temporal::New1(::g::Fuse::Diagnostic* diag)
{
    Diagnostics__Temporal* obj1 = (Diagnostics__Temporal*)uNew(Diagnostics__Temporal_typeof());
    obj1->ctor_(diag);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Time.uno
// --------------------------------------------------------

// public static class Time :6
// {
static void Time_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), (uintptr_t)&Time::_base_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&Time::_current_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&Time::_delta_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&Time::_init_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&Time::_prev_, uFieldFlagsStatic);
}

uClassType* Time_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Time", options);
    type->fp_build_ = Time_build;
    return type;
}

// public static double get_FrameInterval() :48
void Time__get_FrameInterval_fn(double* __retval)
{
    *__retval = Time::FrameInterval();
}

// public static double get_FrameTime() :41
void Time__get_FrameTime_fn(double* __retval)
{
    *__retval = Time::FrameTime();
}

// public static double get_FrameTimeBase() :54
void Time__get_FrameTimeBase_fn(double* __retval)
{
    *__retval = Time::FrameTimeBase();
}

// internal static void Init(double start) :14
void Time__Init_fn(double* start)
{
    Time::Init(*start);
}

// internal static void Set(double current) :23
void Time__Set_fn(double* current)
{
    Time::Set(*current);
}

double Time::_base_;
double Time::_current_;
double Time::_delta_;
bool Time::_init_;
double Time::_prev_;

// internal static void Init(double start) [static] :14
void Time::Init(double start)
{
    Time::_base_ = start;
    Time::_current_ = start;
    Time::_delta_ = 0.0;
    Time::_prev_ = start;
    Time::_init_ = true;
}

// internal static void Set(double current) [static] :23
void Time::Set(double current)
{
    if (!Time::_init_)
        Time::Init(current);
    else
    {
        Time::_delta_ = (current - Time::_prev_);
        Time::_current_ = current;
        Time::_prev_ = current;
    }
}

// public static double get_FrameInterval() [static] :48
double Time::FrameInterval()
{
    return Time::_delta_;
}

// public static double get_FrameTime() [static] :41
double Time::FrameTime()
{
    return Time::_current_ - Time::_base_;
}

// public static double get_FrameTimeBase() [static] :54
double Time::FrameTimeBase()
{
    return Time::_base_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Transform.uno
// ------------------------------------------------------------

// public abstract class Transform :25
// {
static void Transform_build(uType* type)
{
    ::TYPES[72] = ::g::Uno::Action1_typeof()->MakeType(type, NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Transform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Transform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Transform_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Transform_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Transform_type, interface5));
    type->SetFields(15,
        ::TYPES[72/*Uno.Action<Fuse.Transform>*/], offsetof(Transform, MatrixChanged1), 0);
}

Transform_type* Transform_typeof()
{
    static uSStrong<Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Transform);
    options.TypeSize = sizeof(Transform_type);
    type = (Transform_type*)uClassType::New("Fuse.Transform", options);
    type->fp_build_ = Transform_build;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated Transform() :25
void Transform__ctor_2_fn(Transform* __this)
{
    __this->ctor_2();
}

// internal generated void add_MatrixChanged(Uno.Action<Fuse.Transform> value) :30
void Transform__add_MatrixChanged_fn(Transform* __this, uDelegate* value)
{
    __this->add_MatrixChanged(value);
}

// internal generated void remove_MatrixChanged(Uno.Action<Fuse.Transform> value) :30
void Transform__remove_MatrixChanged_fn(Transform* __this, uDelegate* value)
{
    __this->remove_MatrixChanged(value);
}

// protected void OnMatrixChanged([object igoreSender], [object ignoreArgs]) :32
void Transform__OnMatrixChanged_fn(Transform* __this, uObject* igoreSender, uObject* ignoreArgs)
{
    __this->OnMatrixChanged(igoreSender, ignoreArgs);
}

// protected generated Transform() [instance] :25
void Transform::ctor_2()
{
    ctor_1();
}

// internal generated void add_MatrixChanged(Uno.Action<Fuse.Transform> value) [instance] :30
void Transform::add_MatrixChanged(uDelegate* value)
{
    MatrixChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(MatrixChanged1, value), ::TYPES[72/*Uno.Action<Fuse.Transform>*/]);
}

// internal generated void remove_MatrixChanged(Uno.Action<Fuse.Transform> value) [instance] :30
void Transform::remove_MatrixChanged(uDelegate* value)
{
    MatrixChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(MatrixChanged1, value), ::TYPES[72/*Uno.Action<Fuse.Transform>*/]);
}

// protected void OnMatrixChanged([object igoreSender], [object ignoreArgs]) [instance] :32
void Transform::OnMatrixChanged(uObject* igoreSender, uObject* ignoreArgs)
{
    if (::g::Uno::Delegate::op_Inequality(MatrixChanged1, NULL))
        uPtr(MatrixChanged1)->InvokeVoid(this);
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno
// --------------------------------------------------------------

// public sealed class Translation :149
// {
static void Translation_build(uType* type)
{
    ::TYPES[73] = ::g::Fuse::ITranslationMode_typeof();
    type->SetBase(::g::Fuse::RelativeTransform_typeof()->MakeType(::g::Fuse::ITranslationMode_typeof(), NULL));
    type->SetDependencies(
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RelativeTransform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RelativeTransform_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::RelativeTransform_type, interface5),
        ::g::Fuse::ITransformRelative_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface6));
    type->SetFields(20,
        ::g::Uno::Float_typeof(), offsetof(Translation, _x), 0,
        ::g::Uno::Float_typeof(), offsetof(Translation, _y), 0,
        ::g::Uno::Float_typeof(), offsetof(Translation, _z), 0);
}

::g::Fuse::RelativeTransform_type* Translation_typeof()
{
    static uSStrong< ::g::Fuse::RelativeTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::RelativeTransform_typeof();
    options.FieldCount = 23;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Translation);
    options.TypeSize = sizeof(::g::Fuse::RelativeTransform_type);
    type = (::g::Fuse::RelativeTransform_type*)uClassType::New("Fuse.Translation", options);
    type->fp_build_ = Translation_build;
    type->fp_ctor_ = (void*)Translation__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Translation__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Translation__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Translation__PrependTo_fn;
    type->interface6.fp_OnTransformChanged = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::RelativeTransform__FuseITransformRelativeOnTransformChanged_fn;
    type->interface6.fp_get_Target = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::RelativeTransform__FuseITransformRelativeget_Target_fn;
    type->interface6.fp_get_RelativeNode = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::RelativeTransform__FuseITransformRelativeget_RelativeNode_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Translation() :151
void Translation__ctor_4_fn(Translation* __this)
{
    __this->ctor_4();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :250
void Translation__AppendTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    float weight_ = *weight;
    ::g::Uno::Float3 v = ::g::Uno::Float3__op_Multiply1(::g::Fuse::ITranslationMode::GetAbsVector(uInterface(uPtr((uObject*)__this->RelativeTo()), ::TYPES[73/*Fuse.ITranslationMode*/]), __this), weight_);
    uPtr(m)->AppendTranslation(v.X, v.Y, v.Z);
}

// public override sealed bool get_IsFlat() :264
void Translation__get_IsFlat_fn(Translation* __this, bool* __retval)
{
    float zeroTolerance = 1e-05f;
    return *__retval = ::g::Uno::Math::Abs1(__this->Z()) < 1e-05f, void();
}

// public Translation New() :151
void Translation__New2_fn(Translation** __retval)
{
    *__retval = Translation::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :256
void Translation__PrependTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m)
{
    ::g::Uno::Float3 v = ::g::Fuse::ITranslationMode::GetAbsVector(uInterface(uPtr((uObject*)__this->RelativeTo()), ::TYPES[73/*Fuse.ITranslationMode*/]), __this);
    uPtr(m)->PrependTranslation(v.X, v.Y, v.Z);
}

// public float3 get_Vector() :236
void Translation__get_Vector_fn(Translation* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float3 value) :237
void Translation__set_Vector_fn(Translation* __this, ::g::Uno::Float3* value)
{
    __this->Vector(*value);
}

// public float get_X() :163
void Translation__get_X_fn(Translation* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :164
void Translation__set_X_fn(Translation* __this, float* value)
{
    __this->X(*value);
}

// public float2 get_XY() :181
void Translation__get_XY_fn(Translation* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->XY();
}

// public void set_XY(float2 value) :182
void Translation__set_XY_fn(Translation* __this, ::g::Uno::Float2* value)
{
    __this->XY(*value);
}

// public float get_Y() :201
void Translation__get_Y_fn(Translation* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :202
void Translation__set_Y_fn(Translation* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :220
void Translation__get_Z_fn(Translation* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :221
void Translation__set_Z_fn(Translation* __this, float* value)
{
    __this->Z(*value);
}

// public Translation() [instance] :151
void Translation::ctor_4()
{
    ctor_3(::g::Fuse::TranslationModes::Local_);
}

// public float3 get_Vector() [instance] :236
::g::Uno::Float3 Translation::Vector()
{
    return ::g::Uno::Float3__New2(X(), Y(), Z());
}

// public void set_Vector(float3 value) [instance] :237
void Translation::Vector(::g::Uno::Float3 value)
{
    if (((_x != value.X) || (_y != value.Y)) || (_z != value.Z))
    {
        _x = value.X;
        _y = value.Y;
        _z = value.Z;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float get_X() [instance] :163
float Translation::X()
{
    return _x;
}

// public void set_X(float value) [instance] :164
void Translation::X(float value)
{
    if (_x != value)
    {
        _x = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float2 get_XY() [instance] :181
::g::Uno::Float2 Translation::XY()
{
    return ::g::Uno::Float2__New2(_x, _y);
}

// public void set_XY(float2 value) [instance] :182
void Translation::XY(::g::Uno::Float2 value)
{
    if ((_x != value.X) || (_y != value.Y))
    {
        _x = value.X;
        _y = value.Y;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float get_Y() [instance] :201
float Translation::Y()
{
    return _y;
}

// public void set_Y(float value) [instance] :202
void Translation::Y(float value)
{
    if (_y != value)
    {
        _y = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float get_Z() [instance] :220
float Translation::Z()
{
    return _z;
}

// public void set_Z(float value) [instance] :221
void Translation::Z(float value)
{
    if (_z != value)
    {
        _z = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public Translation New() [static] :151
Translation* Translation::New2()
{
    Translation* obj1 = (Translation*)uNew(Translation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno
// --------------------------------------------------------------

// public static class TranslationModes :66
// {
// static generated TranslationModes() :66
static void TranslationModes__cctor__fn(uType* __type)
{
    TranslationModes::Local_ = (uObject*)TranslationModes__LocalMode::New1();
    TranslationModes::Size_ = (uObject*)TranslationModes__SizeMode::New1();
    TranslationModes::ParentSize_ = (uObject*)TranslationModes__ParentSizeMode::New1();
    TranslationModes::Width_ = (uObject*)TranslationModes__WidthMode::New2();
    TranslationModes::Height_ = (uObject*)TranslationModes__HeightMode::New2();
}

static void TranslationModes_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&TranslationModes::Height_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&TranslationModes::Local_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&TranslationModes::ParentSize_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&TranslationModes::Size_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&TranslationModes::Width_, uFieldFlagsStatic);
}

uClassType* TranslationModes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.TranslationModes", options);
    type->fp_build_ = TranslationModes_build;
    type->fp_cctor_ = TranslationModes__cctor__fn;
    return type;
}

// private static float3 SizeOf(Fuse.Node node) :108
void TranslationModes__SizeOf_fn(::g::Fuse::Node* node, ::g::Uno::Float3* __retval)
{
    *__retval = TranslationModes::SizeOf(node);
}

uSStrong<uObject*> TranslationModes::Height_;
uSStrong<uObject*> TranslationModes::Local_;
uSStrong<uObject*> TranslationModes::ParentSize_;
uSStrong<uObject*> TranslationModes::Size_;
uSStrong<uObject*> TranslationModes::Width_;

// private static float3 SizeOf(Fuse.Node node) [static] :108
::g::Uno::Float3 TranslationModes::SizeOf(::g::Fuse::Node* node)
{
    uObject* isz = uAs<uObject*>(node, ::TYPES[57/*Fuse.IActualPlacement*/]);

    if (isz == NULL)
        return ::g::Uno::Float3__New1(0.0f);

    return ::g::Fuse::IActualPlacement::ActualSize(uInterface(uPtr(isz), ::TYPES[57/*Fuse.IActualPlacement*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/VisualBounds.uno
// ---------------------------------------------------------------

// internal enum VisualBounds.Type :324
uEnumType* VisualBounds__Type_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.VisualBounds.Type", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Render", 0LL,
        "HitTest", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/AppBase.uno
// ----------------------------------------------------------

// public sealed class UnhandledExceptionArgs :15
// {
static void UnhandledExceptionArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Exception_typeof(), offsetof(UnhandledExceptionArgs, _Exception), 0,
        ::g::Uno::Bool_typeof(), offsetof(UnhandledExceptionArgs, _IsHandled), 0);
}

uType* UnhandledExceptionArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UnhandledExceptionArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UnhandledExceptionArgs", options);
    type->fp_build_ = UnhandledExceptionArgs_build;
    return type;
}

// public UnhandledExceptionArgs(Uno.Exception e) :20
void UnhandledExceptionArgs__ctor_1_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception* e)
{
    __this->ctor_1(e);
}

// public generated Uno.Exception get_Exception() :17
void UnhandledExceptionArgs__get_Exception_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception** __retval)
{
    *__retval = __this->Exception();
}

// private generated void set_Exception(Uno.Exception value) :17
void UnhandledExceptionArgs__set_Exception_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception* value)
{
    __this->Exception(value);
}

// public generated bool get_IsHandled() :18
void UnhandledExceptionArgs__get_IsHandled_fn(UnhandledExceptionArgs* __this, bool* __retval)
{
    *__retval = __this->IsHandled();
}

// public generated void set_IsHandled(bool value) :18
void UnhandledExceptionArgs__set_IsHandled_fn(UnhandledExceptionArgs* __this, bool* value)
{
    __this->IsHandled(*value);
}

// public UnhandledExceptionArgs New(Uno.Exception e) :20
void UnhandledExceptionArgs__New2_fn(::g::Uno::Exception* e, UnhandledExceptionArgs** __retval)
{
    *__retval = UnhandledExceptionArgs::New2(e);
}

// public UnhandledExceptionArgs(Uno.Exception e) [instance] :20
void UnhandledExceptionArgs::ctor_1(::g::Uno::Exception* e)
{
    ctor_();
    Exception(e);
}

// public generated Uno.Exception get_Exception() [instance] :17
::g::Uno::Exception* UnhandledExceptionArgs::Exception()
{
    return _Exception;
}

// private generated void set_Exception(Uno.Exception value) [instance] :17
void UnhandledExceptionArgs::Exception(::g::Uno::Exception* value)
{
    _Exception = value;
}

// public generated bool get_IsHandled() [instance] :18
bool UnhandledExceptionArgs::IsHandled()
{
    return _IsHandled;
}

// public generated void set_IsHandled(bool value) [instance] :18
void UnhandledExceptionArgs::IsHandled(bool value)
{
    _IsHandled = value;
}

// public UnhandledExceptionArgs New(Uno.Exception e) [static] :20
UnhandledExceptionArgs* UnhandledExceptionArgs::New2(::g::Uno::Exception* e)
{
    UnhandledExceptionArgs* obj1 = (UnhandledExceptionArgs*)uNew(UnhandledExceptionArgs_typeof());
    obj1->ctor_1(e);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/AppBase.uno
// ----------------------------------------------------------

// public delegate void UnhandledExceptionHandler(object sender, Fuse.UnhandledExceptionArgs args) :27
uDelegateType* UnhandledExceptionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.UnhandledExceptionHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::UnhandledExceptionArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/UpdateManager.uno
// -----------------------------------------------------------------

// internal sealed class UpdateAction :66
// {
static void UpdateAction_build(uType* type)
{
    ::TYPES[74] = ::g::Fuse::IUpdateListener_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(UpdateAction, action), 0,
        ::TYPES[74/*Fuse.IUpdateListener*/], offsetof(UpdateAction, update), 0);
}

uType* UpdateAction_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UpdateAction);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UpdateAction", options);
    type->fp_build_ = UpdateAction_build;
    type->fp_ctor_ = (void*)UpdateAction__New1_fn;
    return type;
}

// public generated UpdateAction() :66
void UpdateAction__ctor__fn(UpdateAction* __this)
{
    __this->ctor_();
}

// public void Invoke() :71
void UpdateAction__Invoke_fn(UpdateAction* __this)
{
    __this->Invoke();
}

// public generated UpdateAction New() :66
void UpdateAction__New1_fn(UpdateAction** __retval)
{
    *__retval = UpdateAction::New1();
}

// public generated UpdateAction() [instance] :66
void UpdateAction::ctor_()
{
}

// public void Invoke() [instance] :71
void UpdateAction::Invoke()
{
    if (::g::Uno::Delegate::op_Inequality(action, NULL))
        uPtr(action)->InvokeVoid();

    if (update != NULL)
        ::g::Fuse::IUpdateListener::Update(uInterface(uPtr(update), ::TYPES[74/*Fuse.IUpdateListener*/]));
}

// public generated UpdateAction New() [static] :66
UpdateAction* UpdateAction::New1()
{
    UpdateAction* obj1 = (UpdateAction*)uNew(UpdateAction_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/UpdateManager.uno
// -----------------------------------------------------------------

// internal sealed class UpdateDispatcher :137
// {
static void UpdateDispatcher_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(UpdateDispatcher_type, interface0));
}

UpdateDispatcher_type* UpdateDispatcher_typeof()
{
    static uSStrong<UpdateDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UpdateDispatcher);
    options.TypeSize = sizeof(UpdateDispatcher_type);
    type = (UpdateDispatcher_type*)uClassType::New("Fuse.UpdateDispatcher", options);
    type->fp_build_ = UpdateDispatcher_build;
    type->fp_ctor_ = (void*)UpdateDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))UpdateDispatcher__Invoke_fn;
    return type;
}

// public generated UpdateDispatcher() :137
void UpdateDispatcher__ctor__fn(UpdateDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :139
void UpdateDispatcher__Invoke_fn(UpdateDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public generated UpdateDispatcher New() :137
void UpdateDispatcher__New1_fn(UpdateDispatcher** __retval)
{
    *__retval = UpdateDispatcher::New1();
}

// public generated UpdateDispatcher() [instance] :137
void UpdateDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :139
void UpdateDispatcher::Invoke(uDelegate* action)
{
    ::g::Fuse::UpdateManager::PostAction(action);
}

// public generated UpdateDispatcher New() [static] :137
UpdateDispatcher* UpdateDispatcher::New1()
{
    UpdateDispatcher* obj1 = (UpdateDispatcher*)uNew(UpdateDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/UpdateManager.uno
// -----------------------------------------------------------------

// internal sealed class UpdateListener :44
// {
static void UpdateListener_build(uType* type)
{
    ::TYPES[74] = ::g::Fuse::IUpdateListener_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(UpdateListener, action), 0,
        ::g::Uno::Int_typeof(), offsetof(UpdateListener, deferFrame), 0,
        ::g::Uno::Bool_typeof(), offsetof(UpdateListener, removed), 0,
        ::g::Uno::Int_typeof(), offsetof(UpdateListener, sequence), 0,
        ::TYPES[74/*Fuse.IUpdateListener*/], offsetof(UpdateListener, update), 0);
}

uType* UpdateListener_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(UpdateListener);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UpdateListener", options);
    type->fp_build_ = UpdateListener_build;
    type->fp_ctor_ = (void*)UpdateListener__New1_fn;
    return type;
}

// public generated UpdateListener() :44
void UpdateListener__ctor__fn(UpdateListener* __this)
{
    __this->ctor_();
}

// public void Invoke() :53
void UpdateListener__Invoke_fn(UpdateListener* __this)
{
    __this->Invoke();
}

// public generated UpdateListener New() :44
void UpdateListener__New1_fn(UpdateListener** __retval)
{
    *__retval = UpdateListener::New1();
}

// public generated UpdateListener() [instance] :44
void UpdateListener::ctor_()
{
}

// public void Invoke() [instance] :53
void UpdateListener::Invoke()
{
    if (removed)
        return;

    if (::g::Uno::Delegate::op_Inequality(action, NULL))
        uPtr(action)->InvokeVoid();

    if (update != NULL)
        ::g::Fuse::IUpdateListener::Update(uInterface(uPtr(update), ::TYPES[74/*Fuse.IUpdateListener*/]));
}

// public generated UpdateListener New() [static] :44
UpdateListener* UpdateListener::New1()
{
    UpdateListener* obj1 = (UpdateListener*)uNew(UpdateListener_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/UpdateManager.uno
// -----------------------------------------------------------------

// public static class UpdateManager :145
// {
// static UpdateManager() :152
static void UpdateManager__cctor__fn(uType* __type)
{
    UpdateManager::_stages_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[75/*Uno.Collections.List<Fuse.Stage>*/]));
    UpdateManager::_postActions_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[76/*Uno.Collections.List<Uno.Action>*/]));
    UpdateManager::_postActionsSwap_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[76/*Uno.Collections.List<Uno.Action>*/]));
    UpdateManager::Dispatcher_ = (uObject*)::g::Fuse::UpdateDispatcher::New1();
    UpdateManager::_postActionLock_ = ::g::Uno::Object::New();
    UpdateManager::_frameIndex_ = 1;

    for (int i = 0; i <= 2; ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(UpdateManager::_stages_), ::g::Fuse::Stage::New1(i));
}

static void UpdateManager_build(uType* type)
{
    ::STRINGS[69] = uString::Const("no Action found to remove");
    ::TYPES[75] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Stage_typeof(), NULL);
    ::TYPES[76] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[49] = ::g::Uno::Exception_typeof();
    ::TYPES[77] = ::g::Uno::Collections::List_typeof()->MakeType(::TYPES[49/*Uno.Exception*/], NULL);
    type->SetFields(0,
        ::g::Fuse::Stage_typeof(), (uintptr_t)&UpdateManager::_currentStage_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&UpdateManager::_frameIndex_, uFieldFlagsStatic,
        uObject_typeof(), (uintptr_t)&UpdateManager::_postActionLock_, uFieldFlagsStatic,
        ::TYPES[76/*Uno.Collections.List<Uno.Action>*/], (uintptr_t)&UpdateManager::_postActions_, uFieldFlagsStatic,
        ::TYPES[76/*Uno.Collections.List<Uno.Action>*/], (uintptr_t)&UpdateManager::_postActionsSwap_, uFieldFlagsStatic,
        ::TYPES[75/*Uno.Collections.List<Fuse.Stage>*/], (uintptr_t)&UpdateManager::_stages_, uFieldFlagsStatic,
        ::g::Uno::Threading::IDispatcher_typeof(), (uintptr_t)&UpdateManager::Dispatcher_, uFieldFlagsStatic);
}

uClassType* UpdateManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.UpdateManager", options);
    type->fp_build_ = UpdateManager_build;
    type->fp_cctor_ = UpdateManager__cctor__fn;
    return type;
}

// public static void AddAction(Fuse.IUpdateListener pu, [Fuse.UpdateStage stage]) :172
void UpdateManager__AddAction_fn(uObject* pu, int* stage)
{
    UpdateManager::AddAction(pu, *stage);
}

// public static void AddAction(Uno.Action pu, [Fuse.UpdateStage stage]) :161
void UpdateManager__AddAction1_fn(uDelegate* pu, int* stage)
{
    UpdateManager::AddAction1(pu, *stage);
}

// public static void AddDeferredAction(Fuse.IUpdateListener pu, [Fuse.UpdateStage stage], [Fuse.LayoutPriority priority]) :277
void UpdateManager__AddDeferredAction_fn(uObject* pu, int* stage, int* priority)
{
    UpdateManager::AddDeferredAction(pu, *stage, *priority);
}

// public static void AddDeferredAction(Uno.Action pu, [Fuse.UpdateStage stage], [Fuse.LayoutPriority priority]) :271
void UpdateManager__AddDeferredAction2_fn(uDelegate* pu, int* stage, int* priority)
{
    UpdateManager::AddDeferredAction2(pu, *stage, *priority);
}

// public static void AddDeferredAction(Uno.Action pu, Fuse.LayoutPriority priority) :283
void UpdateManager__AddDeferredAction3_fn(uDelegate* pu, int* priority)
{
    UpdateManager::AddDeferredAction3(pu, *priority);
}

// public static void AddOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) :216
void UpdateManager__AddOnceAction_fn(uDelegate* pu, int* stage)
{
    UpdateManager::AddOnceAction(pu, *stage);
}

// private static void CheckExceptions(Uno.Collections.List<Uno.Exception> exs) :492
void UpdateManager__CheckExceptions_fn(::g::Uno::Collections::List* exs)
{
    UpdateManager::CheckExceptions(exs);
}

// private static Fuse.Stage get_CurrentDeferredActionStage() :262
void UpdateManager__get_CurrentDeferredActionStage_fn(::g::Fuse::Stage** __retval)
{
    *__retval = UpdateManager::CurrentDeferredActionStage();
}

// public static int get_FrameIndex() :506
void UpdateManager__get_FrameIndex_fn(int* __retval)
{
    *__retval = UpdateManager::FrameIndex();
}

// public static void IncreaseFrameIndex() :293
void UpdateManager__IncreaseFrameIndex_fn()
{
    UpdateManager::IncreaseFrameIndex();
}

// public static void PerformNextFrame(Uno.Action pu, [Fuse.UpdateStage stage]) :233
void UpdateManager__PerformNextFrame_fn(uDelegate* pu, int* stage)
{
    UpdateManager::PerformNextFrame(pu, *stage);
}

// public static void PostAction(Uno.Action pu) :247
void UpdateManager__PostAction_fn(uDelegate* pu)
{
    UpdateManager::PostAction(pu);
}

// private static void ProcessDeferredActions(Fuse.Stage stage, Uno.Collections.List<Uno.Exception>& _exceptions) :410
void UpdateManager__ProcessDeferredActions_fn(::g::Fuse::Stage* stage, ::g::Uno::Collections::List** _exceptions)
{
    UpdateManager::ProcessDeferredActions(stage, _exceptions);
}

// private static void ProcessListeners(Fuse.Stage stage, Uno.Collections.List<Uno.Exception>& _exceptions) :382
void UpdateManager__ProcessListeners_fn(::g::Fuse::Stage* stage, ::g::Uno::Collections::List** _exceptions)
{
    UpdateManager::ProcessListeners(stage, _exceptions);
}

// private static void ProcessOnces(Fuse.Stage stage, Uno.Collections.List<Uno.Exception>& _exceptions) :348
void UpdateManager__ProcessOnces_fn(::g::Fuse::Stage* stage, ::g::Uno::Collections::List** _exceptions)
{
    UpdateManager::ProcessOnces(stage, _exceptions);
}

// private static void ProcessPostActions() :437
void UpdateManager__ProcessPostActions_fn()
{
    UpdateManager::ProcessPostActions();
}

// private static void ProcessPostActionsImpl() :452
void UpdateManager__ProcessPostActionsImpl_fn()
{
    UpdateManager::ProcessPostActionsImpl();
}

// private static void ProcessStages() :305
void UpdateManager__ProcessStages_fn()
{
    UpdateManager::ProcessStages();
}

// public static void RemoveAction(Fuse.IUpdateListener pu, [Fuse.UpdateStage stage]) :208
void UpdateManager__RemoveAction_fn(uObject* pu, int* stage)
{
    UpdateManager::RemoveAction(pu, *stage);
}

// public static void RemoveAction(Uno.Action pu, [Fuse.UpdateStage stage]) :200
void UpdateManager__RemoveAction1_fn(uDelegate* pu, int* stage)
{
    UpdateManager::RemoveAction1(pu, *stage);
}

// private static bool RemoveFrom(Uno.Collections.List<Fuse.UpdateListener> list, Uno.Action action, Fuse.IUpdateListener update) :182
void UpdateManager__RemoveFrom_fn(::g::Uno::Collections::List* list, uDelegate* action, uObject* update, bool* __retval)
{
    *__retval = UpdateManager::RemoveFrom(list, action, update);
}

// public static void Update() :299
void UpdateManager__Update_fn()
{
    UpdateManager::Update();
}

// private static void Update(Fuse.Stage stage) :335
void UpdateManager__Update1_fn(::g::Fuse::Stage* stage)
{
    UpdateManager::Update1(stage);
}

uSStrong< ::g::Fuse::Stage*> UpdateManager::_currentStage_;
int UpdateManager::_frameIndex_;
uSStrong<uObject*> UpdateManager::_postActionLock_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_postActions_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_postActionsSwap_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_stages_;
uSStrong<uObject*> UpdateManager::Dispatcher_;

// public static void AddAction(Fuse.IUpdateListener pu, [Fuse.UpdateStage stage]) [static] :172
void UpdateManager::AddAction(uObject* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret1;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->update = pu;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages_), uCRef<int>(stage), &ret1), ret1);
    uPtr(s)->Insert(uPtr(s)->Listeners, us);
}

// public static void AddAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :161
void UpdateManager::AddAction1(uDelegate* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret2;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages_), uCRef<int>(stage), &ret2), ret2);
    uPtr(s)->Insert(uPtr(s)->Listeners, us);
}

// public static void AddDeferredAction(Fuse.IUpdateListener pu, [Fuse.UpdateStage stage], [Fuse.LayoutPriority priority]) [static] :277
void UpdateManager::AddDeferredAction(uObject* pu, int stage, int priority)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret3;
    ::g::Fuse::Stage* use = (stage != -1) ? (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages_), uCRef<int>(stage), &ret3), ret3) : (::g::Fuse::Stage*)UpdateManager::CurrentDeferredActionStage();
    uPtr(use)->AddDeferredAction(NULL, pu, priority);
}

// public static void AddDeferredAction(Uno.Action pu, [Fuse.UpdateStage stage], [Fuse.LayoutPriority priority]) [static] :271
void UpdateManager::AddDeferredAction2(uDelegate* pu, int stage, int priority)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret4;
    ::g::Fuse::Stage* use = (stage != -1) ? (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages_), uCRef<int>(stage), &ret4), ret4) : (::g::Fuse::Stage*)UpdateManager::CurrentDeferredActionStage();
    uPtr(use)->AddDeferredAction(pu, NULL, priority);
}

// public static void AddDeferredAction(Uno.Action pu, Fuse.LayoutPriority priority) [static] :283
void UpdateManager::AddDeferredAction3(uDelegate* pu, int priority)
{
    UpdateManager_typeof()->Init();
    UpdateManager::AddDeferredAction2(pu, -1, priority);
}

// public static void AddOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :216
void UpdateManager::AddOnceAction(uDelegate* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret5;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages_), uCRef<int>(stage), &ret5), ret5))->OncesPending), us);
}

// private static void CheckExceptions(Uno.Collections.List<Uno.Exception> exs) [static] :492
void UpdateManager::CheckExceptions(::g::Uno::Collections::List* exs)
{
    UpdateManager_typeof()->Init();
    ::g::Uno::Exception* ret6;

    if (exs != NULL)
    {
        if (uPtr(exs)->Count() == 1)
            U_THROW(::g::Fuse::WrapException::New4((::g::Uno::Collections::List__get_Item_fn(uPtr(exs), uCRef<int>(0), &ret6), ret6)));
        else
            U_THROW(::g::Uno::AggregateException::New7((uArray*)uPtr(exs)->ToArray()));
    }
}

// public static void IncreaseFrameIndex() [static] :293
void UpdateManager::IncreaseFrameIndex()
{
    UpdateManager_typeof()->Init();
    UpdateManager::_frameIndex_++;
}

// public static void PerformNextFrame(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :233
void UpdateManager::PerformNextFrame(uDelegate* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret8;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    us->deferFrame = (UpdateManager::FrameIndex() + 1);
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages_), uCRef<int>(stage), &ret8), ret8))->OncesPending), us);
}

// public static void PostAction(Uno.Action pu) [static] :247
void UpdateManager::PostAction(uDelegate* pu)
{
    UpdateManager_typeof()->Init();
    ::g::Uno::Threading::Monitor::Enter(UpdateManager::_postActionLock_);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(UpdateManager::_postActionLock_);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(UpdateManager::_postActions_), pu);
    }
}

// private static void ProcessDeferredActions(Fuse.Stage stage, Uno.Collections.List<Uno.Exception>& _exceptions) [static] :410
void UpdateManager::ProcessDeferredActions(::g::Fuse::Stage* stage, ::g::Uno::Collections::List** _exceptions)
{
    UpdateManager_typeof()->Init();

    for (::g::Fuse::UpdateAction* a = uPtr(stage)->GetFirstPriorityAction(); a != NULL; a = stage->GetFirstPriorityAction())

        try
        {
            uPtr(a)->Invoke();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;

            if (*_exceptions == NULL)
                *_exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[77/*Uno.Collections.List<Uno.Exception>*/]);

            ::g::Uno::Collections::List__Add_fn(uPtr(*_exceptions), e);
        }
}

// private static void ProcessListeners(Fuse.Stage stage, Uno.Collections.List<Uno.Exception>& _exceptions) [static] :382
void UpdateManager::ProcessListeners(::g::Fuse::Stage* stage, ::g::Uno::Collections::List** _exceptions)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::UpdateListener* ret9;
    ::g::Fuse::UpdateListener* ret10;

    for (int i = 0; i < uPtr(uPtr(stage)->Listeners)->Count(); ++i)
    {
        ::g::Fuse::UpdateListener* ul = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Listeners), uCRef<int>(i), &ret9), ret9);

        try
        {
            uPtr(ul)->Invoke();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;

            if (*_exceptions == NULL)
                *_exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[77/*Uno.Collections.List<Uno.Exception>*/]);

            ::g::Uno::Collections::List__Add_fn(uPtr(*_exceptions), e);
        }
    }

    if (uPtr(stage)->HasListenersRemoved)

        for (int i1 = uPtr(uPtr(stage)->Listeners)->Count() - 1; i1 >= 0; --i1)
            if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Listeners), uCRef<int>(i1), &ret10), ret10))->removed)
                uPtr(uPtr(stage)->Listeners)->RemoveAt(i1);
}

// private static void ProcessOnces(Fuse.Stage stage, Uno.Collections.List<Uno.Exception>& _exceptions) [static] :348
void UpdateManager::ProcessOnces(::g::Fuse::Stage* stage, ::g::Uno::Collections::List** _exceptions)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::UpdateListener* ret11;

    if (uPtr(uPtr(stage)->OncesPending)->Count() > 0)
    {
        ::g::Uno::Collections::List* t = uPtr(stage)->Onces;
        stage->Onces = stage->OncesPending;
        stage->OncesPending = t;
        uPtr(stage->OncesPending)->Clear();
        int c = uPtr(stage->Onces)->Count();

        for (int i = 0; i < c; ++i)
        {
            ::g::Fuse::UpdateListener* ul = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Onces), uCRef<int>(i), &ret11), ret11);

            if (uPtr(ul)->deferFrame > UpdateManager::FrameIndex())
                ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(stage)->OncesPending), ul);
            else
            {
                try
                {
                    uPtr(ul)->Invoke();
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;

                    if (*_exceptions == NULL)
                        *_exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[77/*Uno.Collections.List<Uno.Exception>*/]);

                    ::g::Uno::Collections::List__Add_fn(uPtr(*_exceptions), e);
                }
            }
        }
    }
}

// private static void ProcessPostActions() [static] :437
void UpdateManager::ProcessPostActions()
{
    UpdateManager_typeof()->Init();
    double t;
    UpdateManager::ProcessPostActionsImpl();
}

// private static void ProcessPostActionsImpl() [static] :452
void UpdateManager::ProcessPostActionsImpl()
{
    UpdateManager_typeof()->Init();
    uDelegate* ret12;
    ::g::Uno::Collections::List* _exceptions = NULL;

    while (true)
    {
        ::g::Uno::Collections::List* a = NULL;
        ::g::Uno::Threading::Monitor::Enter(UpdateManager::_postActionLock_);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::Threading::Monitor::Exit(UpdateManager::_postActionLock_);
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            a = UpdateManager::_postActions_;
            UpdateManager::_postActions_ = UpdateManager::_postActionsSwap_;
            UpdateManager::_postActionsSwap_ = a;
        }

        if (uPtr(a)->Count() == 0)
            break;

        for (int i = 0; i < uPtr(a)->Count(); ++i)

            try
            {
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(a), uCRef<int>(i), &ret12), ret12))->InvokeVoid();
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;

                if (_exceptions == NULL)
                    _exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[77/*Uno.Collections.List<Uno.Exception>*/]);

                ::g::Uno::Collections::List__Add_fn(uPtr(_exceptions), e);
            }

        uPtr(a)->Clear();
    }

    UpdateManager::_currentStage_ = NULL;
    UpdateManager::CheckExceptions(_exceptions);
}

// private static void ProcessStages() [static] :305
void UpdateManager::ProcessStages()
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret13;
    double t;
    int c = uPtr(UpdateManager::_stages_)->Count();

    for (int i = 0; i < c; ++i)
        UpdateManager::Update1((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages_), uCRef<int>(i), &ret13), ret13));
}

// public static void RemoveAction(Fuse.IUpdateListener pu, [Fuse.UpdateStage stage]) [static] :208
void UpdateManager::RemoveAction(uObject* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret14;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages_), uCRef<int>(stage), &ret14), ret14);

    if (!UpdateManager::RemoveFrom(uPtr(s)->Listeners, NULL, pu))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[69/*"no Action f...*/]));

    uPtr(s)->HasListenersRemoved = true;
}

// public static void RemoveAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :200
void UpdateManager::RemoveAction1(uDelegate* pu, int stage)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret15;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages_), uCRef<int>(stage), &ret15), ret15);

    if (!UpdateManager::RemoveFrom(uPtr(s)->Listeners, pu, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[69/*"no Action f...*/]));

    uPtr(s)->HasListenersRemoved = true;
}

// private static bool RemoveFrom(Uno.Collections.List<Fuse.UpdateListener> list, Uno.Action action, Fuse.IUpdateListener update) [static] :182
bool UpdateManager::RemoveFrom(::g::Uno::Collections::List* list, uDelegate* action, uObject* update)
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::UpdateListener* ret16;
    ::g::Fuse::UpdateListener* ret17;
    ::g::Fuse::UpdateListener* ret18;
    ::g::Fuse::UpdateListener* ret19;

    for (int i = 0; i < uPtr(list)->Count(); ++i)
    {
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret16), ret16))->removed)
            continue;

        if ((::g::Uno::Delegate::op_Inequality(action, NULL) && ::g::Uno::Object::Equals1(action, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret17), ret17))->action)) || ((update != NULL) && ::g::Uno::Object::Equals1(update, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret18), ret18))->update)))
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret19), ret19))->removed = true;
            return true;
        }
    }

    return false;
}

// public static void Update() [static] :299
void UpdateManager::Update()
{
    UpdateManager_typeof()->Init();
    UpdateManager::ProcessPostActions();
    UpdateManager::ProcessStages();
}

// private static void Update(Fuse.Stage stage) [static] :335
void UpdateManager::Update1(::g::Fuse::Stage* stage)
{
    UpdateManager_typeof()->Init();
    UpdateManager::_currentStage_ = stage;
    ::g::Uno::Collections::List* _exceptions = NULL;
    UpdateManager::ProcessOnces(stage, &_exceptions);
    UpdateManager::ProcessListeners(stage, &_exceptions);
    UpdateManager::ProcessDeferredActions(stage, &_exceptions);
    UpdateManager::_currentStage_ = NULL;
    UpdateManager::CheckExceptions(_exceptions);
}

// private static Fuse.Stage get_CurrentDeferredActionStage() [static] :262
::g::Fuse::Stage* UpdateManager::CurrentDeferredActionStage()
{
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret21;
    return (UpdateManager::_currentStage_ != NULL) ? (::g::Fuse::Stage*)UpdateManager::_currentStage_ : (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages_), uCRef<int>(0), &ret21), ret21);
}

// public static int get_FrameIndex() [static] :506
int UpdateManager::FrameIndex()
{
    UpdateManager_typeof()->Init();
    return UpdateManager::_frameIndex_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/UpdateManager.uno
// -----------------------------------------------------------------

// public enum UpdateStage :7
uEnumType* UpdateStage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.UpdateStage", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", -1LL,
        "Primary", 0LL,
        "Layout", 1LL,
        "Draw", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.UserEvents/1.3.1/UserEvent.ScriptClass.uno
// -----------------------------------------------------------------------------

// public partial sealed class UserEvent :9
// {
// static UserEvent() :11
static void UserEvent__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[78/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[79/*Fuse.Scripting.ScriptMethod<Fuse.UserEvent>*/], ::STRINGS[70/*"raise"*/], uDelegate::New(::TYPES[80/*Uno.Action<Fuse.Scripting.Context, Fuse.UserEvent, object[]>*/], (void*)UserEvent__raise_fn), 2)));
}

static void UserEvent_build(uType* type)
{
    ::STRINGS[70] = uString::Const("raise");
    ::STRINGS[71] = uString::Const("UserEvent requires a Name");
    ::STRINGS[72] = uString::Const("/usr/local/share/uno/Packages/Fuse.UserEvents/1.3.1/UserEvent.uno");
    ::STRINGS[73] = uString::Const("OnRooted");
    ::STRINGS[74] = uString::Const("Raise must be called with zero arguments, or one argument defining the arguments to the event");
    ::STRINGS[75] = uString::Const("/usr/local/share/uno/Packages/Fuse.UserEvents/1.3.1/UserEvent.ScriptClass.uno");
    ::STRINGS[76] = uString::Const("Raise must be called with a JavaScript object to define name/value pairs");
    ::STRINGS[77] = uString::Const("Trying to Raise on unrooted UserEvent");
    ::STRINGS[78] = uString::Const("Raise");
    ::TYPES[27] = ::g::Uno::Type_typeof();
    ::TYPES[78] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[79] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[80] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[81] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[82] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Visual_typeof();
    ::TYPES[83] = ::TYPES[7/*Fuse.Visual*/]->MakeMethod(2/*FirstChild<Fuse.UserEvent>*/, type, NULL);
    ::TYPES[84] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.UserEvent>*/, type, NULL);
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Uno::UX::Selector_typeof(),
        ::g::Fuse::UserEventDispatch_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15,
        ::g::Fuse::UserEventDispatch_typeof(), offsetof(UserEvent, Dispatch), 0);
}

::g::Fuse::Node_type* UserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 6;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(UserEvent);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.UserEvent", options);
    type->fp_build_ = UserEvent_build;
    type->fp_ctor_ = (void*)UserEvent__New2_fn;
    type->fp_cctor_ = UserEvent__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))UserEvent__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))UserEvent__OnUnrooted_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated UserEvent() :9
void UserEvent__ctor_3_fn(UserEvent* __this)
{
    __this->ctor_3();
}

// public generated UserEvent New() :9
void UserEvent__New2_fn(UserEvent** __retval)
{
    *__retval = UserEvent::New2();
}

// protected override sealed void OnRooted() :201
void UserEvent__OnRooted_fn(UserEvent* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);

    if (::g::Uno::String::op_Equality(::g::Uno::UX::Selector__op_Implicit1(__this->Name()), NULL))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[71/*"UserEvent r...*/], __this, ::STRINGS[72/*"/usr/local/...*/], 206, ::STRINGS[73/*"OnRooted"*/], NULL);
        return;
    }

    __this->Dispatch = ::g::Fuse::UserEventDispatch::GetByName(__this->Name());
}

// protected override sealed void OnUnrooted() :213
void UserEvent__OnUnrooted_fn(UserEvent* __this)
{
    __this->Dispatch = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private static void raise(Fuse.Scripting.Context c, Fuse.UserEvent n, object[] args) :66
void UserEvent__raise_fn(::g::Fuse::Scripting::Context* c, UserEvent* n, uArray* args)
{
    UserEvent::raise(c, n, args);
}

// public void Raise([Uno.Collections.Dictionary<string, object> args]) :248
void UserEvent__Raise_fn(UserEvent* __this, ::g::Uno::Collections::Dictionary* args)
{
    __this->Raise(args);
}

// internal static Fuse.UserEvent ScanTree(Fuse.Node at, Uno.UX.Selector name, Fuse.Visual& visual) :225
void UserEvent__ScanTree_fn(::g::Fuse::Node* at, ::g::Uno::UX::Selector* name, ::g::Fuse::Visual** visual, UserEvent** __retval)
{
    *__retval = UserEvent::ScanTree(at, *name, visual);
}

// public generated UserEvent() [instance] :9
void UserEvent::ctor_3()
{
    ctor_2();
}

// public void Raise([Uno.Collections.Dictionary<string, object> args]) [instance] :248
void UserEvent::Raise(::g::Uno::Collections::Dictionary* args)
{
    if (Dispatch == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[77/*"Trying to R...*/], this, ::STRINGS[72/*"/usr/local/...*/], 252, ::STRINGS[78/*"Raise"*/]);
        return;
    }

    uPtr(Dispatch)->Raise(Parent(), args);
}

// public generated UserEvent New() [static] :9
UserEvent* UserEvent::New2()
{
    UserEvent* obj1 = (UserEvent*)uNew(UserEvent_typeof());
    obj1->ctor_3();
    return obj1;
}

// private static void raise(Fuse.Scripting.Context c, Fuse.UserEvent n, object[] args) [static] :66
void UserEvent::raise(::g::Fuse::Scripting::Context* c, UserEvent* n, uArray* args)
{
    UserEvent_typeof()->Init();

    if (uPtr(args)->Length() == 0)
    {
        uPtr(n)->Raise(NULL);
        return;
    }

    if (uPtr(args)->Length() > 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[74/*"Raise must ...*/], n, ::STRINGS[75/*"/usr/local/...*/], 76, ::STRINGS[70/*"raise"*/], NULL);
        return;
    }

    ::g::Fuse::Scripting::Object* so = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[81/*Fuse.Scripting.Object*/]);

    if (so == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[76/*"Raise must ...*/], uPtr(args)->Strong<uObject*>(0), ::STRINGS[75/*"/usr/local/...*/], 83, ::STRINGS[70/*"raise"*/], NULL);
        return;
    }

    uArray* keys = uPtr(so)->Keys();
    ::g::Uno::Collections::Dictionary* evArgs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[82/*Uno.Collections.Dictionary<string, object>*/]);

    for (int i = 0; i < uPtr(keys)->Length(); i++)
    {
        uString* name = uPtr(keys)->Strong<uString*>(i);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(evArgs), name, uPtr(so)->Item(name));
    }

    uPtr(n)->Raise(evArgs);
}

// internal static Fuse.UserEvent ScanTree(Fuse.Node at, Uno.UX.Selector name, Fuse.Visual& visual) [static] :225
UserEvent* UserEvent::ScanTree(::g::Fuse::Node* at, ::g::Uno::UX::Selector name, ::g::Fuse::Visual** visual)
{
    UserEvent_typeof()->Init();

    while (at != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(at, ::TYPES[7/*Fuse.Visual*/]);

        if (v != NULL)

            for (UserEvent* ue = (UserEvent*)uPtr(v)->FirstChild(::TYPES[83/*Fuse.Visual.FirstChild<Fuse.UserEvent>*/]); ue != NULL; ue = (UserEvent*)uPtr(ue)->NextSibling(::TYPES[84/*Fuse.Node.NextSibling<Fuse.UserEvent>*/]))
                if (::g::Uno::UX::Selector__op_Equality(uPtr(ue)->Name(), name))
                {
                    *visual = v;
                    return ue;
                }

        at = uPtr(at)->ContextParent();
    }

    *visual = NULL;
    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/1.3.1/UserEvent.uno
// -----------------------------------------------------------------

// public sealed class UserEventArgs :9
// {
static void UserEventArgs_build(uType* type)
{
    ::STRINGS[79] = uString::Const("name");
    ::TYPES[60] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    ::TYPES[85] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[86] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(UserEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), offsetof(UserEventArgs, _Args), 0,
        ::g::Fuse::UserEventDispatch_typeof(), offsetof(UserEventArgs, _Dispatch), 0,
        ::g::Fuse::Node_typeof(), offsetof(UserEventArgs, _Source), 0);
}

UserEventArgs_type* UserEventArgs_typeof()
{
    static uSStrong<UserEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(UserEventArgs);
    options.TypeSize = sizeof(UserEventArgs_type);
    type = (UserEventArgs_type*)uClassType::New("Fuse.UserEventArgs", options);
    type->fp_build_ = UserEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))UserEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// internal UserEventArgs(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :23
void UserEventArgs__ctor_1_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    __this->ctor_1(dispatch, source, args);
}

// public generated Uno.Collections.Dictionary<string, object> get_Args() :21
void UserEventArgs__get_Args_fn(UserEventArgs* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->Args();
}

// private generated void set_Args(Uno.Collections.Dictionary<string, object> value) :21
void UserEventArgs__set_Args_fn(UserEventArgs* __this, ::g::Uno::Collections::Dictionary* value)
{
    __this->Args(value);
}

// internal generated Fuse.UserEventDispatch get_Dispatch() :11
void UserEventArgs__get_Dispatch_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch** __retval)
{
    *__retval = __this->Dispatch();
}

// private generated void set_Dispatch(Fuse.UserEventDispatch value) :11
void UserEventArgs__set_Dispatch_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch* value)
{
    __this->Dispatch(value);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :35
void UserEventArgs__FuseScriptingIScriptEventSerialize_fn(UserEventArgs* __this, uObject* s)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret3;
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[60/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[79/*"name"*/], ::g::Uno::UX::Selector__op_Implicit1(uPtr(__this->Dispatch())->Name()));

    if (__this->Args() != NULL)
    {
        ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->Args()), &ret3), ret3);

        {
            const auto __finally_fun = [&]()
            {
                enum1.Dispose(::TYPES[85/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (enum1.MoveNext(::TYPES[85/*Uno.Collections.Dictionary<string, object>.Enumerator*/]))
            {
                ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > m = enum1.Current(::TYPES[85/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
                ::g::Fuse::Scripting::IEventSerializer::AddObject(uInterface(uPtr(s), ::TYPES[60/*Fuse.Scripting.IEventSerializer*/]), m.Key(::TYPES[86/*Uno.Collections.KeyValuePair<string, object>*/]), m.Value(::TYPES[86/*Uno.Collections.KeyValuePair<string, object>*/]));
            }
        }
    }
}

// internal UserEventArgs New(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :23
void UserEventArgs__New2_fn(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args, UserEventArgs** __retval)
{
    *__retval = UserEventArgs::New2(dispatch, source, args);
}

// internal void Raise() :30
void UserEventArgs__Raise_fn(UserEventArgs* __this)
{
    __this->Raise();
}

// public generated Fuse.Node get_Source() :18
void UserEventArgs__get_Source_fn(UserEventArgs* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Node value) :18
void UserEventArgs__set_Source_fn(UserEventArgs* __this, ::g::Fuse::Node* value)
{
    __this->Source(value);
}

// internal UserEventArgs(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [instance] :23
void UserEventArgs::ctor_1(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    ctor_();
    Dispatch(dispatch);
    Source(source);
    Args(args);
}

// public generated Uno.Collections.Dictionary<string, object> get_Args() [instance] :21
::g::Uno::Collections::Dictionary* UserEventArgs::Args()
{
    return _Args;
}

// private generated void set_Args(Uno.Collections.Dictionary<string, object> value) [instance] :21
void UserEventArgs::Args(::g::Uno::Collections::Dictionary* value)
{
    _Args = value;
}

// internal generated Fuse.UserEventDispatch get_Dispatch() [instance] :11
::g::Fuse::UserEventDispatch* UserEventArgs::Dispatch()
{
    return _Dispatch;
}

// private generated void set_Dispatch(Fuse.UserEventDispatch value) [instance] :11
void UserEventArgs::Dispatch(::g::Fuse::UserEventDispatch* value)
{
    _Dispatch = value;
}

// internal void Raise() [instance] :30
void UserEventArgs::Raise()
{
    uPtr(Dispatch())->OnRaised(this);
}

// public generated Fuse.Node get_Source() [instance] :18
::g::Fuse::Node* UserEventArgs::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Node value) [instance] :18
void UserEventArgs::Source(::g::Fuse::Node* value)
{
    _Source = value;
}

// internal UserEventArgs New(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [static] :23
UserEventArgs* UserEventArgs::New2(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    UserEventArgs* obj2 = (UserEventArgs*)uNew(UserEventArgs_typeof());
    obj2->ctor_1(dispatch, source, args);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/1.3.1/UserEvent.uno
// -----------------------------------------------------------------

// internal sealed class UserEventDispatch :48
// {
// static generated UserEventDispatch() :48
static void UserEventDispatch__cctor__fn(uType* __type)
{
    UserEventDispatch::_userEvents_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[87/*Uno.Collections.Dictionary<Uno.UX.Selector, Fuse.UserEventDispatch>*/]));
}

static void UserEventDispatch_build(uType* type)
{
    ::TYPES[87] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Selector_typeof(), type, NULL);
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[88] = ::g::Fuse::UserEventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), offsetof(UserEventDispatch, _Name), 0,
        ::TYPES[88/*Fuse.UserEventHandler*/], offsetof(UserEventDispatch, Raised1), 0,
        ::TYPES[87/*Uno.Collections.Dictionary<Uno.UX.Selector, Fuse.UserEventDispatch>*/], (uintptr_t)&UserEventDispatch::_userEvents_, uFieldFlagsStatic);
}

uType* UserEventDispatch_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UserEventDispatch);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UserEventDispatch", options);
    type->fp_build_ = UserEventDispatch_build;
    type->fp_ctor_ = (void*)UserEventDispatch__New1_fn;
    type->fp_cctor_ = UserEventDispatch__cctor__fn;
    return type;
}

// public generated UserEventDispatch() :48
void UserEventDispatch__ctor__fn(UserEventDispatch* __this)
{
    __this->ctor_();
}

// internal void DirectRaise([Fuse.Node source], [Uno.Collections.Dictionary<string, object> args]) :75
void UserEventDispatch__DirectRaise_fn(UserEventDispatch* __this, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    __this->DirectRaise(source, args);
}

// internal static Fuse.UserEventDispatch GetByName(Uno.UX.Selector name) :57
void UserEventDispatch__GetByName_fn(::g::Uno::UX::Selector* name, UserEventDispatch** __retval)
{
    *__retval = UserEventDispatch::GetByName(*name);
}

// public generated Uno.UX.Selector get_Name() :55
void UserEventDispatch__get_Name_fn(UserEventDispatch* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(Uno.UX.Selector value) :55
void UserEventDispatch__set_Name_fn(UserEventDispatch* __this, ::g::Uno::UX::Selector* value)
{
    __this->Name(*value);
}

// public generated UserEventDispatch New() :48
void UserEventDispatch__New1_fn(UserEventDispatch** __retval)
{
    *__retval = UserEventDispatch::New1();
}

// internal void OnRaised(Fuse.UserEventArgs args) :81
void UserEventDispatch__OnRaised_fn(UserEventDispatch* __this, ::g::Fuse::UserEventArgs* args)
{
    __this->OnRaised(args);
}

// public void Raise(Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :69
void UserEventDispatch__Raise_fn(UserEventDispatch* __this, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    __this->Raise(source, args);
}

// public generated void add_Raised(Fuse.UserEventHandler value) :53
void UserEventDispatch__add_Raised_fn(UserEventDispatch* __this, uDelegate* value)
{
    __this->add_Raised(value);
}

// public generated void remove_Raised(Fuse.UserEventHandler value) :53
void UserEventDispatch__remove_Raised_fn(UserEventDispatch* __this, uDelegate* value)
{
    __this->remove_Raised(value);
}

uSStrong< ::g::Uno::Collections::Dictionary*> UserEventDispatch::_userEvents_;

// public generated UserEventDispatch() [instance] :48
void UserEventDispatch::ctor_()
{
}

// internal void DirectRaise([Fuse.Node source], [Uno.Collections.Dictionary<string, object> args]) [instance] :75
void UserEventDispatch::DirectRaise(::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    ::g::Fuse::UserEventArgs* m = ::g::Fuse::UserEventArgs::New2(this, source, args);
    OnRaised(m);
}

// public generated Uno.UX.Selector get_Name() [instance] :55
::g::Uno::UX::Selector UserEventDispatch::Name()
{
    return _Name;
}

// private generated void set_Name(Uno.UX.Selector value) [instance] :55
void UserEventDispatch::Name(::g::Uno::UX::Selector value)
{
    _Name = value;
}

// internal void OnRaised(Fuse.UserEventArgs args) [instance] :81
void UserEventDispatch::OnRaised(::g::Fuse::UserEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Raised1, NULL))
        uPtr(Raised1)->Invoke(2, this, args);
}

// public void Raise(Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [instance] :69
void UserEventDispatch::Raise(::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    ::g::Fuse::UserEventArgs* m = ::g::Fuse::UserEventArgs::New2(this, source, args);
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)::g::Fuse::UserEventArgs__Raise_fn, m), -1, 2);
}

// public generated void add_Raised(Fuse.UserEventHandler value) [instance] :53
void UserEventDispatch::add_Raised(uDelegate* value)
{
    Raised1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Raised1, value), ::TYPES[88/*Fuse.UserEventHandler*/]);
}

// public generated void remove_Raised(Fuse.UserEventHandler value) [instance] :53
void UserEventDispatch::remove_Raised(uDelegate* value)
{
    Raised1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Raised1, value), ::TYPES[88/*Fuse.UserEventHandler*/]);
}

// internal static Fuse.UserEventDispatch GetByName(Uno.UX.Selector name) [static] :57
UserEventDispatch* UserEventDispatch::GetByName(::g::Uno::UX::Selector name)
{
    bool ret2;
    UserEventDispatch* current;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(UserEventDispatch::_userEvents_), uCRef(name), (void**)(&current), &ret2), ret2))
        return current;

    UserEventDispatch* ue = UserEventDispatch::New1();
    ue->Name(name);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(UserEventDispatch::_userEvents_), uCRef(name), ue);
    return ue;
}

// public generated UserEventDispatch New() [static] :48
UserEventDispatch* UserEventDispatch::New1()
{
    UserEventDispatch* obj1 = (UserEventDispatch*)uNew(UserEventDispatch_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/1.3.1/UserEvent.uno
// -----------------------------------------------------------------

// public delegate void UserEventHandler(object sender, Fuse.UserEventArgs args) :46
uDelegateType* UserEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.UserEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::UserEventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/IViewport.uno
// ------------------------------------------------------------

// public static class ViewportHelpers :81
// {
static void ViewportHelpers_build(uType* type)
{
    ::TYPES[23] = ::g::Fuse::ICommonViewport_typeof();
}

uClassType* ViewportHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.ViewportHelpers", options);
    type->fp_build_ = ViewportHelpers_build;
    return type;
}

// public static float2 LocalPlaneIntersection(Fuse.Ray local) :112
void ViewportHelpers__LocalPlaneIntersection_fn(::g::Fuse::Ray* local, ::g::Uno::Float2* __retval)
{
    *__retval = ViewportHelpers::LocalPlaneIntersection(*local);
}

// public static Fuse.Ray PointToWorldRay(Fuse.IViewport viewport, float4x4 viewProjectionInverse, float2 pointPos) :83
void ViewportHelpers__PointToWorldRay_fn(uObject* viewport, ::g::Uno::Float4x4* viewProjectionInverse, ::g::Uno::Float2* pointPos, ::g::Fuse::Ray* __retval)
{
    *__retval = ViewportHelpers::PointToWorldRay(viewport, *viewProjectionInverse, *pointPos);
}

// public static Fuse.Ray WorldToLocalRay(Fuse.IViewport viewport, Fuse.IViewport world, Fuse.Ray worldRay, Fuse.Visual where) :98
void ViewportHelpers__WorldToLocalRay_fn(uObject* viewport, uObject* world, ::g::Fuse::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Fuse::Ray* __retval)
{
    *__retval = ViewportHelpers::WorldToLocalRay(viewport, world, *worldRay, where);
}

// public static float2 LocalPlaneIntersection(Fuse.Ray local) [static] :112
::g::Uno::Float2 ViewportHelpers::LocalPlaneIntersection(::g::Fuse::Ray local)
{
    float t = -local.Position.Z / local.Direction.Z;
    ::g::Uno::Float3 plane = ::g::Uno::Float3__op_Addition2(local.Position, ::g::Uno::Float3__op_Multiply1(local.Direction, t));
    return ::g::Uno::Float2__New2(plane.X, plane.Y);
}

// public static Fuse.Ray PointToWorldRay(Fuse.IViewport viewport, float4x4 viewProjectionInverse, float2 pointPos) [static] :83
::g::Fuse::Ray ViewportHelpers::PointToWorldRay(uObject* viewport, ::g::Uno::Float4x4 viewProjectionInverse, ::g::Uno::Float2 pointPos)
{
    ::g::Uno::Float2 p = ::g::Uno::Float2__New2(((pointPos.X / ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[23/*Fuse.ICommonViewport*/])).X) * 2.0f) - 1.0f, ((pointPos.Y / ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[23/*Fuse.ICommonViewport*/])).Y) * -2.0f) + 1.0f);
    ::g::Uno::Float4x4 vpi = viewProjectionInverse;
    ::g::Uno::Float3 r0 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New4(p, -1.0f), vpi);
    ::g::Uno::Float3 r1 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New4(p, 1.0f), vpi);
    return ::g::Fuse::Ray__New1(r0, ::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(r1, r0)));
}

// public static Fuse.Ray WorldToLocalRay(Fuse.IViewport viewport, Fuse.IViewport world, Fuse.Ray worldRay, Fuse.Visual where) [static] :98
::g::Fuse::Ray ViewportHelpers::WorldToLocalRay(uObject* viewport, uObject* world, ::g::Fuse::Ray worldRay, ::g::Fuse::Visual* where)
{
    if (where == world)
        return worldRay;

    ::g::Uno::Float4x4 wi = uPtr(where)->WorldTransformInverse();
    ::g::Uno::Float3 r0 = ::g::Uno::Vector::TransformCoordinate1(worldRay.Position, wi);
    ::g::Uno::Float3 r1 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__op_Addition2(worldRay.Position, worldRay.Direction), wi);
    return ::g::Fuse::Ray__New1(r0, ::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(r1, r0)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.BeginRemove.uno
// ---------------------------------------------------------------------

// public interfacemodifiers class Visual :61
// {
// static Visual() :11
static void Visual__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    ::g::Uno::UX::Selector_typeof()->Init();
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    Visual::_isContextEnabledChangedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Visual::_isEnabledName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("IsEnabled"));
    Visual::_isVisibleChangedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Visual::_layerProperty_ = ::g::Fuse::Properties::CreateHandle();
    Visual::_layoutRoleProperty_ = ::g::Fuse::Properties::CreateHandle();
    Visual::_parameterChangedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Visual::ParameterName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[64/*"Parameter"*/]);
    Visual::_resourcesHandle_ = ::g::Fuse::Properties::CreateHandle();
    Visual::_emptyVisuals_ = uArray::New(__type->Array(), 0);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[78/*Fuse.Scripting.ScriptMember[]*/], 3, (::g::Fuse::Scripting::ScriptProperty1*)::g::Fuse::Scripting::ScriptProperty1::New1(::g::Fuse::Scripting::ScriptProperty1_typeof()->MakeType(__type, ::TYPES[28/*string*/], NULL), ::STRINGS[64/*"Parameter"*/], uDelegate::New(::g::Uno::Func1_typeof()->MakeType(__type, ::g::Uno::UX::Property1_typeof()->MakeType(::TYPES[28/*string*/], NULL), NULL), (void*)Visual__getParameterProperty_fn), uString::Const(".notNull().parseJson()")), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("onParameterChanged"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, ::TYPES[12/*object[]*/], NULL), (void*)Visual__onParameterChanged_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("bringIntoView"), uDelegate::New(::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, ::TYPES[12/*object[]*/], NULL), (void*)Visual__bringIntoView_fn), 2)));
}

static void Visual_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof(),
        ::g::Fuse::Input::Focus_typeof(),
        ::g::Uno::UX::Resource_typeof(),
        ::g::Fuse::Resources::ResourceRegistry_typeof(),
        ::g::Fuse::VisualBounds_typeof());
    type->MethodTypes[0]->SetPrecalc(
        ::g::Fuse::FastProperty1Link1_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::g::Fuse::FastProperty2Link1_typeof()->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        type->MakeMethod(0/*Find<T>*/, type->MethodTypes[3]->U(0), NULL));
    type->MethodTypes[4]->SetPrecalc(
        type->MakeMethod(1/*Find<T>*/, type->MethodTypes[4]->U(0), NULL));
    type->MethodTypes[5]->SetPrecalc(
        ::g::Fuse::FastProperty1Link1_typeof()->MakeType(type->MethodTypes[5]->U(0), NULL));
    type->MethodTypes[6]->SetPrecalc(
        ::g::Fuse::FastProperty2Link1_typeof()->MakeType(type->MethodTypes[6]->U(0), NULL));
    type->MethodTypes[9]->SetPrecalc(
        type->MakeMethod(0/*Find<T>*/, type->MethodTypes[9]->U(0), NULL),
        type->MakeMethod(5/*Insert<T>*/, type->MethodTypes[9]->U(0), NULL));
    type->MethodTypes[10]->SetPrecalc(
        type->MakeMethod(1/*Find<T>*/, type->MethodTypes[10]->U(0), NULL),
        type->MakeMethod(6/*Insert<T>*/, type->MethodTypes[10]->U(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Visual_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Visual_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Visual_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Visual_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Visual_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Visual_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Visual_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Visual_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(Visual_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type, NULL), offsetof(Visual_type, interface9),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Visual_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Visual_type, interface11));
    type->SetFields(15,
        ::g::Fuse::LayoutParams_typeof(), offsetof(Visual, _ambLayoutParams), 0,
        ::g::Uno::Float2_typeof(), offsetof(Visual, _ambMargin), 0,
        ::g::Uno::Float2_typeof(), offsetof(Visual, _ambPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(Visual, _cachedRenderTargetSize), 0,
        type->Array(), offsetof(Visual, _cachedZOrder), 0,
        ::g::Uno::Int_typeof(), offsetof(Visual, _childCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(Visual, _childrenShouldRoot), 0,
        ::g::Uno::Double_typeof(), offsetof(Visual, _drawCost), 0,
        ::g::Fuse::FastProperty1Link_typeof(), offsetof(Visual, _fastProperties1), 0,
        ::g::Fuse::FastProperty2Link_typeof(), offsetof(Visual, _fastProperties2), 0,
        ::g::Uno::Int_typeof(), offsetof(Visual, _fastPropertyBits1), 0,
        ::g::Uno::Int_typeof(), offsetof(Visual, _fastPropertyBits2), 0,
        ::g::Fuse::Node_typeof(), offsetof(Visual, _firstChild), 0,
        type, offsetof(Visual, _focusDelegate), 0,
        ::g::Uno::Bool_typeof(), offsetof(Visual, _hasMarginBox), 0,
        ::g::Fuse::VisualBounds_typeof(), offsetof(Visual, _hitTestBoundsCache), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Visual__InteractionItem_typeof(), NULL), offsetof(Visual, _interactions), 0,
        ::g::Uno::Bool_typeof(), offsetof(Visual, _isFocusable), 0,
        ::g::Uno::Bool_typeof(), offsetof(Visual, _isHitTestBoundsCacheValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(Visual, _isVisibleCached), 0,
        ::g::Fuse::Node_typeof(), offsetof(Visual, _lastChild), 0,
        ::g::Uno::Int_typeof(), offsetof(Visual, _lastInvalidate), 0,
        ::g::Fuse::InvalidateLayoutReason_typeof(), offsetof(Visual, _layoutDirty), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(Visual, _localTransform), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(Visual, _localTransformInverse), 0,
        ::g::Uno::Int_typeof(), offsetof(Visual, _naturalZOrder), 0,
        ::g::Uno::Int_typeof(), offsetof(Visual, _nodebits), 0,
        ::g::Uno::Int_typeof(), offsetof(Visual, _observerCount), 0,
        ::g::Uno::String_typeof(), offsetof(Visual, _parameter), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::Function_typeof(), NULL), offsetof(Visual, _parameterListeners), 0,
        Visual__ParameterProperty_typeof(), offsetof(Visual, _parameterProperty), 0,
        ::g::Uno::Int_typeof(), offsetof(Visual, _parentWorldTransformVersion), 0,
        Visual__SafeIterator_typeof(), offsetof(Visual, _safeIterator), 0,
        ::g::Fuse::TemplateSourceImpl_typeof(), offsetof(Visual, _templates), 0,
        ::g::Uno::Int_typeof(), offsetof(Visual, _thisID), 0,
        ::g::Uno::Int_typeof(), offsetof(Visual, _transformCount), 0,
        ::g::Fuse::IViewport_typeof(), offsetof(Visual, _viewport), 0,
        ::g::Uno::Int_typeof(), offsetof(Visual, _visualChildCount), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(Visual, _worldTransform), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(Visual, _worldTransformInverse), 0,
        ::g::Uno::Int_typeof(), offsetof(Visual, _worldTransformVersion), 0,
        ::g::Uno::Int_typeof(), offsetof(Visual, _wtiListeners), 0,
        ::g::Uno::Bool_typeof(), offsetof(Visual, _wtiRooted), 0,
        ::g::Uno::Float_typeof(), offsetof(Visual, _zOffset), 0,
        ::g::Uno::Bool_typeof(), offsetof(Visual, _zOrderFixed), 0,
        ::g::Fuse::Node_typeof()->Array(), offsetof(Visual, Children_cachedArray), 0,
        ::g::Fuse::Controls::Native::ViewHandle_typeof(), offsetof(Visual, _ViewHandle), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(Visual, _worldTransformInvalidated1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(Visual, IsInteractingChanged1), 0,
        ::g::Fuse::RequestBringIntoViewHandler_typeof(), offsetof(Visual, RequestBringIntoView1), 0,
        type->Array(), (uintptr_t)&Visual::_emptyVisuals_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Visual::_isContextEnabledChangedHandle_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Visual::_isEnabledName_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Visual::_isVisibleChangedHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Visual::_layerProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Visual::_layoutRoleProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Visual::_parameterChangedHandle_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&Visual::_performingLayout_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Visual::_resourcesHandle_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&Visual::_thisIDEnumerator_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Visual::ParameterName_, uFieldFlagsStatic);
}

Visual_type* Visual_typeof()
{
    static uSStrong<Visual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 76;
    options.InterfaceCount = 12;
    options.MethodTypeCount = 11;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(Visual);
    options.TypeSize = sizeof(Visual_type);
    type = (Visual_type*)uClassType::New("Fuse.Visual", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->MethodTypes[1] = type->NewMethodType(1, 1,0);
    type->MethodTypes[2] = type->NewMethodType(1, 0,0);
    type->MethodTypes[3] = type->NewMethodType(1, 1,0);
    type->MethodTypes[4] = type->NewMethodType(1, 1,0);
    type->MethodTypes[5] = type->NewMethodType(1, 1,0);
    type->MethodTypes[6] = type->NewMethodType(1, 1,0);
    type->MethodTypes[7] = type->NewMethodType(1, 0,0);
    type->MethodTypes[8] = type->NewMethodType(1, 0,0);
    type->MethodTypes[9] = type->NewMethodType(1, 2,0);
    type->MethodTypes[10] = type->NewMethodType(1, 2,0);
    type->fp_build_ = Visual_build;
    type->fp_cctor_ = Visual__cctor_1_fn;
    type->fp_get_AbsoluteViewportOrigin = Visual__get_AbsoluteViewportOrigin_fn;
    type->fp_get_CanAdjustMarginBox = Visual__get_CanAdjustMarginBox_fn;
    type->fp_DrawSelection = Visual__DrawSelection_fn;
    type->fp_GetMarginSize = Visual__GetMarginSize_fn;
    type->fp_get_HitTestChildrenBounds = Visual__get_HitTestChildrenBounds_fn;
    type->fp_get_HitTestLocalBounds = Visual__get_HitTestLocalBounds_fn;
    type->fp_InvalidateLocalTransform = Visual__InvalidateLocalTransform_fn;
    type->fp_get_IsLayoutRoot = Visual__get_IsLayoutRoot_fn;
    type->fp_get_IsLocalVisible = Visual__get_IsLocalVisible_fn;
    type->fp_IsMarginBoxDependent = Visual__IsMarginBoxDependent_fn;
    type->fp_get_LocalRenderBounds = Visual__get_LocalRenderBounds_fn;
    type->fp_OnAdjustMarginBoxPosition = Visual__OnAdjustMarginBoxPosition_fn;
    type->fp_OnArrangeMarginBox = Visual__OnArrangeMarginBox_fn;
    type->fp_OnChildAdded = Visual__OnChildAdded_fn;
    type->fp_OnChildMoved = Visual__OnChildMoved_fn;
    type->fp_OnChildRemoved = Visual__OnChildRemoved_fn;
    type->fp_OnHitTest = Visual__OnHitTest_fn;
    type->fp_OnInvalidateLayout = Visual__OnInvalidateLayout_fn;
    type->fp_OnInvalidateRenderBounds = Visual__OnInvalidateRenderBounds_fn;
    type->fp_OnInvalidateVisual = Visual__OnInvalidateVisual_fn;
    type->fp_OnInvalidateVisualComposition = Visual__OnInvalidateVisualComposition_fn;
    type->fp_OnIsContextEnabledChanged = Visual__OnIsContextEnabledChanged_fn;
    type->fp_OnIsVisibleChanged = Visual__OnIsVisibleChanged_fn;
    type->fp_OnPropertyChanged2 = Visual__OnPropertyChanged2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Visual__OnRooted_fn;
    type->fp_OnRootedPreChildren = Visual__OnRootedPreChildren_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Visual__OnUnrooted_fn;
    type->fp_OnZOrderInvalidated = Visual__OnZOrderInvalidated_fn;
    type->fp_Prepare = Visual__Prepare_fn;
    type->fp_PrependImplicitTransform = Visual__PrependImplicitTransform_fn;
    type->fp_PrependInverseTransformOrigin = Visual__PrependInverseTransformOrigin_fn;
    type->fp_PrependTransformOrigin = Visual__PrependTransformOrigin_fn;
    type->fp_TryGetResource = (void(*)(::g::Fuse::Node*, uString*, uDelegate*, uObject**, bool*))Visual__TryGetResource_fn;
    type->fp_VisitSubtree = (void(*)(::g::Fuse::Node*, uDelegate*))Visual__VisitSubtree_fn;
    type->fp_get_VisualContext = Visual__get_VisualContext_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int*))Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Visual__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated Visual() :61
void Visual__ctor_2_fn(Visual* __this)
{
    __this->ctor_2();
}

// private bool get__areChildrenFlat() :63
void Visual__get__areChildrenFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->_areChildrenFlat();
}

// private void set__areChildrenFlat(bool value) :64
void Visual__set__areChildrenFlat_fn(Visual* __this, bool* value)
{
    __this->_areChildrenFlat(*value);
}

// private bool get__areChildrenFlatCached() :57
void Visual__get__areChildrenFlatCached_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->_areChildrenFlatCached();
}

// private void set__areChildrenFlatCached(bool value) :58
void Visual__set__areChildrenFlatCached_fn(Visual* __this, bool* value)
{
    __this->_areChildrenFlatCached(*value);
}

// private bool get__isLocalFlat() :29
void Visual__get__isLocalFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->_isLocalFlat();
}

// private void set__isLocalFlat(bool value) :30
void Visual__set__isLocalFlat_fn(Visual* __this, bool* value)
{
    __this->_isLocalFlat(*value);
}

// private bool get__isLocalFlatCached() :24
void Visual__get__isLocalFlatCached_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->_isLocalFlatCached();
}

// private void set__isLocalFlatCached(bool value) :25
void Visual__set__isLocalFlatCached_fn(Visual* __this, bool* value)
{
    __this->_isLocalFlatCached(*value);
}

// private generated void add__worldTransformInvalidated(Uno.EventHandler value) :51
void Visual__add__worldTransformInvalidated_fn(Visual* __this, uDelegate* value)
{
    __this->add__worldTransformInvalidated(value);
}

// private generated void remove__worldTransformInvalidated(Uno.EventHandler value) :51
void Visual__remove__worldTransformInvalidated_fn(Visual* __this, uDelegate* value)
{
    __this->remove__worldTransformInvalidated(value);
}

// protected virtual float2 get_AbsoluteViewportOrigin() :482
void Visual__get_AbsoluteViewportOrigin_fn(Visual* __this, ::g::Uno::Float2* __retval)
{
    if (__this->Parent() != NULL)
        return *__retval = uPtr(__this->Parent())->AbsoluteViewportOrigin(), void();

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public float get_AbsoluteZoom() :296
void Visual__get_AbsoluteZoom_fn(Visual* __this, float* __retval)
{
    *__retval = __this->AbsoluteZoom();
}

// public void Add(Fuse.Node item) :177
void Visual__Add1_fn(Visual* __this, ::g::Fuse::Node* item)
{
    __this->Add1(item);
}

// public void AddDrawCost(double cost) :70
void Visual__AddDrawCost_fn(Visual* __this, double* cost)
{
    __this->AddDrawCost(*cost);
}

// private void AddEventHandler(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne, object handler) :44
void Visual__AddEventHandler_fn(Visual* __this, ::g::Fuse::PropertyHandle* ph, int* ne, uObject* handler)
{
    __this->AddEventHandler(ph, *ne, handler);
}

// private void AddParameterChangedListener(Fuse.Scripting.Function func) :58
void Visual__AddParameterChangedListener_fn(Visual* __this, ::g::Fuse::Scripting::Function* func)
{
    __this->AddParameterChangedListener(func);
}

// internal void AdjustMarginBoxPosition(float2 position) :467
void Visual__AdjustMarginBoxPosition_fn(Visual* __this, ::g::Uno::Float2* position)
{
    __this->AdjustMarginBoxPosition(*position);
}

// internal bool get_AreChildrenFlat() :70
void Visual__get_AreChildrenFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->AreChildrenFlat();
}

// public float2 ArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :432
void Visual__ArrangeMarginBox_fn(Visual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ArrangeMarginBox(*position, *lp);
}

// private void AssignNaturalZOrder() :121
void Visual__AssignNaturalZOrder_fn(Visual* __this)
{
    __this->AssignNaturalZOrder();
}

// public void BeginInteraction(object id, Uno.Action cancelled) :27
void Visual__BeginInteraction_fn(Visual* __this, uObject* id, uDelegate* cancelled)
{
    __this->BeginInteraction(id, cancelled);
}

// public void BeginRemoveChild(Fuse.Node n, [Uno.Action<Fuse.Node> then]) :96
void Visual__BeginRemoveChild_fn(Visual* __this, ::g::Fuse::Node* n, uDelegate* then)
{
    __this->BeginRemoveChild(n, then);
}

// public void BeginRemoveVisual(Fuse.Visual child, [Uno.Action<Fuse.Node> then]) :64
void Visual__BeginRemoveVisual_fn(Visual* __this, Visual* child, uDelegate* then)
{
    __this->BeginRemoveVisual(child, then);
}

// private static void bringIntoView(Fuse.Scripting.Context c, Fuse.Visual n, object[] args) :43
void Visual__bringIntoView_fn(::g::Fuse::Scripting::Context* c, Visual* n, uArray* args)
{
    Visual::bringIntoView(c, n, args);
}

// public void BringIntoView() :503
void Visual__BringIntoView_fn(Visual* __this)
{
    __this->BringIntoView();
}

// public void BringToFront(Fuse.Visual item) :47
void Visual__BringToFront_fn(Visual* __this, Visual* item)
{
    __this->BringToFront(item);
}

// internal bool CalcAreChildrenFlat() :81
void Visual__CalcAreChildrenFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->CalcAreChildrenFlat();
}

// internal bool CalcIsLocalFlat() :47
void Visual__CalcIsLocalFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->CalcIsLocalFlat();
}

// internal Fuse.VisualBounds CalcRenderBoundsInParentSpace() :302
void Visual__CalcRenderBoundsInParentSpace_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->CalcRenderBoundsInParentSpace();
}

// private Fuse.FastMatrix CalcWorldTransform() :180
void Visual__CalcWorldTransform_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->CalcWorldTransform();
}

// internal virtual bool get_CanAdjustMarginBox() :472
void Visual__get_CanAdjustMarginBox_fn(Visual* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public void CancelInteractions([Fuse.Visual.CancelInteractionsType how]) :59
void Visual__CancelInteractions_fn(Visual* __this, int* how)
{
    __this->CancelInteractions(*how);
}

// internal void CancelPendingRemove() :118
void Visual__CancelPendingRemove_fn(Visual* __this)
{
    __this->CancelPendingRemove();
}

// private void CheckWorldTransformVersion() :101
void Visual__CheckWorldTransformVersion_fn(Visual* __this)
{
    __this->CheckWorldTransformVersion();
}

// public int get_ChildCount() :70
void Visual__get_ChildCount_fn(Visual* __this, int* __retval)
{
    *__retval = __this->ChildCount();
}

// public Uno.Collections.IList<Fuse.Node> get_Children() :80
void Visual__get_Children_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->Children();
}

// private void Children_Add(Fuse.Node n) :94
void Visual__Children_Add_fn(Visual* __this, ::g::Fuse::Node* n)
{
    __this->Children_Add(n);
}

// private void Children_Clear() :75
void Visual__Children_Clear_fn(Visual* __this)
{
    __this->Children_Clear();
}

// private bool Children_Contains(Fuse.Node n) :210
void Visual__Children_Contains_fn(Visual* __this, ::g::Fuse::Node* n, bool* __retval)
{
    *__retval = __this->Children_Contains(n);
}

// private Fuse.Node[] Children_GetCachedArray() :17
void Visual__Children_GetCachedArray_fn(Visual* __this, uArray** __retval)
{
    *__retval = __this->Children_GetCachedArray();
}

// private Uno.Collections.IEnumerator<Fuse.Node> Children_GetEnumerator() :46
void Visual__Children_GetEnumerator_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->Children_GetEnumerator();
}

// private void Children_Insert(int index, Fuse.Node newNode) :168
void Visual__Children_Insert_fn(Visual* __this, int* index, ::g::Fuse::Node* newNode)
{
    __this->Children_Insert(*index, newNode);
}

// private void Children_InsertAfter(Fuse.Node preceeder, Fuse.Node newNode) :174
void Visual__Children_InsertAfter_fn(Visual* __this, ::g::Fuse::Node* preceeder, ::g::Fuse::Node* newNode)
{
    __this->Children_InsertAfter(preceeder, newNode);
}

// private void Children_Invalidate() :39
void Visual__Children_Invalidate_fn(Visual* __this)
{
    __this->Children_Invalidate();
}

// private Fuse.Node Children_ItemAt(int index) :33
void Visual__Children_ItemAt_fn(Visual* __this, int* index, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Children_ItemAt(*index);
}

// private Fuse.Node Children_ItemBefore(int index) :162
void Visual__Children_ItemBefore_fn(Visual* __this, int* index, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Children_ItemBefore(*index);
}

// private void Children_MakeOrphan(Fuse.Node child) :60
void Visual__Children_MakeOrphan_fn(Visual* __this, ::g::Fuse::Node* child)
{
    __this->Children_MakeOrphan(child);
}

// private void Children_MakeParent(Fuse.Visual parent, Fuse.Node child) :54
void Visual__Children_MakeParent_fn(Visual* __this, Visual* parent, ::g::Fuse::Node* child)
{
    __this->Children_MakeParent(parent, child);
}

// private bool Children_Remove(Fuse.Node n) :115
void Visual__Children_Remove_fn(Visual* __this, ::g::Fuse::Node* n, bool* __retval)
{
    *__retval = __this->Children_Remove(n);
}

// private void Clear(Fuse.FastProperty1 p) :92
void Visual__Clear_fn(Visual* __this, int* p)
{
    __this->Clear(*p);
}

// private void Clear(Fuse.FastProperty2 p) :71
void Visual__Clear1_fn(Visual* __this, int* p)
{
    __this->Clear1(*p);
}

// internal void ClearBit(Fuse.FastProperty1 p) :108
void Visual__ClearBit_fn(Visual* __this, int* p)
{
    __this->ClearBit(*p);
}

// internal void ClearBit(Fuse.FastProperty2 p) :87
void Visual__ClearBit1_fn(Visual* __this, int* p)
{
    __this->ClearBit1(*p);
}

// private void ClearBit(Fuse.Visual.VisualBits nb) :31
void Visual__ClearBit2_fn(Visual* __this, int* nb)
{
    __this->ClearBit2(*nb);
}

// private Fuse.Visual[] ComputeZOrder() :93
void Visual__ComputeZOrder_fn(Visual* __this, uArray** __retval)
{
    *__retval = __this->ComputeZOrder();
}

// internal void ConcludePendingRemove() :126
void Visual__ConcludePendingRemove_fn(Visual* __this)
{
    __this->ConcludePendingRemove();
}

// private void DecrementWTIListener() :26
void Visual__DecrementWTIListener_fn(Visual* __this)
{
    __this->DecrementWTIListener();
}

// public double get_DrawCost() :68
void Visual__get_DrawCost_fn(Visual* __this, double* __retval)
{
    *__retval = __this->DrawCost();
}

// private void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float lineWidth, float4 color, float4x4 localToClipTransform) :57
void Visual__DrawLocalRect_fn(Visual* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect, float* lineWidth, ::g::Uno::Float4* color, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->DrawLocalRect(dc, *rect, *lineWidth, *color, *localToClipTransform);
}

// protected void DrawLocalSelectionRect(Fuse.DrawContext dc, Uno.Rect rect) :62
void Visual__DrawLocalSelectionRect_fn(Visual* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect)
{
    __this->DrawLocalSelectionRect(dc, *rect);
}

// public virtual void DrawSelection(Fuse.DrawContext dc) :72
void Visual__DrawSelection_fn(Visual* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawLocalSelectionRect(dc, uPtr(__this->LocalRenderBounds())->FlatRect());
}

// public void EndInteraction(object id) :36
void Visual__EndInteraction_fn(Visual* __this, uObject* id)
{
    __this->EndInteraction(id);
}

// private Fuse.FastProperty1Link<T> Find<T>(Fuse.FastProperty1 p) :155
void Visual__Find_fn(Visual* __this, uType* __type, int* p, ::g::Fuse::FastProperty1Link1** __retval)
{
    *__retval = __this->Find(__type, *p);
}

// private Fuse.FastProperty2Link<T> Find<T>(Fuse.FastProperty2 p) :134
void Visual__Find1_fn(Visual* __this, uType* __type, int* p, ::g::Fuse::FastProperty2Link1** __retval)
{
    *__retval = __this->Find1(__type, *p);
}

// private Fuse.FastProperty1Link FindPrevious(Fuse.FastProperty1 p) :142
void Visual__FindPrevious_fn(Visual* __this, int* p, ::g::Fuse::FastProperty1Link** __retval)
{
    *__retval = __this->FindPrevious(*p);
}

// private Fuse.FastProperty2Link FindPrevious(Fuse.FastProperty2 p) :121
void Visual__FindPrevious1_fn(Visual* __this, int* p, ::g::Fuse::FastProperty2Link** __retval)
{
    *__retval = __this->FindPrevious1(*p);
}

// public Uno.UX.Template FindTemplate(string key) :70
void Visual__FindTemplate_fn(Visual* __this, uString* key, ::g::Uno::UX::Template** __retval)
{
    *__retval = __this->FindTemplate(key);
}

// public Fuse.IViewport FindViewport() :192
void Visual__FindViewport_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->FindViewport();
}

// public T FirstChild<T>() :34
void Visual__FirstChild_fn(Visual* __this, uType* __type, ::g::Fuse::Node** __retval)
{
    *__retval = __this->FirstChild(__type);
}

// internal T Get<T>(Fuse.FastProperty1 p, T defaultValue) :73
void Visual__Get_fn(Visual* __this, uType* __type, int* p, void* defaultValue, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Visual.Find<T>*/),
    };
    int p_ = *p;

    if (__this->HasBit(p_))
        return __retval.Store(uPtr((::g::Fuse::FastProperty1Link1*)__this->Find(__types[0], p_))->Value()), void();
    else
        return __retval.Store(__type->U(0), defaultValue), void();
}

// internal T Get<T>(Fuse.FastProperty2 p, T defaultValue) :52
void Visual__Get1_fn(Visual* __this, uType* __type, int* p, void* defaultValue, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Visual.Find<T>*/),
    };
    int p_ = *p;

    if (__this->HasBit1(p_))
        return __retval.Store(uPtr((::g::Fuse::FastProperty2Link1*)__this->Find1(__types[0], p_))->Value()), void();
    else
        return __retval.Store(__type->U(0), defaultValue), void();
}

// internal Fuse.Visual[] GetCachedZOrder() :33
void Visual__GetCachedZOrder_fn(Visual* __this, uArray** __retval)
{
    *__retval = __this->GetCachedZOrder();
}

// public Fuse.Visual GetHitWindowPoint(float2 windowPoint) :69
void Visual__GetHitWindowPoint_fn(Visual* __this, ::g::Uno::Float2* windowPoint, Visual** __retval)
{
    *__retval = __this->GetHitWindowPoint(*windowPoint);
}

// public virtual float2 GetMarginSize(Fuse.LayoutParams lp) :139
void Visual__GetMarginSize_fn(Visual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// private static Uno.UX.Property<string> getParameterProperty(Fuse.Visual v) :31
void Visual__getParameterProperty_fn(Visual* v, ::g::Uno::UX::Property1** __retval)
{
    *__retval = Visual::getParameterProperty(v);
}

// public float4x4 GetTransformTo(Fuse.Visual other) :192
void Visual__GetTransformTo_fn(Visual* __this, Visual* other, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetTransformTo(other);
}

// private float4x4 GetTransformToAncestor(Fuse.Visual ancestor) :221
void Visual__GetTransformToAncestor_fn(Visual* __this, Visual* ancestor, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetTransformToAncestor(ancestor);
}

// internal bool HasBit(Fuse.FastProperty1 p) :103
void Visual__HasBit_fn(Visual* __this, int* p, bool* __retval)
{
    *__retval = __this->HasBit(*p);
}

// internal bool HasBit(Fuse.FastProperty2 p) :82
void Visual__HasBit1_fn(Visual* __this, int* p, bool* __retval)
{
    *__retval = __this->HasBit1(*p);
}

// private bool HasBit(Fuse.Visual.VisualBits nb) :29
void Visual__HasBit2_fn(Visual* __this, int* nb, bool* __retval)
{
    *__retval = __this->HasBit2(*nb);
}

// public bool get_HasChildren() :21
void Visual__get_HasChildren_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasChildren();
}

// private bool get_HasExplicitTransforms() :32
void Visual__get_HasExplicitTransforms_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasExplicitTransforms();
}

// internal bool get_HasMarginBox() :410
void Visual__get_HasMarginBox_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasMarginBox();
}

// public bool get_HasPendingRemove() :135
void Visual__get_HasPendingRemove_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasPendingRemove();
}

// private bool get_HasResources() :94
void Visual__get_HasResources_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasResources();
}

// public bool get_HasVisualChildren() :140
void Visual__get_HasVisualChildren_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasVisualChildren();
}

// public void HitTest(Fuse.HitTestContext htc) :26
void Visual__HitTest_fn(Visual* __this, ::g::Fuse::HitTestContext* htc)
{
    __this->HitTest(htc);
}

// public Fuse.VisualBounds get_HitTestBounds() :105
void Visual__get_HitTestBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->HitTestBounds();
}

// protected virtual Fuse.VisualBounds get_HitTestChildrenBounds() :134
void Visual__get_HitTestChildrenBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = ::g::Fuse::VisualBounds::Merge1(__this->VisualChildren(), 1), void();
}

// protected virtual Fuse.VisualBounds get_HitTestLocalBounds() :126
void Visual__get_HitTestLocalBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = ::g::Fuse::VisualBounds::Empty(), void();
}

// internal Fuse.Visual.HitTestTransformMode get_HitTestTransform() :18
void Visual__get_HitTestTransform_fn(Visual* __this, int* __retval)
{
    *__retval = __this->HitTestTransform();
}

// protected float2 IfSnap(float2 p) :263
void Visual__IfSnap_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IfSnap(*p);
}

// protected float2 IfSnapDown(float2 p) :288
void Visual__IfSnapDown_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IfSnapDown(*p);
}

// protected float2 IfSnapUp(float2 p) :268
void Visual__IfSnapUp_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IfSnapUp(*p);
}

// private void IncrementWTIListener() :20
void Visual__IncrementWTIListener_fn(Visual* __this)
{
    __this->IncrementWTIListener();
}

// public void Insert(int index, Fuse.Node item) :220
void Visual__Insert1_fn(Visual* __this, int* index, ::g::Fuse::Node* item)
{
    __this->Insert1(*index, item);
}

// private void Insert<T>(Fuse.FastProperty1 p, T value) :124
void Visual__Insert2_fn(Visual* __this, uType* __type, int* p, void* value)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FastProperty1Link<T>*/),
    };
    ::g::Fuse::FastProperty1Link1* ret20;
    int p_ = *p;
    ::g::Fuse::FastProperty1Link1* nl = (::g::Fuse::FastProperty1Link1__New2_fn(__types[0], uCRef<int>(p_), value, &ret20), ret20);

    if (__this->_fastProperties1 == NULL)
        __this->_fastProperties1 = nl;
    else
    {
        ::g::Fuse::FastProperty1Link* last = __this->_fastProperties1;

        while (uPtr(last)->Next != NULL)
            last = uPtr(last)->Next;

        uPtr(last)->Next = nl;
    }

    __this->SetBit(p_);
}

// private void Insert<T>(Fuse.FastProperty2 p, T value) :103
void Visual__Insert3_fn(Visual* __this, uType* __type, int* p, void* value)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FastProperty2Link<T>*/),
    };
    ::g::Fuse::FastProperty2Link1* ret21;
    int p_ = *p;
    ::g::Fuse::FastProperty2Link1* nl = (::g::Fuse::FastProperty2Link1__New2_fn(__types[0], uCRef<int>(p_), value, &ret21), ret21);

    if (__this->_fastProperties2 == NULL)
        __this->_fastProperties2 = nl;
    else
    {
        ::g::Fuse::FastProperty2Link* last = __this->_fastProperties2;

        while (uPtr(last)->Next != NULL)
            last = uPtr(last)->Next;

        uPtr(last)->Next = nl;
    }

    __this->SetBit2(p_);
}

// public void InsertAfter(Fuse.Node sibling, Fuse.Node node) :201
void Visual__InsertAfter_fn(Visual* __this, ::g::Fuse::Node* sibling, ::g::Fuse::Node* node)
{
    __this->InsertAfter(sibling, node);
}

// private void InsertCleanup(Fuse.Node item) :227
void Visual__InsertCleanup_fn(Visual* __this, ::g::Fuse::Node* item)
{
    __this->InsertCleanup(item);
}

// internal void InsertNodesAfter(Fuse.Node preceeder, Uno.Collections.IEnumerator<Fuse.Node> items) :239
void Visual__InsertNodesAfter_fn(Visual* __this, ::g::Fuse::Node* preceeder, uObject* items)
{
    __this->InsertNodesAfter(preceeder, items);
}

// private void InsertNodesAfterImpl(Fuse.Node preceeder, Uno.Collections.IEnumerator<Fuse.Node> items, bool allowMove) :250
void Visual__InsertNodesAfterImpl_fn(Visual* __this, ::g::Fuse::Node* preceeder, uObject* items, bool* allowMove)
{
    __this->InsertNodesAfterImpl(preceeder, items, *allowMove);
}

// internal void InsertOrMoveNodesAfter(Fuse.Node preceeder, Uno.Collections.IEnumerator<Fuse.Node> items) :244
void Visual__InsertOrMoveNodesAfter_fn(Visual* __this, ::g::Fuse::Node* preceeder, uObject* items)
{
    __this->InsertOrMoveNodesAfter(preceeder, items);
}

// internal Fuse.FastMatrix get_InternLocalTransformInternal() :146
void Visual__get_InternLocalTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->InternLocalTransformInternal();
}

// internal float2 InternSnap(float2 p) :256
void Visual__InternSnap_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->InternSnap(*p);
}

// internal float2 InternSnapUp(float2 p) :275
void Visual__InternSnapUp_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->InternSnapUp(*p);
}

// internal void InvalidateFlat() :11
void Visual__InvalidateFlat_fn(Visual* __this)
{
    __this->InvalidateFlat();
}

// protected void InvalidateHitTestBounds() :90
void Visual__InvalidateHitTestBounds_fn(Visual* __this)
{
    __this->InvalidateHitTestBounds();
}

// public void InvalidateLayout([Fuse.InvalidateLayoutReason reason]) :169
void Visual__InvalidateLayout_fn(Visual* __this, int* reason)
{
    __this->InvalidateLayout(*reason);
}

// protected virtual void InvalidateLocalTransform() :54
void Visual__InvalidateLocalTransform_fn(Visual* __this)
{
    __this->_localTransform = NULL;
    __this->_localTransformInverse = NULL;
    __this->InvalidateFlat();
    __this->InvalidateHitTestBounds();
    __this->InvalidateWorldTransform();
}

// protected void InvalidateRenderBounds() :281
void Visual__InvalidateRenderBounds_fn(Visual* __this)
{
    __this->InvalidateRenderBounds();
}

// public void InvalidateVisual() :12
void Visual__InvalidateVisual_fn(Visual* __this)
{
    __this->InvalidateVisual();
}

// public void InvalidateVisualComposition() :32
void Visual__InvalidateVisualComposition_fn(Visual* __this)
{
    __this->InvalidateVisualComposition();
}

// private void InvalidateWorldTransform() :32
void Visual__InvalidateWorldTransform_fn(Visual* __this)
{
    __this->InvalidateWorldTransform();
}

// private void InvalidateZOrder() :85
void Visual__InvalidateZOrder_fn(Visual* __this)
{
    __this->InvalidateZOrder();
}

// private void InvokeEventHandler(object obj, object args) :38
void Visual__InvokeEventHandler_fn(Visual* __this, uObject* obj, uObject* args)
{
    __this->InvokeEventHandler(obj, args);
}

// public bool get_IsContextEnabled() :58
void Visual__get_IsContextEnabled_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->IsContextEnabled();
}

// public bool get_IsEnabled() :31
void Visual__get_IsEnabled_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :32
void Visual__set_IsEnabled_fn(Visual* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public generated void add_IsInteractingChanged(Uno.EventHandler value) :17
void Visual__add_IsInteractingChanged_fn(Visual* __this, uDelegate* value)
{
    __this->add_IsInteractingChanged(value);
}

// public generated void remove_IsInteractingChanged(Uno.EventHandler value) :17
void Visual__remove_IsInteractingChanged_fn(Visual* __this, uDelegate* value)
{
    __this->remove_IsInteractingChanged(value);
}

// internal virtual bool get_IsLayoutRoot() :160
void Visual__get_IsLayoutRoot_fn(Visual* __this, bool* __retval)
{
    return *__retval = false, void();
}

// internal bool get_IsLocalFlat() :36
void Visual__get_IsLocalFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->IsLocalFlat();
}

// public virtual bool get_IsLocalVisible() :32
void Visual__get_IsLocalVisible_fn(Visual* __this, bool* __retval)
{
    return *__retval = true, void();
}

// protected virtual Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child) :250
void Visual__IsMarginBoxDependent_fn(Visual* __this, Visual* child, int* __retval)
{
    return *__retval = 2, void();
}

// public bool get_IsVisible() :26
void Visual__get_IsVisible_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void add_IsVisibleChanged(Uno.EventHandler value) :15
void Visual__add_IsVisibleChanged_fn(Visual* __this, uDelegate* value)
{
    __this->add_IsVisibleChanged(value);
}

// public void remove_IsVisibleChanged(Uno.EventHandler value) :16
void Visual__remove_IsVisibleChanged_fn(Visual* __this, uDelegate* value)
{
    __this->remove_IsVisibleChanged(value);
}

// public T LastChild<T>() :50
void Visual__LastChild_fn(Visual* __this, uType* __type, ::g::Fuse::Node** __retval)
{
    *__retval = __this->LastChild(__type);
}

// public Fuse.Layer get_Layer() :94
void Visual__get_Layer_fn(Visual* __this, int* __retval)
{
    *__retval = __this->Layer();
}

// public void set_Layer(Fuse.Layer value) :101
void Visual__set_Layer_fn(Visual* __this, int* value)
{
    __this->Layer(*value);
}

// public Fuse.LayoutRole get_LayoutRole() :120
void Visual__get_LayoutRole_fn(Visual* __this, int* __retval)
{
    *__retval = __this->LayoutRole();
}

// public void set_LayoutRole(Fuse.LayoutRole value) :132
void Visual__set_LayoutRole_fn(Visual* __this, int* value)
{
    __this->LayoutRole(*value);
}

// public virtual Fuse.VisualBounds get_LocalRenderBounds() :270
void Visual__get_LocalRenderBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = ::g::Fuse::VisualBounds::Infinite(), void();
}

// public float4x4 get_LocalTransform() :140
void Visual__get_LocalTransform_fn(Visual* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->LocalTransform();
}

// protected Fuse.FastMatrix get_LocalTransformInternal() :150
void Visual__get_LocalTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->LocalTransformInternal();
}

// private Fuse.FastMatrix get_LocalTransformInverseInternal() :169
void Visual__get_LocalTransformInverseInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->LocalTransformInverseInternal();
}

// internal float2 get_MarginBoxPosition() :465
void Visual__get_MarginBoxPosition_fn(Visual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MarginBoxPosition();
}

// private void OnAdded(Fuse.Node b) :128
void Visual__OnAdded_fn(Visual* __this, ::g::Fuse::Node* b)
{
    __this->OnAdded(b);
}

// internal virtual void OnAdjustMarginBoxPosition(float2 position) :473
void Visual__OnAdjustMarginBoxPosition_fn(Visual* __this, ::g::Uno::Float2* position)
{
}

// protected virtual float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :421
void Visual__OnArrangeMarginBox_fn(Visual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 sz = ::g::Uno::Float2__New1(0.0f);

    for (Visual* v = (Visual*)__this->FirstChild(::TYPES[63/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (Visual*)uPtr(v)->NextSibling(::TYPES[64/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        ::g::Uno::Float2 msz = uPtr(v)->ArrangeMarginBox(position_, lp_);
        sz = ::g::Uno::Math::Max3(sz, msz);
    }

    return *__retval = sz, void();
}

// protected void OnBeginRemoveVisual(Fuse.PendingRemoveVisual args) :107
void Visual__OnBeginRemoveVisual_fn(Visual* __this, ::g::Fuse::PendingRemoveVisual* args)
{
    __this->OnBeginRemoveVisual(args);
}

// protected internal void OnBringIntoView(Fuse.Visual elm) :494
void Visual__OnBringIntoView_fn(Visual* __this, Visual* elm)
{
    __this->OnBringIntoView(elm);
}

// protected virtual void OnChildAdded(Fuse.Node elm) :85
void Visual__OnChildAdded_fn(Visual* __this, ::g::Fuse::Node* elm)
{
    if ((__this->_observerCount != 0) && __this->IsRootingStarted())

        for (::g::Fuse::Node* n = (::g::Fuse::Node*)__this->FirstChild(Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Node>*/, ::TYPES[26/*Fuse.Node*/], NULL)); n != NULL; n = (::g::Fuse::Node*)uPtr(n)->NextSibling(::TYPES[26/*Fuse.Node*/]->MakeMethod(3/*NextSibling<Fuse.Node>*/, ::TYPES[26/*Fuse.Node*/], NULL)))
        {
            uObject* obs = uAs<uObject*>(n, ::g::Fuse::IParentObserver_typeof());

            if ((obs != NULL) && uPtr(n)->IsRootingCompleted())
                ::g::Fuse::IParentObserver::OnChildAddedWhileRooted(uInterface(uPtr(obs), ::g::Fuse::IParentObserver_typeof()), elm);
        }

    if (uIs(elm, ::g::Fuse::IParentObserver_typeof()))
        __this->_observerCount++;
}

// protected virtual void OnChildMoved(Fuse.Node elm) :115
void Visual__OnChildMoved_fn(Visual* __this, ::g::Fuse::Node* elm)
{
    if ((__this->_observerCount != 0) && __this->IsRootingStarted())

        for (::g::Fuse::Node* n = (::g::Fuse::Node*)__this->FirstChild(Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Node>*/, ::TYPES[26/*Fuse.Node*/], NULL)); n != NULL; n = (::g::Fuse::Node*)uPtr(n)->NextSibling(::TYPES[26/*Fuse.Node*/]->MakeMethod(3/*NextSibling<Fuse.Node>*/, ::TYPES[26/*Fuse.Node*/], NULL)))
        {
            uObject* obs = uAs<uObject*>(n, ::g::Fuse::IParentObserver_typeof());

            if ((obs != NULL) && uPtr(n)->IsRootingCompleted())
                ::g::Fuse::IParentObserver::OnChildMovedWhileRooted(uInterface(uPtr(obs), ::g::Fuse::IParentObserver_typeof()), elm);
        }
}

// protected virtual void OnChildRemoved(Fuse.Node elm) :100
void Visual__OnChildRemoved_fn(Visual* __this, ::g::Fuse::Node* elm)
{
    if ((__this->_observerCount != 0) && __this->IsRootingStarted())

        for (::g::Fuse::Node* n = (::g::Fuse::Node*)__this->FirstChild(Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Node>*/, ::TYPES[26/*Fuse.Node*/], NULL)); n != NULL; n = (::g::Fuse::Node*)uPtr(n)->NextSibling(::TYPES[26/*Fuse.Node*/]->MakeMethod(3/*NextSibling<Fuse.Node>*/, ::TYPES[26/*Fuse.Node*/], NULL)))
        {
            uObject* obs = uAs<uObject*>(n, ::g::Fuse::IParentObserver_typeof());

            if ((obs != NULL) && uPtr(n)->IsRootingCompleted())
                ::g::Fuse::IParentObserver::OnChildRemovedWhileRooted(uInterface(uPtr(obs), ::g::Fuse::IParentObserver_typeof()), elm);
        }

    if (uIs(elm, ::g::Fuse::IParentObserver_typeof()))
        __this->_observerCount--;
}

// protected virtual void OnHitTest(Fuse.HitTestContext htc) :59
void Visual__OnHitTest_fn(Visual* __this, ::g::Fuse::HitTestContext* htc)
{
    if (__this->HasVisualChildren())
    {
        uArray* zOrder = __this->GetCachedZOrder();

        for (int i = uPtr(zOrder)->Length() - 1; i >= 0; i--)
            uPtr(uPtr(zOrder)->Strong<Visual*>(i))->HitTest(htc);
    }
}

// private void OnInteractionsChanged() :48
void Visual__OnInteractionsChanged_fn(Visual* __this)
{
    __this->OnInteractionsChanged();
}

// protected virtual void OnInvalidateLayout() :144
void Visual__OnInvalidateLayout_fn(Visual* __this)
{
}

// protected virtual bool OnInvalidateRenderBounds() :295
void Visual__OnInvalidateRenderBounds_fn(Visual* __this, bool* __retval)
{
    return *__retval = false, void();
}

// protected virtual void OnInvalidateVisual() :24
void Visual__OnInvalidateVisual_fn(Visual* __this)
{
}

// protected virtual void OnInvalidateVisualComposition() :43
void Visual__OnInvalidateVisualComposition_fn(Visual* __this)
{
}

// protected virtual void OnIsContextEnabledChanged() :75
void Visual__OnIsContextEnabledChanged_fn(Visual* __this)
{
    __this->RaiseEvent(Visual::_isContextEnabledChangedHandle_, 4);
    __this->InvalidateHitTestBounds();
    __this->InvalidateVisual();
}

// private void OnIsEnabledChanged(Uno.UX.IPropertyListener origin) :43
void Visual__OnIsEnabledChanged_fn(Visual* __this, uObject* origin)
{
    __this->OnIsEnabledChanged(origin);
}

// protected virtual void OnIsVisibleChanged() :54
void Visual__OnIsVisibleChanged_fn(Visual* __this)
{
    if (__this->IsVisible())
        __this->InvalidateVisual();

    if (__this->Parent() != NULL)
        uPtr(__this->Parent())->InvalidateVisual();

    __this->RaiseEvent(Visual::_isVisibleChangedHandle_, 5);
    __this->InvalidateHitTestBounds();
}

// protected void OnLocalVisibleChanged() :35
void Visual__OnLocalVisibleChanged_fn(Visual* __this)
{
    __this->OnLocalVisibleChanged();
}

// private void OnMatrixChanged(Fuse.Transform t) :49
void Visual__OnMatrixChanged_fn(Visual* __this, ::g::Fuse::Transform* t)
{
    __this->OnMatrixChanged(t);
}

// private void OnMoved(Fuse.Node b) :152
void Visual__OnMoved_fn(Visual* __this, ::g::Fuse::Node* b)
{
    __this->OnMoved(b);
}

// private static void onParameterChanged(Fuse.Scripting.Context c, Fuse.Visual v, object[] args) :69
void Visual__onParameterChanged_fn(::g::Fuse::Scripting::Context* c, Visual* v, uArray* args)
{
    Visual::onParameterChanged(c, v, args);
}

// private void OnParameterChanged() :75
void Visual__OnParameterChanged_fn(Visual* __this)
{
    __this->OnParameterChanged();
}

// public virtual void OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector property) :55
void Visual__OnPropertyChanged2_fn(Visual* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* property)
{
}

// private void OnRemoved(Fuse.Node b) :140
void Visual__OnRemoved_fn(Visual* __this, ::g::Fuse::Node* b)
{
    __this->OnRemoved(b);
}

// private void OnResourceChanged(Uno.UX.Resource res) :97
void Visual__OnResourceChanged_fn(Visual* __this, ::g::Uno::UX::Resource* res)
{
    __this->OnResourceChanged(res);
}

// protected override void OnRooted() :98
void Visual__OnRooted_fn(Visual* __this)
{
    ::g::Fuse::Node* ret28;
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->UpdateIsContextEnabledCache();
    __this->UpdateIsVisibleCache();
    __this->UpdateContextSnapToPixelsCache();
    __this->WTIRooted();
    __this->OnRootedPreChildren();
    __this->_childrenShouldRoot = true;

    if (__this->HasChildren())
    {
        uObject* enum4 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Children()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL)));

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum4), ::TYPES[32/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::TYPES[30/*Uno.Collections.IEnumerator*/])))
            {
                ::g::Fuse::Node* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL)), &ret28), ret28);

                if (uPtr(c)->IsUnrooted())
                    uPtr(c)->RootInternal(__this);
            }
        }
    }

    __this->_layoutDirty = 0;
    __this->_hasMarginBox = false;
    __this->InvalidateLayout(2);
    __this->_ambLayoutParams.Reset();
    __this->_viewport = __this->FindViewport();
    __this->RootResources();
}

// protected virtual void OnRootedPreChildren() :134
void Visual__OnRootedPreChildren_fn(Visual* __this)
{
}

// private void OnTransformAdded(Fuse.Transform t) :35
void Visual__OnTransformAdded_fn(Visual* __this, ::g::Fuse::Transform* t)
{
    __this->OnTransformAdded(t);
}

// private void OnTransformRemoved(Fuse.Transform t) :42
void Visual__OnTransformRemoved_fn(Visual* __this, ::g::Fuse::Transform* t)
{
    __this->OnTransformRemoved(t);
}

// protected override void OnUnrooted() :136
void Visual__OnUnrooted_fn(Visual* __this)
{
    ::g::Fuse::Node* ret29;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
    __this->_childrenShouldRoot = false;
    __this->UnrootResources();
    __this->_viewport = NULL;
    __this->ResetParameterListeners();

    if (::g::Fuse::Input::Focus::FocusedVisual() == __this)
        ::g::Fuse::Input::Focus::Release();

    __this->ConcludePendingRemove();

    if (__this->HasChildren())
    {
        uObject* enum5 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Children()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL)));

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum5), ::TYPES[32/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::TYPES[30/*Uno.Collections.IEnumerator*/])))
            {
                ::g::Fuse::Node* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL)), &ret29), ret29);
                uPtr(c)->UnrootInternal();
            }
        }
    }

    __this->WTIUnrooted();
    __this->ConcludePendingRemove();
}

// private void OnVisualAdded(Fuse.Visual v) :157
void Visual__OnVisualAdded_fn(Visual* __this, Visual* v)
{
    __this->OnVisualAdded(v);
}

// private void OnVisualRemoved(Fuse.Visual v) :163
void Visual__OnVisualRemoved_fn(Visual* __this, Visual* v)
{
    __this->OnVisualRemoved(v);
}

// protected virtual void OnZOrderInvalidated() :83
void Visual__OnZOrderInvalidated_fn(Visual* __this)
{
}

// public string get_Parameter() :34
void Visual__get_Parameter_fn(Visual* __this, uString** __retval)
{
    *__retval = __this->Parameter();
}

// public void set_Parameter(string value) :35
void Visual__set_Parameter_fn(Visual* __this, uString* value)
{
    __this->Parameter(value);
}

// public void add_ParameterChanged(Uno.EventHandler value) :51
void Visual__add_ParameterChanged_fn(Visual* __this, uDelegate* value)
{
    __this->add_ParameterChanged(value);
}

// public void remove_ParameterChanged(Uno.EventHandler value) :52
void Visual__remove_ParameterChanged_fn(Visual* __this, uDelegate* value)
{
    __this->remove_ParameterChanged(value);
}

// internal Fuse.FastMatrix get_ParentWorldTransformInternal() :134
void Visual__get_ParentWorldTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->ParentWorldTransformInternal();
}

// protected void PerformLayout() :342
void Visual__PerformLayout_fn(Visual* __this)
{
    __this->PerformLayout();
}

// protected void PerformLayout(float2 clientSize) :350
void Visual__PerformLayout1_fn(Visual* __this, ::g::Uno::Float2* clientSize)
{
    __this->PerformLayout1(*clientSize);
}

// internal virtual void Prepare(string parameter) :101
void Visual__Prepare_fn(Visual* __this, uString* parameter)
{
    __this->Parameter(parameter);
}

// private void PrependExplicitTransforms(Fuse.FastMatrix m) :240
void Visual__PrependExplicitTransforms_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
    __this->PrependExplicitTransforms(m);
}

// protected virtual void PrependImplicitTransform(Fuse.FastMatrix m) :25
void Visual__PrependImplicitTransform_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
}

// protected virtual void PrependInverseTransformOrigin(Fuse.FastMatrix m) :27
void Visual__PrependInverseTransformOrigin_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
}

// private void PrependLocalTransform(Fuse.FastMatrix m) :234
void Visual__PrependLocalTransform_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
    __this->PrependLocalTransform(m);
}

// protected virtual void PrependTransformOrigin(Fuse.FastMatrix m) :26
void Visual__PrependTransformOrigin_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
}

// private void RaiseEvent(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne) :33
void Visual__RaiseEvent_fn(Visual* __this, ::g::Fuse::PropertyHandle* ph, int* ne)
{
    __this->RaiseEvent(ph, *ne);
}

// private void RearrangeMarginBox() :412
void Visual__RearrangeMarginBox_fn(Visual* __this)
{
    __this->RearrangeMarginBox();
}

// public bool Remove(Fuse.Node item) :184
void Visual__Remove1_fn(Visual* __this, ::g::Fuse::Node* item, bool* __retval)
{
    *__retval = __this->Remove1(item);
}

// public void RemoveAllChildren<T>() :66
void Visual__RemoveAllChildren_fn(Visual* __this, uType* __type)
{
    __this->RemoveAllChildren(__type);
}

// public void RemoveDrawCost(double cost) :80
void Visual__RemoveDrawCost_fn(Visual* __this, double* cost)
{
    __this->RemoveDrawCost(*cost);
}

// private void RemoveEventHandler(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne, object handler) :50
void Visual__RemoveEventHandler_fn(Visual* __this, ::g::Fuse::PropertyHandle* ph, int* ne, uObject* handler)
{
    __this->RemoveEventHandler(ph, *ne, handler);
}

// public generated void add_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) :492
void Visual__add_RequestBringIntoView_fn(Visual* __this, uDelegate* value)
{
    __this->add_RequestBringIntoView(value);
}

// public generated void remove_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) :492
void Visual__remove_RequestBringIntoView_fn(Visual* __this, uDelegate* value)
{
    __this->remove_RequestBringIntoView(value);
}

// private void ResetParameterListeners() :91
void Visual__ResetParameterListeners_fn(Visual* __this)
{
    __this->ResetParameterListeners();
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() :16
void Visual__get_Resources_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->Resources();
}

// private void RootResources() :30
void Visual__RootResources_fn(Visual* __this)
{
    __this->RootResources();
}

// public void SendToBack(Fuse.Visual item) :67
void Visual__SendToBack_fn(Visual* __this, Visual* item)
{
    __this->SendToBack(item);
}

// internal void Set<T>(Fuse.FastProperty1 p, T value, T defaultValue) :79
void Visual__Set_fn(Visual* __this, uType* __type, int* p, void* value, void* defaultValue)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Visual.Find<T>*/),
        __type->Precalced(1/*Fuse.Visual.Insert<T>*/),
    };
    int p_ = *p;

    if (__this->HasBit(p_))
    {
        if (::g::Uno::Object::Equals1(uBoxPtr(__type->U(0), value), uBoxPtr(__type->U(0), defaultValue)))
            __this->Clear(p_);
        else
            uPtr((::g::Fuse::FastProperty1Link1*)__this->Find(__types[0], p_))->Value() = value;
    }
    else
    {
        if (!::g::Uno::Object::Equals1(uBoxPtr(__type->U(0), value), uBoxPtr(__type->U(0), defaultValue)))
            Visual__Insert2_fn(__this, __types[1], uCRef<int>(p_), value);
    }
}

// internal void Set<T>(Fuse.FastProperty2 p, T value, T defaultValue) :58
void Visual__Set1_fn(Visual* __this, uType* __type, int* p, void* value, void* defaultValue)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Visual.Find<T>*/),
        __type->Precalced(1/*Fuse.Visual.Insert<T>*/),
    };
    int p_ = *p;

    if (__this->HasBit1(p_))
    {
        if (::g::Uno::Object::Equals1(uBoxPtr(__type->U(0), value), uBoxPtr(__type->U(0), defaultValue)))
            __this->Clear1(p_);
        else
            uPtr((::g::Fuse::FastProperty2Link1*)__this->Find1(__types[0], p_))->Value() = value;
    }
    else
    {
        if (!::g::Uno::Object::Equals1(uBoxPtr(__type->U(0), value), uBoxPtr(__type->U(0), defaultValue)))
            Visual__Insert3_fn(__this, __types[1], uCRef<int>(p_), value);
    }
}

// internal void SetBit(Fuse.FastProperty1 p) :113
void Visual__SetBit_fn(Visual* __this, int* p)
{
    __this->SetBit(*p);
}

// internal void SetBit(Fuse.FastProperty1 p, bool value) :118
void Visual__SetBit1_fn(Visual* __this, int* p, bool* value)
{
    __this->SetBit1(*p, *value);
}

// internal void SetBit(Fuse.FastProperty2 p) :92
void Visual__SetBit2_fn(Visual* __this, int* p)
{
    __this->SetBit2(*p);
}

// internal void SetBit(Fuse.FastProperty2 p, bool value) :97
void Visual__SetBit3_fn(Visual* __this, int* p, bool* value)
{
    __this->SetBit3(*p, *value);
}

// private void SetBit(Fuse.Visual.VisualBits nb) :30
void Visual__SetBit4_fn(Visual* __this, int* nb)
{
    __this->SetBit4(*nb);
}

// internal bool get_ShouldRootChildren() :95
void Visual__get_ShouldRootChildren_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->ShouldRootChildren();
}

// protected float2 Snap(float2 p) :257
void Visual__Snap_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Snap(*p);
}

// protected float2 SnapDown(float2 p) :282
void Visual__SnapDown_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapDown(*p);
}

// public bool get_SnapToPixels() :310
void Visual__get_SnapToPixels_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->SnapToPixels();
}

// public void set_SnapToPixels(bool value) :314
void Visual__set_SnapToPixels_fn(Visual* __this, bool* value)
{
    __this->SnapToPixels(*value);
}

// protected float2 SnapUp(float2 p) :276
void Visual__SnapUp_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapUp(*p);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() :69
void Visual__get_Templates_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// public override sealed bool TryGetResource(string key, Uno.Predicate<object> acceptor, object& resource) :70
void Visual__TryGetResource_fn(Visual* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval)
{
    ::g::Uno::UX::Resource* ret33;
    bool ret34;

    if (__this->HasResources())
    {
        uObject* resources = __this->Resources();

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(resources), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL))); i++)
        {
            ::g::Uno::UX::Resource* r = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(resources), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL)), uCRef<int>(i), &ret33), ret33);

            if (::g::Uno::String::op_Equality(uPtr(r)->Key(), key) && (::g::Uno::Delegate::op_Equality(acceptor, NULL) || (uPtr(acceptor)->Invoke(&ret34, 1, (uObject*)uPtr(r)->Value()), ret34)))
            {
                *resource = uPtr(r)->Value();
                return *__retval = true, void();
            }
        }
    }

    if (__this->ContextParent() != NULL)
        return *__retval = uPtr(__this->ContextParent())->TryGetResource(key, acceptor, resource), void();

    return *__retval = ::g::Uno::UX::Resource::TryFindGlobal(key, acceptor, resource), void();
}

// public bool TryParentToLocal(float2 parentPoint, float2& result) :176
void Visual__TryParentToLocal_fn(Visual* __this, ::g::Uno::Float2* parentPoint, ::g::Uno::Float2* result, bool* __retval)
{
    *__retval = __this->TryParentToLocal(*parentPoint, result);
}

// private void Uno.Collections.ICollection<Fuse.Node>.Clear() :170
void Visual__UnoCollectionsICollectionFuseNodeClear_fn(Visual* __this)
{
    for (::g::Fuse::Node* c = __this->_firstChild; c != NULL; c = uPtr(c)->_nextSibling)
        __this->OnRemoved(c);

    __this->Children_Clear();
}

// private bool Uno.Collections.ICollection<Fuse.Node>.Contains(Fuse.Node item) :208
void Visual__UnoCollectionsICollectionFuseNodeContains_fn(Visual* __this, ::g::Fuse::Node* item, bool* __retval)
{
    return *__retval = __this->Children_Contains(item), void();
}

// private int Uno.Collections.ICollection<Fuse.Node>.get_Count() :218
void Visual__UnoCollectionsICollectionFuseNodeget_Count_fn(Visual* __this, int* __retval)
{
    return *__retval = __this->ChildCount(), void();
}

// private Uno.Collections.IEnumerator<Fuse.Node> Uno.Collections.IEnumerable<Fuse.Node>.GetEnumerator() :311
void Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn(Visual* __this, uObject** __retval)
{
    return *__retval = __this->Children_GetEnumerator(), void();
}

// private Uno.Collections.IEnumerator<Fuse.Visual> Uno.Collections.IEnumerable<Fuse.Visual>.GetEnumerator() :16
void Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn(Visual* __this, uObject** __retval)
{
    return *__retval = (uObject*)((Visual__Enumerator*)Visual__Enumerator::New1(Visual__Enumerator_typeof()->MakeType(Visual_typeof(), NULL), __this)), void();
}

// private Fuse.Node Uno.Collections.IList<Fuse.Node>.get_Item(int index) :309
void Visual__UnoCollectionsIListFuseNodeget_Item_fn(Visual* __this, int* index, ::g::Fuse::Node** __retval)
{
    int index_ = *index;
    return *__retval = __this->Children_ItemAt(index_), void();
}

// private void Uno.Collections.IList<Fuse.Node>.RemoveAt(int index) :302
void Visual__UnoCollectionsIListFuseNodeRemoveAt_fn(Visual* __this, int* index)
{
    ::g::Fuse::Node* ret35;
    int index_ = *index;
    ::g::Fuse::Node* b = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL)), uCRef<int>(index_), &ret35), ret35);
    __this->Children_Remove(b);
    __this->OnRemoved(b);
}

// private void UnrootResources() :44
void Visual__UnrootResources_fn(Visual* __this)
{
    __this->UnrootResources();
}

// private void UpdateContextSnapToPixelsCache() :326
void Visual__UpdateContextSnapToPixelsCache_fn(Visual* __this)
{
    __this->UpdateContextSnapToPixelsCache();
}

// private void UpdateIsContextEnabledCache() :61
void Visual__UpdateIsContextEnabledCache_fn(Visual* __this)
{
    __this->UpdateIsContextEnabledCache();
}

// private void UpdateIsVisibleCache() :40
void Visual__UpdateIsVisibleCache_fn(Visual* __this)
{
    __this->UpdateIsVisibleCache();
}

// private void UpdateLayout() :384
void Visual__UpdateLayout_fn(Visual* __this)
{
    __this->UpdateLayout();
}

// public int get_ValidFrameCount() :49
void Visual__get_ValidFrameCount_fn(Visual* __this, int* __retval)
{
    *__retval = __this->ValidFrameCount();
}

// public generated Fuse.Controls.Native.ViewHandle get_ViewHandle() :49
void Visual__get_ViewHandle_fn(Visual* __this, ::g::Fuse::Controls::Native::ViewHandle** __retval)
{
    *__retval = __this->ViewHandle();
}

// internal generated void set_ViewHandle(Fuse.Controls.Native.ViewHandle value) :49
void Visual__set_ViewHandle_fn(Visual* __this, ::g::Fuse::Controls::Native::ViewHandle* value)
{
    __this->ViewHandle(value);
}

// public Fuse.IViewport get_Viewport() :208
void Visual__get_Viewport_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// public override sealed void VisitSubtree(Uno.Action<Fuse.Node> action) :163
void Visual__VisitSubtree_fn(Visual* __this, uDelegate* action)
{
    uPtr(action)->InvokeVoid(__this);

    for (::g::Fuse::Node* n = (::g::Fuse::Node*)__this->FirstChild(Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Node>*/, ::TYPES[26/*Fuse.Node*/], NULL)); n != NULL; n = (::g::Fuse::Node*)uPtr(n)->NextSibling(::TYPES[26/*Fuse.Node*/]->MakeMethod(3/*NextSibling<Fuse.Node>*/, ::TYPES[26/*Fuse.Node*/], NULL)))
        uPtr(n)->VisitSubtree(action);
}

// public int get_VisualChildCount() :73
void Visual__get_VisualChildCount_fn(Visual* __this, int* __retval)
{
    *__retval = __this->VisualChildCount();
}

// internal Uno.Collections.IEnumerable<Fuse.Visual> get_VisualChildren() :22
void Visual__get_VisualChildren_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->VisualChildren();
}

// public virtual Fuse.VisualContext get_VisualContext() :41
void Visual__get_VisualContext_fn(Visual* __this, int* __retval)
{
    if (__this->Parent() != NULL)
        return *__retval = uPtr(__this->Parent())->VisualContext(), void();
    else
        return *__retval = 0, void();
}

// public float2 WindowToLocal(float2 windowCoord) :253
void Visual__WindowToLocal_fn(Visual* __this, ::g::Uno::Float2* windowCoord, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowToLocal(*windowCoord);
}

// public float4x4 get_WorldTransform() :82
void Visual__get_WorldTransform_fn(Visual* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->WorldTransform();
}

// private Fuse.FastMatrix get_WorldTransformInternal() :121
void Visual__get_WorldTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->WorldTransformInternal();
}

// public void add_WorldTransformInvalidated(Uno.EventHandler value) :56
void Visual__add_WorldTransformInvalidated_fn(Visual* __this, uDelegate* value)
{
    __this->add_WorldTransformInvalidated(value);
}

// public void remove_WorldTransformInvalidated(Uno.EventHandler value) :63
void Visual__remove_WorldTransformInvalidated_fn(Visual* __this, uDelegate* value)
{
    __this->remove_WorldTransformInvalidated(value);
}

// public float4x4 get_WorldTransformInverse() :66
void Visual__get_WorldTransformInverse_fn(Visual* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->WorldTransformInverse();
}

// private void WTIRooted() :74
void Visual__WTIRooted_fn(Visual* __this)
{
    __this->WTIRooted();
}

// private void WTIUnrooted() :84
void Visual__WTIUnrooted_fn(Visual* __this)
{
    __this->WTIUnrooted();
}

// public float get_ZOffset() :21
void Visual__get_ZOffset_fn(Visual* __this, float* __retval)
{
    *__retval = __this->ZOffset();
}

// public void set_ZOffset(float value) :22
void Visual__set_ZOffset_fn(Visual* __this, float* value)
{
    __this->ZOffset(*value);
}

// private static int ZOrderComparator(Fuse.Visual a, Fuse.Visual b) :128
void Visual__ZOrderComparator_fn(Visual* a, Visual* b, int* __retval)
{
    *__retval = Visual::ZOrderComparator(a, b);
}

uSStrong<uArray*> Visual::_emptyVisuals_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_isContextEnabledChangedHandle_;
::g::Uno::UX::Selector Visual::_isEnabledName_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_isVisibleChangedHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_layerProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_layoutRoleProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_parameterChangedHandle_;
bool Visual::_performingLayout_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_resourcesHandle_;
int Visual::_thisIDEnumerator_;
::g::Uno::UX::Selector Visual::ParameterName_;

// protected generated Visual() [instance] :61
void Visual::ctor_2()
{
    _thisID = (Visual::_thisIDEnumerator_++);
    _fastPropertyBits1 = 100663299;
    _isVisibleCached = true;
    _ambLayoutParams = ::g::Fuse::LayoutParams__CreateEmpty();
    _lastInvalidate = -1;
    _zOffset = 0.0f;
    ctor_1();
}

// private bool get__areChildrenFlat() [instance] :63
bool Visual::_areChildrenFlat()
{
    return HasBit(32);
}

// private void set__areChildrenFlat(bool value) [instance] :64
void Visual::_areChildrenFlat(bool value)
{
    SetBit1(32, value);
}

// private bool get__areChildrenFlatCached() [instance] :57
bool Visual::_areChildrenFlatCached()
{
    return HasBit(16);
}

// private void set__areChildrenFlatCached(bool value) [instance] :58
void Visual::_areChildrenFlatCached(bool value)
{
    SetBit1(16, value);
}

// private bool get__isLocalFlat() [instance] :29
bool Visual::_isLocalFlat()
{
    return HasBit(4);
}

// private void set__isLocalFlat(bool value) [instance] :30
void Visual::_isLocalFlat(bool value)
{
    SetBit1(4, value);
}

// private bool get__isLocalFlatCached() [instance] :24
bool Visual::_isLocalFlatCached()
{
    return HasBit(8);
}

// private void set__isLocalFlatCached(bool value) [instance] :25
void Visual::_isLocalFlatCached(bool value)
{
    SetBit1(8, value);
}

// private generated void add__worldTransformInvalidated(Uno.EventHandler value) [instance] :51
void Visual::add__worldTransformInvalidated(uDelegate* value)
{
    _worldTransformInvalidated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(_worldTransformInvalidated1, value), ::TYPES[24/*Uno.EventHandler*/]);
}

// private generated void remove__worldTransformInvalidated(Uno.EventHandler value) [instance] :51
void Visual::remove__worldTransformInvalidated(uDelegate* value)
{
    _worldTransformInvalidated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(_worldTransformInvalidated1, value), ::TYPES[24/*Uno.EventHandler*/]);
}

// public float get_AbsoluteZoom() [instance] :296
float Visual::AbsoluteZoom()
{
    uObject* v = Viewport();

    if (v == NULL)
        return 1.0f;

    return ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(v), ::TYPES[23/*Fuse.ICommonViewport*/]));
}

// public void Add(Fuse.Node item) [instance] :177
void Visual::Add1(::g::Fuse::Node* item)
{
    InsertCleanup(item);
    Children_Add(item);
    OnAdded(item);
}

// public void AddDrawCost(double cost) [instance] :70
void Visual::AddDrawCost(double cost)
{
    Visual* p = this;

    while (p != NULL)
    {
        uPtr(p)->_drawCost = (uPtr(p)->_drawCost + cost);
        p = uPtr(p)->Parent();
    }
}

// private void AddEventHandler(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne, object handler) [instance] :44
void Visual::AddEventHandler(::g::Fuse::PropertyHandle* ph, int ne, uObject* handler)
{
    uPtr(Properties())->AddToList(ph, handler);
    SetBit4(ne);
}

// private void AddParameterChangedListener(Fuse.Scripting.Function func) [instance] :58
void Visual::AddParameterChangedListener(::g::Fuse::Scripting::Function* func)
{
    if (_parameterListeners == NULL)
        _parameterListeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[89/*Uno.Collections.List`1*/]->MakeType(::g::Fuse::Scripting::Function_typeof(), NULL)));

    ::g::Uno::Collections::List__Add_fn(uPtr(_parameterListeners), func);

    if (::g::Uno::String::op_Inequality(_parameter, NULL))
    {
        uObject* so = uAs<uObject*>(this, ::g::Fuse::Scripting::IScriptObject_typeof());

        if (so != NULL)
            uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[12/*object[]*/], 1, (uObject*)uPtr(::g::Fuse::Scripting::IScriptObject::ScriptContext(uInterface(uPtr(so), ::g::Fuse::Scripting::IScriptObject_typeof())))->ParseJson(_parameter)));
    }
}

// internal void AdjustMarginBoxPosition(float2 position) [instance] :467
void Visual::AdjustMarginBoxPosition(::g::Uno::Float2 position)
{
    ArrangeMarginBox(position, _ambLayoutParams);
}

// internal bool get_AreChildrenFlat() [instance] :70
bool Visual::AreChildrenFlat()
{
    if (_areChildrenFlatCached())
        return _areChildrenFlat();

    _areChildrenFlat(CalcAreChildrenFlat());
    _areChildrenFlatCached(true);
    return _areChildrenFlat();
}

// public float2 ArrangeMarginBox(float2 position, Fuse.LayoutParams lp) [instance] :432
::g::Uno::Float2 Visual::ArrangeMarginBox(::g::Uno::Float2 position, ::g::Fuse::LayoutParams lp)
{
    bool same = (HasMarginBox() && (_layoutDirty == 0)) && _ambLayoutParams.IsCompatible(lp);
    float zeroTolerance = 1e-05f;
    ::g::Uno::Float2 marginBox;

    if (same && (::g::Uno::Vector::Distance(position, _ambPosition) < 1e-05f))
        return _ambMargin;
    else if (same && CanAdjustMarginBox())
    {
        marginBox = _ambMargin;
        OnAdjustMarginBoxPosition(position);
    }
    else
        marginBox = OnArrangeMarginBox(position, lp);

    _layoutDirty = 0;
    _ambMargin = marginBox;
    _ambPosition = position;
    _ambLayoutParams = lp.Clone();
    _hasMarginBox = true;
    return marginBox;
}

// private void AssignNaturalZOrder() [instance] :121
void Visual::AssignNaturalZOrder()
{
    int i = 0;

    for (Visual* v = (Visual*)FirstChild(::TYPES[63/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (Visual*)uPtr(v)->NextSibling(::TYPES[64/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
        if (!uPtr(v)->_zOrderFixed)
            uPtr(v)->_naturalZOrder = (i--);
}

// public void BeginInteraction(object id, Uno.Action cancelled) [instance] :27
void Visual::BeginInteraction(uObject* id, uDelegate* cancelled)
{
    Visual__InteractionItem collection1;

    if (_interactions == NULL)
        _interactions = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Visual__InteractionItem_typeof(), NULL)));

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_interactions), id, uCRef((collection1 = uDefault<Visual__InteractionItem>(), collection1.Id = id, collection1.Cancelled = cancelled, collection1)));
    OnInteractionsChanged();
}

// public void BeginRemoveChild(Fuse.Node n, [Uno.Action<Fuse.Node> then]) [instance] :96
void Visual::BeginRemoveChild(::g::Fuse::Node* n, uDelegate* then)
{
    bool ret9;
    Visual* v = uAs<Visual*>(n, Visual_typeof());

    if (v != NULL)
        BeginRemoveVisual(v, then);
    else
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), n, &ret9);

        if (::g::Uno::Delegate::op_Inequality(then, NULL))
            uPtr(then)->InvokeVoid(n);
    }
}

// public void BeginRemoveVisual(Fuse.Visual child, [Uno.Action<Fuse.Node> then]) [instance] :64
void Visual::BeginRemoveVisual(Visual* child, uDelegate* then)
{
    bool ret10;
    bool ret11;

    if (!IsRootingCompleted())
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), child, &ret10);

        if (::g::Uno::Delegate::op_Inequality(then, NULL))
            uPtr(then)->InvokeVoid(child);

        return;
    }

    if (!(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), child, &ret11), ret11))
        return;

    if (uPtr(child)->HasBit(268435456))
        return;

    ::g::Fuse::PendingRemoveVisual* args = ::g::Fuse::PendingRemoveVisual::New1(child, this, then);
    uPtr(child)->OnBeginRemoveVisual(args);

    if (args->HasSubscribers())
        InvalidateLayout(2);
    else
        ::g::Fuse::UpdateManager::AddDeferredAction((uObject*)args, -1, 2);
}

// public void BringIntoView() [instance] :503
void Visual::BringIntoView()
{
    OnBringIntoView(this);
}

// public void BringToFront(Fuse.Visual item) [instance] :47
void Visual::BringToFront(Visual* item)
{
    AssignNaturalZOrder();
    int maxNaturalZOrder = (-2147483647 - 1);

    for (Visual* v = (Visual*)FirstChild(::TYPES[63/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (Visual*)uPtr(v)->NextSibling(::TYPES[64/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
        if (((v != item) && (uPtr(v)->Layer() == uPtr(item)->Layer())) && (uPtr(v)->_naturalZOrder > maxNaturalZOrder))
            maxNaturalZOrder = uPtr(v)->_naturalZOrder;

    if ((maxNaturalZOrder != (-2147483647 - 1)) && ((maxNaturalZOrder + 1) != uPtr(item)->_naturalZOrder))
    {
        uPtr(item)->_naturalZOrder = (maxNaturalZOrder + 1);
        item->_zOrderFixed = true;
        InvalidateZOrder();
    }
}

// internal bool CalcAreChildrenFlat() [instance] :81
bool Visual::CalcAreChildrenFlat()
{
    for (Visual* v = (Visual*)FirstChild(::TYPES[63/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (Visual*)uPtr(v)->NextSibling(::TYPES[64/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
        if (!uPtr(v)->AreChildrenFlat() || !uPtr(v)->IsLocalFlat())
            return false;

    return true;
}

// internal bool CalcIsLocalFlat() [instance] :47
bool Visual::CalcIsLocalFlat()
{
    for (::g::Fuse::Transform* t = (::g::Fuse::Transform*)FirstChild(Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Transform>*/, ::g::Fuse::Transform_typeof(), NULL)); t != NULL; t = (::g::Fuse::Transform*)uPtr(t)->NextSibling(::TYPES[26/*Fuse.Node*/]->MakeMethod(3/*NextSibling<Fuse.Transform>*/, ::g::Fuse::Transform_typeof(), NULL)))
        if (!uPtr(t)->IsFlat())
            return false;

    return true;
}

// internal Fuse.VisualBounds CalcRenderBoundsInParentSpace() [instance] :302
::g::Fuse::VisualBounds* Visual::CalcRenderBoundsInParentSpace()
{
    return uPtr(::g::Fuse::VisualBounds::Empty())->MergeChild(this, LocalRenderBounds());
}

// private Fuse.FastMatrix CalcWorldTransform() [instance] :180
::g::Fuse::FastMatrix* Visual::CalcWorldTransform()
{
    ::g::Fuse::FastMatrix* m = LocalTransformInternal();

    if (Parent() != NULL)
        m = uPtr(m)->Mul(uPtr(Parent())->ParentWorldTransformInternal());

    return m;
}

// public void CancelInteractions([Fuse.Visual.CancelInteractionsType how]) [instance] :59
void Visual::CancelInteractions(int how)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, Visual__InteractionItem> ret12;
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret13;
    bool ret14;
    Visual__InteractionItem ret15;

    if (_interactions != NULL)
    {
        ::g::Uno::Collections::List* ids = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[89/*Uno.Collections.List`1*/]->MakeType(uObject_typeof(), NULL));
        ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, Visual__InteractionItem> enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_interactions), &ret12), ret12);

        {
            const auto __finally_fun = [&]()
            {
                enum2.Dispose(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Visual__InteractionItem_typeof(), NULL));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (enum2.MoveNext(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Visual__InteractionItem_typeof(), NULL)))
            {
                ::g::Uno::Collections::KeyValuePair<uStrong<uObject*>, Visual__InteractionItem> i = enum2.Current(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Visual__InteractionItem_typeof(), NULL));
                ::g::Uno::Collections::List__Add_fn(uPtr(ids), i.Key(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), Visual__InteractionItem_typeof(), NULL)));
            }
        }

        ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(ids), &ret13), ret13);

        {
            const auto __finally_fun = [&]()
            {
                enum3.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(uObject_typeof(), NULL));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (enum3.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(uObject_typeof(), NULL)))
            {
                uObject* id = enum3.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(uObject_typeof(), NULL));

                if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_interactions), id, &ret14), ret14))
                {
                    Visual__InteractionItem i1 = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_interactions), id, &ret15), ret15);
                    uPtr(i1.Cancelled)->InvokeVoid();
                }
            }
        }
    }

    if (how == 1)

        for (Visual* v = (Visual*)FirstChild(::TYPES[63/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (Visual*)NextSibling(::TYPES[64/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
            uPtr(v)->CancelInteractions(how);
}

// internal void CancelPendingRemove() [instance] :118
void Visual::CancelPendingRemove()
{
    if (HasBit(268435456))
        SetBit1(268435456, false);
}

// private void CheckWorldTransformVersion() [instance] :101
void Visual::CheckWorldTransformVersion()
{
    if ((_worldTransform != NULL) || (_worldTransformInverse != NULL))
    {
        if (Parent() != NULL)
        {
            uPtr(Parent())->CheckWorldTransformVersion();

            if (_parentWorldTransformVersion != uPtr(Parent())->_worldTransformVersion)
            {
                _parentWorldTransformVersion = uPtr(Parent())->_worldTransformVersion;
                _worldTransform = NULL;
                _worldTransformInverse = NULL;
                _worldTransformVersion++;
            }
        }
    }
}

// public int get_ChildCount() [instance] :70
int Visual::ChildCount()
{
    return _childCount;
}

// public Uno.Collections.IList<Fuse.Node> get_Children() [instance] :80
uObject* Visual::Children()
{
    return (uObject*)this;
}

// private void Children_Add(Fuse.Node n) [instance] :94
void Visual::Children_Add(::g::Fuse::Node* n)
{
    Children_Invalidate();
    Children_MakeParent(this, n);

    if (_firstChild == NULL)
    {
        _firstChild = n;
        _lastChild = n;
    }
    else
    {
        uPtr(_lastChild)->_nextSibling = n;
        uPtr(n)->_previousSibling = ::g::Fuse::Internal::RawPointer::op_Implicit(::g::Fuse::Internal::RawPointer_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL), _lastChild);
        _lastChild = n;
    }

    _childCount++;

    if (uIs(n, Visual_typeof()))
        _visualChildCount++;
}

// private void Children_Clear() [instance] :75
void Visual::Children_Clear()
{
    Children_Invalidate();
    ::g::Fuse::Node* nextSibling;

    for (::g::Fuse::Node* c = _firstChild; c != NULL; c = nextSibling)
    {
        Children_MakeOrphan(c);
        nextSibling = uPtr(c)->_nextSibling;
        c->_nextSibling = NULL;
        c->_previousSibling = ::g::Fuse::Internal::RawPointer::op_Implicit(::g::Fuse::Internal::RawPointer_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL), NULL);
    }

    _firstChild = NULL;
    _lastChild = NULL;
    _childCount = 0;
    _visualChildCount = 0;
}

// private bool Children_Contains(Fuse.Node n) [instance] :210
bool Visual::Children_Contains(::g::Fuse::Node* n)
{
    return uPtr(n)->_parentID == _thisID;
}

// private Fuse.Node[] Children_GetCachedArray() [instance] :17
uArray* Visual::Children_GetCachedArray()
{
    if (Children_cachedArray != NULL)
        return Children_cachedArray;

    uArray* nodes = uArray::New(::TYPES[66/*Fuse.Node[]*/], _childCount);
    ::g::Fuse::Node* c = _firstChild;
    int i = 0;

    while (c != NULL)
    {
        uPtr(nodes)->Strong< ::g::Fuse::Node*>(i++) = c;
        c = uPtr(c)->_nextSibling;
    }

    Children_cachedArray = nodes;
    return nodes;
}

// private Uno.Collections.IEnumerator<Fuse.Node> Children_GetEnumerator() [instance] :46
uObject* Visual::Children_GetEnumerator()
{
    return (uObject*)Visual__SafeIterator::New1(this);
}

// private void Children_Insert(int index, Fuse.Node newNode) [instance] :168
void Visual::Children_Insert(int index, ::g::Fuse::Node* newNode)
{
    ::g::Fuse::Node* preceeder = Children_ItemBefore(index);
    Children_InsertAfter(preceeder, newNode);
}

// private void Children_InsertAfter(Fuse.Node preceeder, Fuse.Node newNode) [instance] :174
void Visual::Children_InsertAfter(::g::Fuse::Node* preceeder, ::g::Fuse::Node* newNode)
{
    if ((preceeder != NULL) && !Children_Contains(preceeder))
        U_THROW(::g::Uno::Exception::New1());

    Children_Invalidate();

    if (preceeder == NULL)
    {
        if (_firstChild == NULL)
            Children_Add(newNode);
        else
        {
            Children_MakeParent(this, newNode);
            uPtr(newNode)->_nextSibling = _firstChild;
            uPtr(_firstChild)->_previousSibling = ::g::Fuse::Internal::RawPointer::op_Implicit(::g::Fuse::Internal::RawPointer_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL), newNode);
            _firstChild = newNode;
            _childCount++;

            if (uIs(newNode, Visual_typeof()))
                _visualChildCount++;
        }
    }
    else
    {
        if (_lastChild == preceeder)
            Children_Add(newNode);
        else
        {
            Children_MakeParent(this, newNode);
            uPtr(newNode)->_previousSibling = ::g::Fuse::Internal::RawPointer::op_Implicit(::g::Fuse::Internal::RawPointer_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL), preceeder);
            newNode->_nextSibling = uPtr(preceeder)->_nextSibling;
            uPtr(preceeder->_nextSibling)->_previousSibling = ::g::Fuse::Internal::RawPointer::op_Implicit(::g::Fuse::Internal::RawPointer_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL), newNode);
            preceeder->_nextSibling = newNode;
            _childCount++;

            if (uIs(newNode, Visual_typeof()))
                _visualChildCount++;
        }
    }
}

// private void Children_Invalidate() [instance] :39
void Visual::Children_Invalidate()
{
    if (_safeIterator != NULL)
        uPtr(_safeIterator)->SecureCopy();

    Children_cachedArray = NULL;
    InvalidateZOrder();
}

// private Fuse.Node Children_ItemAt(int index) [instance] :33
::g::Fuse::Node* Visual::Children_ItemAt(int index)
{
    uArray* arr = Children_GetCachedArray();
    return uPtr(arr)->Strong< ::g::Fuse::Node*>(index);
}

// private Fuse.Node Children_ItemBefore(int index) [instance] :162
::g::Fuse::Node* Visual::Children_ItemBefore(int index)
{
    if (index == 0)
        return NULL;
    else
        return Children_ItemAt(index - 1);
}

// private void Children_MakeOrphan(Fuse.Node child) [instance] :60
void Visual::Children_MakeOrphan(::g::Fuse::Node* child)
{
    uPtr(child)->_parentID = -1;
}

// private void Children_MakeParent(Fuse.Visual parent, Fuse.Node child) [instance] :54
void Visual::Children_MakeParent(Visual* parent, ::g::Fuse::Node* child)
{
    if (uPtr(child)->_parentID != -1)
        U_THROW(::g::Uno::Exception::New2(uString::Const("Node already has a parent - can only have one")));

    uPtr(child)->_parentID = uPtr(parent)->_thisID;
}

// private bool Children_Remove(Fuse.Node n) [instance] :115
bool Visual::Children_Remove(::g::Fuse::Node* n)
{
    if (uPtr(n)->_parentID != _thisID)
        return false;

    Children_Invalidate();
    Children_MakeOrphan(n);

    if (_firstChild == n)
    {
        _firstChild = uPtr(n)->_nextSibling;

        if (_firstChild != NULL)
            uPtr(_firstChild)->_previousSibling = ::g::Fuse::Internal::RawPointer::op_Implicit(::g::Fuse::Internal::RawPointer_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL), NULL);

        if (_lastChild == n)
            _lastChild = NULL;
    }
    else if (_lastChild == n)
    {
        _lastChild = ((::g::Fuse::Node*)::g::Fuse::Internal::RawPointer::op_Explicit1(::g::Fuse::Internal::RawPointer_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL), uPtr(n)->_previousSibling));

        if (_lastChild != NULL)
            uPtr(_lastChild)->_nextSibling = NULL;
    }
    else
    {
        uPtr((::g::Fuse::Node*)::g::Fuse::Internal::RawPointer::op_Explicit1(::g::Fuse::Internal::RawPointer_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL), uPtr(n)->_previousSibling))->_nextSibling = uPtr(n)->_nextSibling;
        uPtr(n->_nextSibling)->_previousSibling = ::g::Fuse::Internal::RawPointer::op_Implicit(::g::Fuse::Internal::RawPointer_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL), (::g::Fuse::Node*)::g::Fuse::Internal::RawPointer::op_Explicit1(::g::Fuse::Internal::RawPointer_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL), n->_previousSibling));
    }

    uPtr(n)->_nextSibling = NULL;
    n->_previousSibling = ::g::Fuse::Internal::RawPointer::op_Implicit(::g::Fuse::Internal::RawPointer_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL), NULL);
    _childCount--;

    if (uIs(n, Visual_typeof()))
        _visualChildCount--;

    return true;
}

// private void Clear(Fuse.FastProperty1 p) [instance] :92
void Visual::Clear(int p)
{
    if (HasBit(p))
    {
        ::g::Fuse::FastProperty1Link* k = FindPrevious(p);

        if (k == NULL)
            _fastProperties1 = uPtr(_fastProperties1)->Next;
        else
            uPtr(k)->Next = uPtr(uPtr(k)->Next)->Next;

        ClearBit(p);
    }
}

// private void Clear(Fuse.FastProperty2 p) [instance] :71
void Visual::Clear1(int p)
{
    if (HasBit1(p))
    {
        ::g::Fuse::FastProperty2Link* k = FindPrevious1(p);

        if (k == NULL)
            _fastProperties2 = uPtr(_fastProperties2)->Next;
        else
            uPtr(k)->Next = uPtr(uPtr(k)->Next)->Next;

        ClearBit1(p);
    }
}

// internal void ClearBit(Fuse.FastProperty1 p) [instance] :108
void Visual::ClearBit(int p)
{
    _fastPropertyBits1 = (_fastPropertyBits1 & ~p);
}

// internal void ClearBit(Fuse.FastProperty2 p) [instance] :87
void Visual::ClearBit1(int p)
{
    _fastPropertyBits2 = (_fastPropertyBits2 ^ p);
}

// private void ClearBit(Fuse.Visual.VisualBits nb) [instance] :31
void Visual::ClearBit2(int nb)
{
    _nodebits = (_nodebits & ~(1 << nb));
}

// private Fuse.Visual[] ComputeZOrder() [instance] :93
uArray* Visual::ComputeZOrder()
{
    if (_visualChildCount == 0)
        return Visual::_emptyVisuals_;

    if (_visualChildCount == 1)
        return uArray::Init<Visual*>(Visual_typeof()->Array(), 1, (Visual*)FirstChild(::TYPES[63/*Fuse.Visual.FirstChild<Fuse.Visual>*/]));

    AssignNaturalZOrder();
    uArray* zOrder = uArray::New(Visual_typeof()->Array(), _visualChildCount);
    bool needsSorting = false;
    int layer = 0;
    bool hasLayer = false;
    int i = 0;

    for (Visual* v = (Visual*)LastChild(Visual_typeof()->MakeMethod(7/*LastChild<Fuse.Visual>*/, Visual_typeof(), NULL)); v != NULL; v = (Visual*)uPtr(v)->PreviousSibling(::TYPES[26/*Fuse.Node*/]->MakeMethod(4/*PreviousSibling<Fuse.Visual>*/, Visual_typeof(), NULL)), i++)
    {
        uPtr(zOrder)->Strong<Visual*>(i) = v;

        if (uPtr(v)->ZOffset() != 0.0f)
            needsSorting = true;

        if (uPtr(v)->_zOrderFixed)
            needsSorting = true;

        if (!hasLayer)
        {
            layer = uPtr(v)->Layer();
            hasLayer = true;
        }
        else if (uPtr(v)->Layer() != layer)
            needsSorting = true;
    }

    if (needsSorting)
        ::g::Uno::Array::Sort1(::g::Uno::Array_typeof()->MakeMethod(5/*Sort<Fuse.Visual>*/, Visual_typeof(), NULL), zOrder, uDelegate::New(::g::Uno::Comparison_typeof()->MakeType(Visual_typeof(), NULL), (void*)Visual__ZOrderComparator_fn));

    return zOrder;
}

// internal void ConcludePendingRemove() [instance] :126
void Visual::ConcludePendingRemove()
{
    bool ret16;

    if (HasBit(268435456))
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), this, &ret16);
        SetBit1(268435456, false);
    }
}

// private void DecrementWTIListener() [instance] :26
void Visual::DecrementWTIListener()
{
    _wtiListeners--;

    if (Parent() != NULL)
        uPtr(Parent())->DecrementWTIListener();
}

// public double get_DrawCost() [instance] :68
double Visual::DrawCost()
{
    return _drawCost;
}

// private void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float lineWidth, float4 color, float4x4 localToClipTransform) [instance] :57
void Visual::DrawLocalRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect, float lineWidth, ::g::Uno::Float4 color, ::g::Uno::Float4x4 localToClipTransform)
{
    uPtr(::g::Fuse::DrawHelpers::Singelton())->DrawLocalRect(dc, rect, localToClipTransform, lineWidth, color);
}

// protected void DrawLocalSelectionRect(Fuse.DrawContext dc, Uno.Rect rect) [instance] :62
void Visual::DrawLocalSelectionRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect)
{
    ::g::Uno::Float4x4 localToClipTransform = uPtr(dc)->GetLocalToClipTransform(this);
    double phase = ::g::Fuse::Time::FrameTime() * 4.0;
    float pulse = (float)(0.667 + (0.333 * ::g::Uno::Math::Sin(phase * 3.1415926535897931)));
    ::g::Uno::Float4 color = ::g::Uno::Float4__New2(0.25f, 0.5f, 0.75f, pulse);
    DrawLocalRect(dc, rect, 4.0f, ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f), localToClipTransform);
    DrawLocalRect(dc, rect, 2.0f, color, localToClipTransform);
}

// public void EndInteraction(object id) [instance] :36
void Visual::EndInteraction(uObject* id)
{
    bool ret17;

    if (_interactions == NULL)
        return;

    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_interactions), id, &ret17);

    if (uPtr(_interactions)->Count() == 0)
        _interactions = NULL;

    OnInteractionsChanged();
}

// private Fuse.FastProperty1Link<T> Find<T>(Fuse.FastProperty1 p) [instance] :155
::g::Fuse::FastProperty1Link1* Visual::Find(uType* __type, int p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FastProperty1Link<T>*/),
    };
    ::g::Fuse::FastProperty1Link* n = _fastProperties1;

    while (n != NULL)
    {
        if (uPtr(n)->Property == p)
            return uCast< ::g::Fuse::FastProperty1Link1*>(n, __types[0]);

        n = uPtr(n)->Next;
    }

    return NULL;
}

// private Fuse.FastProperty2Link<T> Find<T>(Fuse.FastProperty2 p) [instance] :134
::g::Fuse::FastProperty2Link1* Visual::Find1(uType* __type, int p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FastProperty2Link<T>*/),
    };
    ::g::Fuse::FastProperty2Link* n = _fastProperties2;

    while (n != NULL)
    {
        if (uPtr(n)->Property == p)
            return uCast< ::g::Fuse::FastProperty2Link1*>(n, __types[0]);

        n = uPtr(n)->Next;
    }

    return NULL;
}

// private Fuse.FastProperty1Link FindPrevious(Fuse.FastProperty1 p) [instance] :142
::g::Fuse::FastProperty1Link* Visual::FindPrevious(int p)
{
    ::g::Fuse::FastProperty1Link* pr = NULL;
    ::g::Fuse::FastProperty1Link* n = _fastProperties1;

    while (n != NULL)
    {
        if (uPtr(n)->Property == p)
            return pr;

        pr = n;
        n = uPtr(n)->Next;
    }

    return NULL;
}

// private Fuse.FastProperty2Link FindPrevious(Fuse.FastProperty2 p) [instance] :121
::g::Fuse::FastProperty2Link* Visual::FindPrevious1(int p)
{
    ::g::Fuse::FastProperty2Link* pr = NULL;
    ::g::Fuse::FastProperty2Link* n = _fastProperties2;

    while (n != NULL)
    {
        if (uPtr(n)->Property == p)
            return pr;

        pr = n;
        n = uPtr(n)->Next;
    }

    return NULL;
}

// public Uno.UX.Template FindTemplate(string key) [instance] :70
::g::Uno::UX::Template* Visual::FindTemplate(uString* key)
{
    return _templates.FindTemplate(key);
}

// public Fuse.IViewport FindViewport() [instance] :192
uObject* Visual::FindViewport()
{
    Visual* p = this;

    while (p != NULL)
    {
        uObject* vp = uAs<uObject*>(p, ::TYPES[8/*Fuse.IViewport*/]);

        if (vp != NULL)
            return vp;

        p = uPtr(p)->Parent();
    }

    return NULL;
}

// public T FirstChild<T>() [instance] :34
::g::Fuse::Node* Visual::FirstChild(uType* __type)
{
    ::g::Fuse::Node* c = _firstChild;

    while (c != NULL)
    {
        ::g::Fuse::Node* v = uAs< ::g::Fuse::Node*>(c, __type->U(0));

        if (v != NULL)
            return v;

        c = uPtr(c)->_nextSibling;
    }

    return NULL;
}

// internal Fuse.Visual[] GetCachedZOrder() [instance] :33
uArray* Visual::GetCachedZOrder()
{
    if (_cachedZOrder == NULL)
        _cachedZOrder = ComputeZOrder();

    return _cachedZOrder;
}

// public Fuse.Visual GetHitWindowPoint(float2 windowPoint) [instance] :69
Visual* Visual::GetHitWindowPoint(::g::Uno::Float2 windowPoint)
{
    Visual__HitTestRecord* htr = Visual__HitTestRecord::New1();
    ::g::Fuse::HitTestContext* htc = ::g::Fuse::HitTestContext::New1(windowPoint, uDelegate::New(::g::Fuse::HitTestCallback_typeof(), (void*)Visual__HitTestRecord__HitTestCallback_fn, htr));

    if (Parent() != NULL)
        uPtr(htc)->PushLocalPoint(uPtr(Parent())->WindowToLocal(windowPoint));

    htc->PushWorldRay(::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(Viewport()), ::TYPES[8/*Fuse.IViewport*/]), windowPoint));
    HitTest(htc);
    return htr->Visual;
}

// public float4x4 GetTransformTo(Fuse.Visual other) [instance] :192
::g::Uno::Float4x4 Visual::GetTransformTo(Visual* other)
{
    bool ret18;
    bool ret19;
    ::g::Uno::Collections::HashSet* parents = (::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::g::Uno::Collections::HashSet_typeof()->MakeType(Visual_typeof(), NULL));
    Visual* q = this;

    while (q != NULL)
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(parents), q, &ret18);
        q = uPtr(q)->Parent();
    }

    Visual* c = other;

    while (c != NULL)
    {
        if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(parents), c, &ret19), ret19))
            break;

        c = uPtr(c)->Parent();
    }

    if (c == NULL)
        return ::g::Uno::Float4x4__Identity();

    ::g::Uno::Float4x4 thisTo = GetTransformToAncestor(c);
    ::g::Uno::Float4x4 otherTo = uPtr(other)->GetTransformToAncestor(c);
    return ::g::Uno::Matrix::Mul8(thisTo, ::g::Uno::Matrix::Invert2(otherTo));
}

// private float4x4 GetTransformToAncestor(Fuse.Visual ancestor) [instance] :221
::g::Uno::Float4x4 Visual::GetTransformToAncestor(Visual* ancestor)
{
    ::g::Fuse::FastMatrix* m = ::g::Fuse::FastMatrix::Identity();
    Visual* n = this;

    while ((n != NULL) && (n != ancestor))
    {
        m = uPtr(m)->Mul(uPtr(n)->LocalTransformInternal());
        n = uPtr(n)->Parent();
    }

    return uPtr(m)->Matrix();
}

// internal bool HasBit(Fuse.FastProperty1 p) [instance] :103
bool Visual::HasBit(int p)
{
    return (_fastPropertyBits1 & p) != 0;
}

// internal bool HasBit(Fuse.FastProperty2 p) [instance] :82
bool Visual::HasBit1(int p)
{
    return (_fastPropertyBits2 & p) != 0;
}

// private bool HasBit(Fuse.Visual.VisualBits nb) [instance] :29
bool Visual::HasBit2(int nb)
{
    return (_nodebits & (1 << nb)) != 0;
}

// public bool get_HasChildren() [instance] :21
bool Visual::HasChildren()
{
    return ChildCount() > 0;
}

// private bool get_HasExplicitTransforms() [instance] :32
bool Visual::HasExplicitTransforms()
{
    return _transformCount > 0;
}

// internal bool get_HasMarginBox() [instance] :410
bool Visual::HasMarginBox()
{
    return _hasMarginBox;
}

// public bool get_HasPendingRemove() [instance] :135
bool Visual::HasPendingRemove()
{
    return HasBit(268435456);
}

// private bool get_HasResources() [instance] :94
bool Visual::HasResources()
{
    return HasBit2(1);
}

// public bool get_HasVisualChildren() [instance] :140
bool Visual::HasVisualChildren()
{
    return VisualChildCount() > 0;
}

// public void HitTest(Fuse.HitTestContext htc) [instance] :26
void Visual::HitTest(::g::Fuse::HitTestContext* htc)
{
    if (!IsVisible())
        return;

    ::g::Fuse::VisualBounds* bounds = HitTestBounds();
    ::g::Uno::Float2 localPoint;
    bool hit;

    if (uPtr(bounds)->IsFlat() && (HitTestTransform() == 0))
    {
        if (!TryParentToLocal(uPtr(htc)->LocalPoint(), &localPoint))
            return;

        hit = uPtr(bounds)->ContainsPoint(localPoint);
    }
    else
    {
        ::g::Fuse::Ray world = ::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(Viewport()), ::TYPES[8/*Fuse.IViewport*/]), uPtr(htc)->WindowPoint());
        ::g::Fuse::Ray local = ::g::Fuse::IViewport::WorldToLocalRay(uInterface(uPtr(Viewport()), ::TYPES[8/*Fuse.IViewport*/]), Viewport(), world, this);
        localPoint = ::g::Fuse::ViewportHelpers::LocalPlaneIntersection(local);
        hit = uPtr(bounds)->IsFlat() ? uPtr(bounds)->ContainsPoint(localPoint) : uPtr(bounds)->IntersectsRay(local);
    }

    if (true && !hit)
        return;

    ::g::Uno::Float2 old = uPtr(htc)->PushLocalPoint(localPoint);
    OnHitTest(htc);
    htc->PopLocalPoint(old);
}

// public Fuse.VisualBounds get_HitTestBounds() [instance] :105
::g::Fuse::VisualBounds* Visual::HitTestBounds()
{
    if (_isHitTestBoundsCacheValid)
        return _hitTestBoundsCache;

    ::g::Fuse::VisualBounds* nb = ::g::Fuse::VisualBounds::Empty();

    if (IsContextEnabled() && IsVisible())
    {
        nb = uPtr(nb)->Merge(HitTestLocalBounds(), NULL);
        nb = uPtr(nb)->Merge(HitTestChildrenBounds(), NULL);
    }

    _hitTestBoundsCache = nb;
    _isHitTestBoundsCacheValid = true;
    return nb;
}

// internal Fuse.Visual.HitTestTransformMode get_HitTestTransform() [instance] :18
int Visual::HitTestTransform()
{
    if (IsLocalFlat())
        return 0;

    return 1;
}

// protected float2 IfSnap(float2 p) [instance] :263
::g::Uno::Float2 Visual::IfSnap(::g::Uno::Float2 p)
{
    return SnapToPixels() ? Snap(p) : p;
}

// protected float2 IfSnapDown(float2 p) [instance] :288
::g::Uno::Float2 Visual::IfSnapDown(::g::Uno::Float2 p)
{
    return SnapToPixels() ? SnapDown(p) : p;
}

// protected float2 IfSnapUp(float2 p) [instance] :268
::g::Uno::Float2 Visual::IfSnapUp(::g::Uno::Float2 p)
{
    return SnapToPixels() ? SnapUp(p) : p;
}

// private void IncrementWTIListener() [instance] :20
void Visual::IncrementWTIListener()
{
    _wtiListeners++;

    if (Parent() != NULL)
        uPtr(Parent())->IncrementWTIListener();
}

// public void Insert(int index, Fuse.Node item) [instance] :220
void Visual::Insert1(int index, ::g::Fuse::Node* item)
{
    InsertCleanup(item);
    Children_Insert(index, item);
    OnAdded(item);
}

// public void InsertAfter(Fuse.Node sibling, Fuse.Node node) [instance] :201
void Visual::InsertAfter(::g::Fuse::Node* sibling, ::g::Fuse::Node* node)
{
    InsertCleanup(node);
    Children_InsertAfter(sibling, node);
    OnAdded(node);
}

// private void InsertCleanup(Fuse.Node item) [instance] :227
void Visual::InsertCleanup(::g::Fuse::Node* item)
{
    Visual* v = uAs<Visual*>(item, Visual_typeof());

    if (v != NULL)
        uPtr(v)->ConcludePendingRemove();
}

// internal void InsertNodesAfter(Fuse.Node preceeder, Uno.Collections.IEnumerator<Fuse.Node> items) [instance] :239
void Visual::InsertNodesAfter(::g::Fuse::Node* preceeder, uObject* items)
{
    InsertNodesAfterImpl(preceeder, items, false);
}

// private void InsertNodesAfterImpl(Fuse.Node preceeder, Uno.Collections.IEnumerator<Fuse.Node> items, bool allowMove) [instance] :250
void Visual::InsertNodesAfterImpl(::g::Fuse::Node* preceeder, uObject* items, bool allowMove)
{
    ::g::Fuse::Node* ret22;
    ::g::Fuse::Node* ret23;
    bool ret24;
    ::g::Fuse::Node* ret25;
    bool ret26;

    if (!Children_Contains(preceeder))
        U_THROW(::g::Uno::Exception::New2(uString::Const("Cannot insert nodes after a node that is not a child of this parent")));

    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(items), ::TYPES[30/*Uno.Collections.IEnumerator*/])))
        InsertCleanup((::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(items), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL)), &ret22), ret22));

    ::g::Uno::Collections::HashSet* moved = NULL;
    bool capture = ::g::Fuse::Node::CaptureRooting();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Fuse::Node::ReleaseRooting(capture);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::IEnumerator::Reset(uInterface(uPtr(items), ::TYPES[30/*Uno.Collections.IEnumerator*/]));

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(items, ::TYPES[30/*Uno.Collections.IEnumerator*/])))
        {
            ::g::Fuse::Node* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(items), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL)), &ret23), ret23);

            if (allowMove)
            {
                if (Children_Contains(c))
                {
                    Children_Remove(c);

                    if (moved == NULL)
                        moved = (::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::g::Uno::Collections::HashSet_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL));

                    ::g::Uno::Collections::HashSet__Add_fn(uPtr(moved), c, &ret24);
                }
            }

            Children_InsertAfter(preceeder, c);
            preceeder = c;
        }

        ::g::Uno::Collections::IEnumerator::Reset(uInterface(items, ::TYPES[30/*Uno.Collections.IEnumerator*/]));

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(items, ::TYPES[30/*Uno.Collections.IEnumerator*/])))
        {
            ::g::Fuse::Node* c1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(items), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL)), &ret25), ret25);

            if ((moved == NULL) || !(::g::Uno::Collections::HashSet__Contains_fn(uPtr(moved), c1, &ret26), ret26))
                OnAdded(c1);
            else
                OnMoved(c1);
        }
    }
}

// internal void InsertOrMoveNodesAfter(Fuse.Node preceeder, Uno.Collections.IEnumerator<Fuse.Node> items) [instance] :244
void Visual::InsertOrMoveNodesAfter(::g::Fuse::Node* preceeder, uObject* items)
{
    InsertNodesAfterImpl(preceeder, items, true);
}

// internal Fuse.FastMatrix get_InternLocalTransformInternal() [instance] :146
::g::Fuse::FastMatrix* Visual::InternLocalTransformInternal()
{
    return LocalTransformInternal();
}

// internal float2 InternSnap(float2 p) [instance] :256
::g::Uno::Float2 Visual::InternSnap(::g::Uno::Float2 p)
{
    return Snap(p);
}

// internal float2 InternSnapUp(float2 p) [instance] :275
::g::Uno::Float2 Visual::InternSnapUp(::g::Uno::Float2 p)
{
    return SnapUp(p);
}

// internal void InvalidateFlat() [instance] :11
void Visual::InvalidateFlat()
{
    if (_isLocalFlatCached() || _areChildrenFlatCached())
    {
        _isLocalFlatCached(false);
        _areChildrenFlatCached(false);

        if (Parent() != NULL)
            uPtr(Parent())->InvalidateFlat();
    }
}

// protected void InvalidateHitTestBounds() [instance] :90
void Visual::InvalidateHitTestBounds()
{
    Visual* p = this;

    while ((p != NULL) && p->_isHitTestBoundsCacheValid)
    {
        uPtr(p)->_isHitTestBoundsCacheValid = false;
        p = uPtr(p)->Parent();
    }
}

// public void InvalidateLayout([Fuse.InvalidateLayoutReason reason]) [instance] :169
void Visual::InvalidateLayout(int reason)
{
    if (Visual::_performingLayout_)
        U_THROW(::g::Uno::Exception::New2(uString::Const("Layout was invalidated while performing layout")));

    if (reason <= _layoutDirty)
        return;

    _layoutDirty = reason;
    OnInvalidateLayout();
    Visual* child = this;
    Visual* parent = Parent();
    Visual* maybeChild = NULL;

    while ((parent != NULL) && !uPtr(parent)->IsLayoutRoot())
    {
        if (reason <= uPtr(parent)->_layoutDirty)
            break;

        int useReason = reason;

        if (uPtr(child)->HasMarginBox() && (reason > 1))
        {
            int mb = uPtr(parent)->IsMarginBoxDependent(child);

            if ((mb == 4) || (mb == 3))
            {
                while ((maybeChild != NULL) && (maybeChild != parent))
                {
                    uPtr(maybeChild)->_layoutDirty = 2;
                    maybeChild = uPtr(maybeChild)->Parent();
                }

                maybeChild = NULL;
            }

            switch (mb)
            {
                case 0:
                {
                    useReason = reason = 1;
                    break;
                }
                case 1:
                {
                    useReason = 2;
                    reason = 1;
                    break;
                }
                case 2:
                {
                    useReason = 1;

                    if (maybeChild == NULL)
                        maybeChild = parent;

                    break;
                }
                case 3:
                {
                    useReason = 2;

                    if (maybeChild == NULL)
                        maybeChild = parent;

                    break;
                }
                case 4:
                {
                    reason = useReason = 2;
                    break;
                }
            }
        }

        uPtr(parent)->OnInvalidateLayout();

        if (useReason > parent->_layoutDirty)
            uPtr(parent)->_layoutDirty = useReason;

        child = parent;
        parent = uPtr(parent)->Parent();
    }
}

// protected void InvalidateRenderBounds() [instance] :281
void Visual::InvalidateRenderBounds()
{
    InvalidateVisual();
    Visual* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->OnInvalidateRenderBounds())
            break;

        p = uPtr(p)->Parent();
    }
}

// public void InvalidateVisual() [instance] :12
void Visual::InvalidateVisual()
{
    if (_lastInvalidate == ::g::Fuse::UpdateManager::FrameIndex())
        return;

    _lastInvalidate = ::g::Fuse::UpdateManager::FrameIndex();
    OnInvalidateVisual();

    if ((Parent() != NULL) && IsVisible())
        uPtr(Parent())->InvalidateVisual();
}

// public void InvalidateVisualComposition() [instance] :32
void Visual::InvalidateVisualComposition()
{
    OnInvalidateVisualComposition();
    Visual* p = Parent();

    if (p != NULL)
        uPtr(p)->InvalidateVisual();
    else
        InvalidateVisual();
}

// private void InvalidateWorldTransform() [instance] :32
void Visual::InvalidateWorldTransform()
{
    _worldTransformVersion++;

    if ((_worldTransform != NULL) || (_worldTransformInverse != NULL))
    {
        _worldTransform = NULL;
        _worldTransformInverse = NULL;
    }

    if (::g::Uno::Delegate::op_Inequality(_worldTransformInvalidated1, NULL))
        uPtr(_worldTransformInvalidated1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);

    if (_wtiListeners > 0)

        for (Visual* v = (Visual*)FirstChild(::TYPES[63/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (Visual*)uPtr(v)->NextSibling(::TYPES[64/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
            uPtr(v)->InvalidateWorldTransform();
}

// private void InvalidateZOrder() [instance] :85
void Visual::InvalidateZOrder()
{
    _cachedZOrder = NULL;
    OnZOrderInvalidated();
}

// private void InvokeEventHandler(object obj, object args) [instance] :38
void Visual::InvokeEventHandler(uObject* obj, uObject* args)
{
    uPtr(uCast<uDelegate*>(obj, ::TYPES[24/*Uno.EventHandler*/]))->Invoke(2, this, uCast< ::g::Uno::EventArgs*>(args, ::g::Uno::EventArgs_typeof()));
}

// public bool get_IsContextEnabled() [instance] :58
bool Visual::IsContextEnabled()
{
    return HasBit(2);
}

// public bool get_IsEnabled() [instance] :31
bool Visual::IsEnabled()
{
    return HasBit(1);
}

// public void set_IsEnabled(bool value) [instance] :32
void Visual::IsEnabled(bool value)
{
    if (value != IsEnabled())
    {
        SetBit1(1, value);
        UpdateIsContextEnabledCache();
        OnIsEnabledChanged((uObject*)this);
    }
}

// public generated void add_IsInteractingChanged(Uno.EventHandler value) [instance] :17
void Visual::add_IsInteractingChanged(uDelegate* value)
{
    IsInteractingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(IsInteractingChanged1, value), ::TYPES[24/*Uno.EventHandler*/]);
}

// public generated void remove_IsInteractingChanged(Uno.EventHandler value) [instance] :17
void Visual::remove_IsInteractingChanged(uDelegate* value)
{
    IsInteractingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(IsInteractingChanged1, value), ::TYPES[24/*Uno.EventHandler*/]);
}

// internal bool get_IsLocalFlat() [instance] :36
bool Visual::IsLocalFlat()
{
    if (_isLocalFlatCached())
        return _isLocalFlat();

    _isLocalFlat(CalcIsLocalFlat());
    _isLocalFlatCached(true);
    return _isLocalFlat();
}

// public bool get_IsVisible() [instance] :26
bool Visual::IsVisible()
{
    return _isVisibleCached;
}

// public void add_IsVisibleChanged(Uno.EventHandler value) [instance] :15
void Visual::add_IsVisibleChanged(uDelegate* value)
{
    AddEventHandler(Visual::_isVisibleChangedHandle_, 5, value);
}

// public void remove_IsVisibleChanged(Uno.EventHandler value) [instance] :16
void Visual::remove_IsVisibleChanged(uDelegate* value)
{
    RemoveEventHandler(Visual::_isVisibleChangedHandle_, 5, value);
}

// public T LastChild<T>() [instance] :50
::g::Fuse::Node* Visual::LastChild(uType* __type)
{
    ::g::Fuse::Node* c = _lastChild;

    while (c != NULL)
    {
        ::g::Fuse::Node* v = uAs< ::g::Fuse::Node*>(c, __type->U(0));

        if (v != NULL)
            return v;

        c = (::g::Fuse::Node*)::g::Fuse::Internal::RawPointer::op_Explicit1(::g::Fuse::Internal::RawPointer_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL), uPtr(c)->_previousSibling);
    }

    return NULL;
}

// public Fuse.Layer get_Layer() [instance] :94
int Visual::Layer()
{
    uObject* v;

    if (uPtr(Properties())->TryGet(Visual::_layerProperty_, &v))
        return uUnbox<int>(::g::Fuse::Layer_typeof(), v);

    return 2;
}

// public void set_Layer(Fuse.Layer value) [instance] :101
void Visual::Layer(int value)
{
    if (Layer() != value)
    {
        uPtr(Properties())->Set(Visual::_layerProperty_, uBox<int>(::g::Fuse::Layer_typeof(), value));
        InvalidateLayout(2);

        if (Parent() != NULL)
            uPtr(Parent())->InvalidateZOrder();
    }
}

// public Fuse.LayoutRole get_LayoutRole() [instance] :120
int Visual::LayoutRole()
{
    uObject* v;

    if (uPtr(Properties())->TryGet(Visual::_layoutRoleProperty_, &v))
        return uUnbox<int>(::g::Fuse::LayoutRole_typeof(), v);

    if (Layer() != 2)
        return 2;

    return 0;
}

// public void set_LayoutRole(Fuse.LayoutRole value) [instance] :132
void Visual::LayoutRole(int value)
{
    uPtr(Properties())->Set(Visual::_layoutRoleProperty_, uBox<int>(::g::Fuse::LayoutRole_typeof(), value));
    InvalidateLayout(2);
}

// public float4x4 get_LocalTransform() [instance] :140
::g::Uno::Float4x4 Visual::LocalTransform()
{
    return uPtr(LocalTransformInternal())->Matrix();
}

// protected Fuse.FastMatrix get_LocalTransformInternal() [instance] :150
::g::Fuse::FastMatrix* Visual::LocalTransformInternal()
{
    if (_localTransform == NULL)
    {
        _localTransform = ::g::Fuse::FastMatrix::Identity();
        PrependLocalTransform(_localTransform);
    }

    return _localTransform;
}

// private Fuse.FastMatrix get_LocalTransformInverseInternal() [instance] :169
::g::Fuse::FastMatrix* Visual::LocalTransformInverseInternal()
{
    if (_localTransformInverse == NULL)
    {
        _localTransformInverse = ::g::Fuse::FastMatrix::FromFloat4x4(LocalTransform());
        uPtr(_localTransformInverse)->Invert();
    }

    return _localTransformInverse;
}

// internal float2 get_MarginBoxPosition() [instance] :465
::g::Uno::Float2 Visual::MarginBoxPosition()
{
    return _ambPosition;
}

// private void OnAdded(Fuse.Node b) [instance] :128
void Visual::OnAdded(::g::Fuse::Node* b)
{
    Visual* v = uAs<Visual*>(b, Visual_typeof());

    if (v != NULL)
        OnVisualAdded(v);

    ::g::Fuse::Transform* t = uAs< ::g::Fuse::Transform*>(b, ::g::Fuse::Transform_typeof());

    if (t != NULL)
        OnTransformAdded(t);

    ::g::Fuse::Node::Relate(this, b);
    OnChildAdded(b);
}

// protected void OnBeginRemoveVisual(Fuse.PendingRemoveVisual args) [instance] :107
void Visual::OnBeginRemoveVisual(::g::Fuse::PendingRemoveVisual* args)
{
    SetBit1(268435456, true);

    for (::g::Fuse::Node* n = (::g::Fuse::Node*)FirstChild(Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Node>*/, ::TYPES[26/*Fuse.Node*/], NULL)); n != NULL; n = (::g::Fuse::Node*)uPtr(n)->NextSibling(::TYPES[26/*Fuse.Node*/]->MakeMethod(3/*NextSibling<Fuse.Node>*/, ::TYPES[26/*Fuse.Node*/], NULL)))
    {
        uObject* rvl = uAs<uObject*>(n, ::g::Fuse::IBeginRemoveVisualListener_typeof());

        if (rvl != NULL)
            ::g::Fuse::IBeginRemoveVisualListener::OnBeginRemoveVisual(uInterface(uPtr(rvl), ::g::Fuse::IBeginRemoveVisualListener_typeof()), args);
    }
}

// protected internal void OnBringIntoView(Fuse.Visual elm) [instance] :494
void Visual::OnBringIntoView(Visual* elm)
{
    if (::g::Uno::Delegate::op_Inequality(RequestBringIntoView1, NULL))
        uPtr(RequestBringIntoView1)->Invoke(2, this, (::g::Fuse::RequestBringIntoViewArgs*)::g::Fuse::RequestBringIntoViewArgs::New2(elm));

    if (Parent() != NULL)
        uPtr(Parent())->OnBringIntoView(elm);
}

// private void OnInteractionsChanged() [instance] :48
void Visual::OnInteractionsChanged()
{
    if (::g::Uno::Delegate::op_Inequality(IsInteractingChanged1, NULL))
        uPtr(IsInteractingChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// private void OnIsEnabledChanged(Uno.UX.IPropertyListener origin) [instance] :43
void Visual::OnIsEnabledChanged(uObject* origin)
{
    OnPropertyChanged1(Visual::_isEnabledName_, origin);
}

// protected void OnLocalVisibleChanged() [instance] :35
void Visual::OnLocalVisibleChanged()
{
    UpdateIsVisibleCache();
}

// private void OnMatrixChanged(Fuse.Transform t) [instance] :49
void Visual::OnMatrixChanged(::g::Fuse::Transform* t)
{
    InvalidateLocalTransform();
}

// private void OnMoved(Fuse.Node b) [instance] :152
void Visual::OnMoved(::g::Fuse::Node* b)
{
    OnChildMoved(b);
}

// private void OnParameterChanged() [instance] :75
void Visual::OnParameterChanged()
{
    ::g::Fuse::Scripting::Function* ret27;

    if (_parameterListeners != NULL)
    {
        uObject* so = uAs<uObject*>(this, ::g::Fuse::Scripting::IScriptObject_typeof());

        if (so != NULL)
        {
            uObject* param = uPtr(::g::Fuse::Scripting::IScriptObject::ScriptContext(uInterface(uPtr(so), ::g::Fuse::Scripting::IScriptObject_typeof())))->ParseJson(_parameter);

            for (int i = 0; i < uPtr(_parameterListeners)->Count(); i++)
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_parameterListeners), uCRef<int>(i), &ret27), ret27))->Call(uArray::Init<uObject*>(::TYPES[12/*object[]*/], 1, param));
        }
    }

    OnPropertyChanged(Visual::ParameterName_);
    RaiseEvent(Visual::_parameterChangedHandle_, 11);
}

// private void OnRemoved(Fuse.Node b) [instance] :140
void Visual::OnRemoved(::g::Fuse::Node* b)
{
    Visual* v = uAs<Visual*>(b, Visual_typeof());

    if (v != NULL)
        OnVisualRemoved(v);

    ::g::Fuse::Transform* t = uAs< ::g::Fuse::Transform*>(b, ::g::Fuse::Transform_typeof());

    if (t != NULL)
        OnTransformRemoved(t);

    ::g::Fuse::Node::Unrelate(this, b);
    OnChildRemoved(b);
}

// private void OnResourceChanged(Uno.UX.Resource res) [instance] :97
void Visual::OnResourceChanged(::g::Uno::UX::Resource* res)
{
    ::g::Fuse::Resources::ResourceRegistry::NotifyResourceChanged(uPtr(res)->Key());
}

// private void OnTransformAdded(Fuse.Transform t) [instance] :35
void Visual::OnTransformAdded(::g::Fuse::Transform* t)
{
    _transformCount++;
    uPtr(t)->add_MatrixChanged(uDelegate::New(::TYPES[72/*Uno.Action<Fuse.Transform>*/], (void*)Visual__OnMatrixChanged_fn, this));
    OnMatrixChanged(t);
}

// private void OnTransformRemoved(Fuse.Transform t) [instance] :42
void Visual::OnTransformRemoved(::g::Fuse::Transform* t)
{
    _transformCount--;
    uPtr(t)->remove_MatrixChanged(uDelegate::New(::TYPES[72/*Uno.Action<Fuse.Transform>*/], (void*)Visual__OnMatrixChanged_fn, this));
    OnMatrixChanged(t);
}

// private void OnVisualAdded(Fuse.Visual v) [instance] :157
void Visual::OnVisualAdded(Visual* v)
{
    InvalidateHitTestBounds();
    InvalidateRenderBounds();
}

// private void OnVisualRemoved(Fuse.Visual v) [instance] :163
void Visual::OnVisualRemoved(Visual* v)
{
    uPtr(v)->CancelPendingRemove();
    InvalidateHitTestBounds();
    InvalidateRenderBounds();
}

// public string get_Parameter() [instance] :34
uString* Visual::Parameter()
{
    return _parameter;
}

// public void set_Parameter(string value) [instance] :35
void Visual::Parameter(uString* value)
{
    if (::g::Uno::String::op_Inequality(_parameter, value))
    {
        _parameter = value;
        OnParameterChanged();
    }
}

// public void add_ParameterChanged(Uno.EventHandler value) [instance] :51
void Visual::add_ParameterChanged(uDelegate* value)
{
    AddEventHandler(Visual::_parameterChangedHandle_, 11, value);
}

// public void remove_ParameterChanged(Uno.EventHandler value) [instance] :52
void Visual::remove_ParameterChanged(uDelegate* value)
{
    RemoveEventHandler(Visual::_parameterChangedHandle_, 11, value);
}

// internal Fuse.FastMatrix get_ParentWorldTransformInternal() [instance] :134
::g::Fuse::FastMatrix* Visual::ParentWorldTransformInternal()
{
    return WorldTransformInternal();
}

// protected void PerformLayout() [instance] :342
void Visual::PerformLayout()
{
    PerformLayout1(::g::Fuse::ICommonViewport::Size(uInterface(uPtr(Viewport()), ::TYPES[23/*Fuse.ICommonViewport*/])));
}

// protected void PerformLayout(float2 clientSize) [instance] :350
void Visual::PerformLayout1(::g::Uno::Float2 clientSize)
{
    if ((_cachedRenderTargetSize.X != clientSize.X) || (_cachedRenderTargetSize.Y != clientSize.Y))
    {
        _cachedRenderTargetSize = clientSize;
        InvalidateLayout(2);
    }

    if (_layoutDirty != 0)
    {
        Visual::_performingLayout_ = true;

        {
            const auto __finally_fun = [&]()
            {
                Visual::_performingLayout_ = false;
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            if (_layoutDirty == 2)
            {
                ::g::Uno::Float2 availableSize = clientSize;
                ::g::Uno::Float2 offset = ::g::Uno::Float2__New1(0.0f);
                ArrangeMarginBox(offset, ::g::Fuse::LayoutParams__Create(availableSize));
            }
            else
                UpdateLayout();
        }
    }
}

// private void PrependExplicitTransforms(Fuse.FastMatrix m) [instance] :240
void Visual::PrependExplicitTransforms(::g::Fuse::FastMatrix* m)
{
    if (HasExplicitTransforms())
    {
        PrependTransformOrigin(m);

        for (::g::Fuse::Transform* t = (::g::Fuse::Transform*)FirstChild(Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Transform>*/, ::g::Fuse::Transform_typeof(), NULL)); t != NULL; t = (::g::Fuse::Transform*)uPtr(t)->NextSibling(::TYPES[26/*Fuse.Node*/]->MakeMethod(3/*NextSibling<Fuse.Transform>*/, ::g::Fuse::Transform_typeof(), NULL)))
            uPtr(t)->PrependTo(m);

        PrependInverseTransformOrigin(m);
    }
}

// private void PrependLocalTransform(Fuse.FastMatrix m) [instance] :234
void Visual::PrependLocalTransform(::g::Fuse::FastMatrix* m)
{
    PrependImplicitTransform(m);
    PrependExplicitTransforms(m);
}

// private void RaiseEvent(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne) [instance] :33
void Visual::RaiseEvent(::g::Fuse::PropertyHandle* ph, int ne)
{
    if (HasBit2(ne))
        uPtr(Properties())->ForeachInList1(ph, uDelegate::New(::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL), (void*)Visual__InvokeEventHandler_fn, this), ::g::Uno::EventArgs::Empty_);
}

// private void RearrangeMarginBox() [instance] :412
void Visual::RearrangeMarginBox()
{
    if (!HasMarginBox())
        U_THROW(::g::Uno::Exception::New2(uString::Const("Invalid call to RearrangeMarginBox")));

    ArrangeMarginBox(_ambPosition, _ambLayoutParams);
}

// public bool Remove(Fuse.Node item) [instance] :184
bool Visual::Remove1(::g::Fuse::Node* item)
{
    if (Children_Remove(item))
    {
        OnRemoved(item);
        return true;
    }

    return false;
}

// public void RemoveAllChildren<T>() [instance] :66
void Visual::RemoveAllChildren(uType* __type)
{
    ::g::Fuse::Node* ret30;
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Children()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL)));

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[32/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[30/*Uno.Collections.IEnumerator*/])))
        {
            ::g::Fuse::Node* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::TYPES[26/*Fuse.Node*/], NULL)), &ret30), ret30);

            if (uIs(c, __type->U(0)))
                Remove1(c);
        }
    }
}

// public void RemoveDrawCost(double cost) [instance] :80
void Visual::RemoveDrawCost(double cost)
{
    Visual* p = this;

    while (p != NULL)
    {
        uPtr(p)->_drawCost = (uPtr(p)->_drawCost - cost);
        p = uPtr(p)->Parent();
    }
}

// private void RemoveEventHandler(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne, object handler) [instance] :50
void Visual::RemoveEventHandler(::g::Fuse::PropertyHandle* ph, int ne, uObject* handler)
{
    uPtr(Properties())->RemoveFromList(ph, handler);
    uObject* foo;

    if (!uPtr(Properties())->TryGet(ph, &foo))
        ClearBit2(ne);
}

// public generated void add_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) [instance] :492
void Visual::add_RequestBringIntoView(uDelegate* value)
{
    RequestBringIntoView1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RequestBringIntoView1, value), ::g::Fuse::RequestBringIntoViewHandler_typeof());
}

// public generated void remove_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) [instance] :492
void Visual::remove_RequestBringIntoView(uDelegate* value)
{
    RequestBringIntoView1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RequestBringIntoView1, value), ::g::Fuse::RequestBringIntoViewHandler_typeof());
}

// private void ResetParameterListeners() [instance] :91
void Visual::ResetParameterListeners()
{
    _parameterListeners = NULL;
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() [instance] :16
uObject* Visual::Resources()
{
    if (!HasResources())
    {
        SetBit4(1);
        ::g::Uno::Collections::RootableList* list = (::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL));

        if (IsRootingCompleted())
            uPtr(list)->Subscribe(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL), (void*)Visual__OnResourceChanged_fn, this), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL), (void*)Visual__OnResourceChanged_fn, this));

        uPtr(Properties())->Set(Visual::_resourcesHandle_, list);
    }

    return (uObject*)uPtr(Properties())->Get(Visual::_resourcesHandle_);
}

// private void RootResources() [instance] :30
void Visual::RootResources()
{
    ::g::Uno::UX::Resource* ret31;

    if (HasResources())
    {
        ::g::Uno::Collections::RootableList* list = uCast< ::g::Uno::Collections::RootableList*>(Resources(), ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL));
        uPtr(list)->Subscribe(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL), (void*)Visual__OnResourceChanged_fn, this), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL), (void*)Visual__OnResourceChanged_fn, this));

        for (int i = 0; i < list->Count(); ++i)
            OnResourceChanged((::g::Uno::Collections::RootableList__get_Item_fn(uPtr(list), uCRef<int>(i), &ret31), ret31));
    }
}

// public void SendToBack(Fuse.Visual item) [instance] :67
void Visual::SendToBack(Visual* item)
{
    AssignNaturalZOrder();
    int minNaturalZOrder = 2147483647;

    for (Visual* v = (Visual*)FirstChild(::TYPES[63/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (Visual*)uPtr(v)->NextSibling(::TYPES[64/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
        if (((v != item) && (uPtr(v)->Layer() == uPtr(item)->Layer())) && (uPtr(v)->_naturalZOrder < minNaturalZOrder))
            minNaturalZOrder = uPtr(v)->_naturalZOrder;

    if ((minNaturalZOrder != 2147483647) && ((minNaturalZOrder - 1) != uPtr(item)->_naturalZOrder))
    {
        uPtr(item)->_naturalZOrder = (minNaturalZOrder - 1);
        item->_zOrderFixed = true;
        InvalidateZOrder();
    }
}

// internal void SetBit(Fuse.FastProperty1 p) [instance] :113
void Visual::SetBit(int p)
{
    _fastPropertyBits1 = (_fastPropertyBits1 | p);
}

// internal void SetBit(Fuse.FastProperty1 p, bool value) [instance] :118
void Visual::SetBit1(int p, bool value)
{
    if (value)
        SetBit(p);
    else
        ClearBit(p);
}

// internal void SetBit(Fuse.FastProperty2 p) [instance] :92
void Visual::SetBit2(int p)
{
    _fastPropertyBits2 = (_fastPropertyBits2 | p);
}

// internal void SetBit(Fuse.FastProperty2 p, bool value) [instance] :97
void Visual::SetBit3(int p, bool value)
{
    if (value)
        SetBit2(p);
    else
        ClearBit1(p);
}

// private void SetBit(Fuse.Visual.VisualBits nb) [instance] :30
void Visual::SetBit4(int nb)
{
    _nodebits = (_nodebits | (1 << nb));
}

// internal bool get_ShouldRootChildren() [instance] :95
bool Visual::ShouldRootChildren()
{
    return IsRootingStarted() && _childrenShouldRoot;
}

// protected float2 Snap(float2 p) [instance] :257
::g::Uno::Float2 Visual::Snap(::g::Uno::Float2 p)
{
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Round4(::g::Uno::Float2__op_Multiply1(p, AbsoluteZoom())), AbsoluteZoom());
    return s;
}

// protected float2 SnapDown(float2 p) [instance] :282
::g::Uno::Float2 Visual::SnapDown(::g::Uno::Float2 p)
{
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Floor2(::g::Uno::Float2__op_Addition1(::g::Uno::Float2__op_Multiply1(p, AbsoluteZoom()), 0.005f)), AbsoluteZoom());
    return s;
}

// public bool get_SnapToPixels() [instance] :310
bool Visual::SnapToPixels()
{
    return HasBit(67108864);
}

// public void set_SnapToPixels(bool value) [instance] :314
void Visual::SnapToPixels(bool value)
{
    if ((SnapToPixels() != value) || !HasBit(134217728))
    {
        SetBit(134217728);
        SetBit1(33554432, value);
        UpdateContextSnapToPixelsCache();
        InvalidateLayout(2);
    }
}

// protected float2 SnapUp(float2 p) [instance] :276
::g::Uno::Float2 Visual::SnapUp(::g::Uno::Float2 p)
{
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1(p, AbsoluteZoom()), 0.005f)), AbsoluteZoom());
    return s;
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() [instance] :69
uObject* Visual::Templates()
{
    return (uObject*)_templates.Templates();
}

// public bool TryParentToLocal(float2 parentPoint, float2& result) [instance] :176
bool Visual::TryParentToLocal(::g::Uno::Float2 parentPoint, ::g::Uno::Float2* result)
{
    ::g::Uno::Float2 parentPoint_ = parentPoint;
    ::g::Fuse::FastMatrix* t = LocalTransformInverseInternal();
    *result = ::g::Uno::Vector::TransformCoordinate(parentPoint_, uPtr(t)->Matrix());
    return t->IsValid();
}

// private void UnrootResources() [instance] :44
void Visual::UnrootResources()
{
    if (HasResources())
    {
        ::g::Uno::Collections::RootableList* list = uCast< ::g::Uno::Collections::RootableList*>(Resources(), ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL));
        uPtr(list)->Unsubscribe();
    }
}

// private void UpdateContextSnapToPixelsCache() [instance] :326
void Visual::UpdateContextSnapToPixelsCache()
{
    bool newValue = HasBit(134217728) ? HasBit(33554432) : (Parent() != NULL) ? uPtr(Parent())->SnapToPixels() : true;

    if (newValue != SnapToPixels())
    {
        SetBit1(67108864, newValue);

        for (Visual* v = (Visual*)FirstChild(::TYPES[63/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (Visual*)uPtr(v)->NextSibling(::TYPES[64/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
            uPtr(v)->UpdateContextSnapToPixelsCache();
    }
}

// private void UpdateIsContextEnabledCache() [instance] :61
void Visual::UpdateIsContextEnabledCache()
{
    bool newValue = IsEnabled() && ((Parent() == NULL) || uPtr(Parent())->IsContextEnabled());

    if (IsContextEnabled() != newValue)
    {
        SetBit1(2, newValue);
        OnIsContextEnabledChanged();

        for (Visual* v = (Visual*)FirstChild(::TYPES[63/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (Visual*)uPtr(v)->NextSibling(::TYPES[64/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
            uPtr(v)->UpdateIsContextEnabledCache();
    }
}

// private void UpdateIsVisibleCache() [instance] :40
void Visual::UpdateIsVisibleCache()
{
    bool newValue = IsLocalVisible() && ((Parent() == NULL) || uPtr(Parent())->IsVisible());

    if (_isVisibleCached != newValue)
    {
        _isVisibleCached = newValue;
        OnIsVisibleChanged();

        for (Visual* v = (Visual*)FirstChild(::TYPES[63/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (Visual*)uPtr(v)->NextSibling(::TYPES[64/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
            uPtr(v)->UpdateIsVisibleCache();
    }
}

// private void UpdateLayout() [instance] :384
void Visual::UpdateLayout()
{
    switch (_layoutDirty)
    {
        case 0:
            break;
        case 1:
        {
            for (Visual* v = (Visual*)FirstChild(::TYPES[63/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (Visual*)uPtr(v)->NextSibling(::TYPES[64/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
                uPtr(v)->UpdateLayout();

            break;
        }
        case 2:
        {
            RearrangeMarginBox();
            break;
        }
    }

    _layoutDirty = 0;
}

// public int get_ValidFrameCount() [instance] :49
int Visual::ValidFrameCount()
{
    return ::g::Fuse::UpdateManager::FrameIndex() - _lastInvalidate;
}

// public generated Fuse.Controls.Native.ViewHandle get_ViewHandle() [instance] :49
::g::Fuse::Controls::Native::ViewHandle* Visual::ViewHandle()
{
    return _ViewHandle;
}

// internal generated void set_ViewHandle(Fuse.Controls.Native.ViewHandle value) [instance] :49
void Visual::ViewHandle(::g::Fuse::Controls::Native::ViewHandle* value)
{
    _ViewHandle = value;
}

// public Fuse.IViewport get_Viewport() [instance] :208
uObject* Visual::Viewport()
{
    uObject* ind8;
    ind8 = _viewport;
    return (ind8 != NULL) ? ind8 : (uObject*)FindViewport();
}

// public int get_VisualChildCount() [instance] :73
int Visual::VisualChildCount()
{
    return _visualChildCount;
}

// internal Uno.Collections.IEnumerable<Fuse.Visual> get_VisualChildren() [instance] :22
uObject* Visual::VisualChildren()
{
    return (uObject*)this;
}

// public float2 WindowToLocal(float2 windowCoord) [instance] :253
::g::Uno::Float2 Visual::WindowToLocal(::g::Uno::Float2 windowCoord)
{
    ::g::Uno::Float3 ind6;

    if (HitTestTransform() == 0)
    {
        ::g::Uno::Float2 parentCoord = (Parent() == NULL) ? windowCoord : uPtr(Parent())->WindowToLocal(windowCoord);
        ind6 = uPtr(LocalTransformInverseInternal())->TransformVector(::g::Uno::Float3__New4(parentCoord, 0.0f));
        return ::g::Uno::Float2__New2(ind6.X, ind6.Y);
    }
    else
    {
        ::g::Fuse::Ray world = ::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(Viewport()), ::TYPES[8/*Fuse.IViewport*/]), windowCoord);
        ::g::Fuse::Ray local = ::g::Fuse::IViewport::WorldToLocalRay(uInterface(uPtr(Viewport()), ::TYPES[8/*Fuse.IViewport*/]), Viewport(), world, this);
        return ::g::Fuse::ViewportHelpers::LocalPlaneIntersection(local);
    }
}

// public float4x4 get_WorldTransform() [instance] :82
::g::Uno::Float4x4 Visual::WorldTransform()
{
    return uPtr(WorldTransformInternal())->Matrix();
}

// private Fuse.FastMatrix get_WorldTransformInternal() [instance] :121
::g::Fuse::FastMatrix* Visual::WorldTransformInternal()
{
    if (_worldTransform != NULL)
        CheckWorldTransformVersion();

    if (_worldTransform == NULL)
        _worldTransform = CalcWorldTransform();

    return _worldTransform;
}

// public void add_WorldTransformInvalidated(Uno.EventHandler value) [instance] :56
void Visual::add_WorldTransformInvalidated(uDelegate* value)
{
    if (::g::Uno::Delegate::op_Equality(_worldTransformInvalidated1, NULL) && _wtiRooted)
        IncrementWTIListener();

    add__worldTransformInvalidated(value);
}

// public void remove_WorldTransformInvalidated(Uno.EventHandler value) [instance] :63
void Visual::remove_WorldTransformInvalidated(uDelegate* value)
{
    remove__worldTransformInvalidated(value);

    if (::g::Uno::Delegate::op_Equality(_worldTransformInvalidated1, NULL) && _wtiRooted)
        DecrementWTIListener();
}

// public float4x4 get_WorldTransformInverse() [instance] :66
::g::Uno::Float4x4 Visual::WorldTransformInverse()
{
    if (_worldTransformInverse != NULL)
        CheckWorldTransformVersion();

    if (_worldTransformInverse == NULL)
    {
        _worldTransformInverse = uPtr(WorldTransformInternal())->Copy();
        uPtr(_worldTransformInverse)->Invert();
    }

    return uPtr(_worldTransformInverse)->Matrix();
}

// private void WTIRooted() [instance] :74
void Visual::WTIRooted()
{
    _wtiRooted = true;

    if (_wtiListeners != 0)
        U_THROW(::g::Uno::Exception::New1());

    if (::g::Uno::Delegate::op_Inequality(_worldTransformInvalidated1, NULL))
        IncrementWTIListener();
}

// private void WTIUnrooted() [instance] :84
void Visual::WTIUnrooted()
{
    _wtiRooted = false;

    if (::g::Uno::Delegate::op_Inequality(_worldTransformInvalidated1, NULL))
        DecrementWTIListener();

    if (_wtiListeners != 0)
        U_THROW(::g::Uno::Exception::New1());
}

// public float get_ZOffset() [instance] :21
float Visual::ZOffset()
{
    return _zOffset;
}

// public void set_ZOffset(float value) [instance] :22
void Visual::ZOffset(float value)
{
    if (_zOffset == value)
        return;

    _zOffset = value;

    if (Parent() != NULL)
        uPtr(Parent())->InvalidateZOrder();
}

// private static void bringIntoView(Fuse.Scripting.Context c, Fuse.Visual n, object[] args) [static] :43
void Visual::bringIntoView(::g::Fuse::Scripting::Context* c, Visual* n, uArray* args)
{
    Visual_typeof()->Init();
    uPtr(n)->BringIntoView();
}

// private static Uno.UX.Property<string> getParameterProperty(Fuse.Visual v) [static] :31
::g::Uno::UX::Property1* Visual::getParameterProperty(Visual* v)
{
    Visual_typeof()->Init();

    if (uPtr(v)->_parameterProperty == NULL)
        uPtr(v)->_parameterProperty = Visual__ParameterProperty::New1(v);

    return uPtr(v)->_parameterProperty;
}

// private static void onParameterChanged(Fuse.Scripting.Context c, Fuse.Visual v, object[] args) [static] :69
void Visual::onParameterChanged(::g::Fuse::Scripting::Context* c, Visual* v, uArray* args)
{
    Visual_typeof()->Init();
    uPtr(v)->AddParameterChangedListener(uCast< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::g::Fuse::Scripting::Function_typeof()));
}

// private static int ZOrderComparator(Fuse.Visual a, Fuse.Visual b) [static] :128
int Visual::ZOrderComparator(Visual* a, Visual* b)
{
    Visual_typeof()->Init();

    if (uPtr(a)->Layer() != uPtr(b)->Layer())
        return uPtr(a)->Layer() - uPtr(b)->Layer();

    if (uPtr(a)->ZOffset() != uPtr(b)->ZOffset())
        return (uPtr(a)->ZOffset() > uPtr(b)->ZOffset()) ? 1 : -1;

    return uPtr(a)->_naturalZOrder - uPtr(b)->_naturalZOrder;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.EventStorage.uno
// ----------------------------------------------------------------------

// private enum Visual.VisualBits :13
uEnumType* Visual__VisualBits_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Visual.VisualBits", ::g::Uno::Int_typeof(), 12);
    type->SetLiterals(
        "Styled", 0LL,
        "Resources", 1LL,
        "ResourceChanged", 2LL,
        "Style", 3LL,
        "IsContextEnabledChanged", 4LL,
        "IsVisibleChanged", 5LL,
        "Added", 6LL,
        "Removed", 7LL,
        "Rooted", 8LL,
        "Unrooted", 9LL,
        "WorldTransformInvalidated", 10LL,
        "ParameterChanged", 11LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/VisualBounds.uno
// ---------------------------------------------------------------

// public sealed class VisualBounds :12
// {
// static generated VisualBounds() :12
static void VisualBounds__cctor__fn(uType* __type)
{
    VisualBounds::_empty_ = VisualBounds::New1();
    VisualBounds::_infinite_ = VisualBounds::New1();
}

static void VisualBounds_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Box_typeof(), offsetof(VisualBounds, _box), 0,
        type, (uintptr_t)&VisualBounds::_empty_, uFieldFlagsStatic,
        type, (uintptr_t)&VisualBounds::_infinite_, uFieldFlagsStatic);
}

uType* VisualBounds_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(VisualBounds);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.VisualBounds", options);
    type->fp_build_ = VisualBounds_build;
    type->fp_ctor_ = (void*)VisualBounds__New1_fn;
    type->fp_cctor_ = VisualBounds__cctor__fn;
    return type;
}

// private VisualBounds() :14
void VisualBounds__ctor__fn(VisualBounds* __this)
{
    __this->ctor_();
}

// public Fuse.VisualBounds AddRect(float2 mn, float2 mx) :100
void VisualBounds__AddRect_fn(VisualBounds* __this, ::g::Uno::Float2* mn, ::g::Uno::Float2* mx, VisualBounds** __retval)
{
    *__retval = __this->AddRect(*mn, *mx);
}

// public Fuse.VisualBounds AddRect(Uno.Rect r) :105
void VisualBounds__AddRect1_fn(VisualBounds* __this, ::g::Uno::Rect* r, VisualBounds** __retval)
{
    *__retval = __this->AddRect1(*r);
}

// public float3 get_AxisMax() :77
void VisualBounds__get_AxisMax_fn(VisualBounds* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->AxisMax();
}

// public float3 get_AxisMin() :76
void VisualBounds__get_AxisMin_fn(VisualBounds* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->AxisMin();
}

// public static Fuse.VisualBounds Box(Fuse.Box a) :67
void VisualBounds__Box_fn(::g::Fuse::Box* a, VisualBounds** __retval)
{
    *__retval = VisualBounds::Box(*a);
}

// public static Fuse.Box BoxTransform(Fuse.Box box, Fuse.FastMatrix matrix) :299
void VisualBounds__BoxTransform1_fn(::g::Fuse::Box* box, ::g::Fuse::FastMatrix* matrix, ::g::Fuse::Box* __retval)
{
    *__retval = VisualBounds::BoxTransform1(*box, matrix);
}

// public bool ContainsPoint(float2 pt) :233
void VisualBounds__ContainsPoint_fn(VisualBounds* __this, ::g::Uno::Float2* pt, bool* __retval)
{
    *__retval = __this->ContainsPoint(*pt);
}

// public static Fuse.VisualBounds get_Empty() :19
void VisualBounds__get_Empty_fn(VisualBounds** __retval)
{
    *__retval = VisualBounds::Empty();
}

// public Uno.Rect get_FlatRect() :82
void VisualBounds__get_FlatRect_fn(VisualBounds* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->FlatRect();
}

// public static Fuse.VisualBounds get_Infinite() :30
void VisualBounds__get_Infinite_fn(VisualBounds** __retval)
{
    *__retval = VisualBounds::Infinite();
}

// public Fuse.VisualBounds InflateXY(float padding) :113
void VisualBounds__InflateXY_fn(VisualBounds* __this, float* padding, VisualBounds** __retval)
{
    *__retval = __this->InflateXY(*padding);
}

// public bool IntersectsRay(Fuse.Ray ray) :245
void VisualBounds__IntersectsRay_fn(VisualBounds* __this, ::g::Fuse::Ray* ray, bool* __retval)
{
    *__retval = __this->IntersectsRay(*ray);
}

// public Fuse.VisualBounds IntersectXY(Fuse.VisualBounds nb) :209
void VisualBounds__IntersectXY_fn(VisualBounds* __this, VisualBounds* nb, VisualBounds** __retval)
{
    *__retval = __this->IntersectXY(nb);
}

// public bool get_IsEmpty() :24
void VisualBounds__get_IsEmpty_fn(VisualBounds* __this, bool* __retval)
{
    *__retval = __this->IsEmpty();
}

// public bool get_IsFlat() :87
void VisualBounds__get_IsFlat_fn(VisualBounds* __this, bool* __retval)
{
    *__retval = __this->IsFlat();
}

// public bool get_IsInfinite() :35
void VisualBounds__get_IsInfinite_fn(VisualBounds* __this, bool* __retval)
{
    *__retval = __this->IsInfinite();
}

// private static float Max8(float a, float b, float c, float d, float e, float f, float g, float h) :285
void VisualBounds__Max8_fn(float* a, float* b, float* c, float* d, float* e, float* f, float* g, float* h, float* __retval)
{
    *__retval = VisualBounds::Max8(*a, *b, *c, *d, *e, *f, *g, *h);
}

// public Fuse.VisualBounds Merge(Fuse.VisualBounds nb, [Fuse.FastMatrix trans]) :185
void VisualBounds__Merge_fn(VisualBounds* __this, VisualBounds* nb, ::g::Fuse::FastMatrix* trans, VisualBounds** __retval)
{
    *__retval = __this->Merge(nb, trans);
}

// internal static Fuse.VisualBounds Merge(Uno.Collections.IEnumerable<Fuse.Visual> visuals, Fuse.VisualBounds.Type bt) :330
void VisualBounds__Merge1_fn(uObject* visuals, int* bt, VisualBounds** __retval)
{
    *__retval = VisualBounds::Merge1(visuals, *bt);
}

// public Fuse.VisualBounds MergeChild(Fuse.Visual child, Fuse.VisualBounds nb) :228
void VisualBounds__MergeChild_fn(VisualBounds* __this, ::g::Fuse::Visual* child, VisualBounds* nb, VisualBounds** __retval)
{
    *__retval = __this->MergeChild(child, nb);
}

// private static float Min8(float a, float b, float c, float d, float e, float f, float g, float h) :272
void VisualBounds__Min8_fn(float* a, float* b, float* c, float* d, float* e, float* f, float* g, float* h, float* __retval)
{
    *__retval = VisualBounds::Min8(*a, *b, *c, *d, *e, *f, *g, *h);
}

// private VisualBounds New() :14
void VisualBounds__New1_fn(VisualBounds** __retval)
{
    *__retval = VisualBounds::New1();
}

// public static implicit operator Fuse.Box(Fuse.VisualBounds vb) :46
void VisualBounds__op_Implicit_fn(VisualBounds* vb, ::g::Fuse::Box* __retval)
{
    *__retval = VisualBounds::op_Implicit(vb);
}

// public static Fuse.VisualBounds Rect(float2 a, float2 b) :62
void VisualBounds__Rect_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, VisualBounds** __retval)
{
    *__retval = VisualBounds::Rect(*a, *b);
}

// public static Fuse.VisualBounds Rect(float3 a, float3 b) :54
void VisualBounds__Rect1_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, VisualBounds** __retval)
{
    *__retval = VisualBounds::Rect1(*a, *b);
}

// public Fuse.VisualBounds Scale(float3 factor) :128
void VisualBounds__Scale_fn(VisualBounds* __this, ::g::Uno::Float3* factor, VisualBounds** __retval)
{
    *__retval = __this->Scale(*factor);
}

// public float3 get_Size() :78
void VisualBounds__get_Size_fn(VisualBounds* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Size();
}

// public Fuse.VisualBounds Translate(float3 offset) :140
void VisualBounds__Translate_fn(VisualBounds* __this, ::g::Uno::Float3* offset, VisualBounds** __retval)
{
    *__retval = __this->Translate(*offset);
}

uSStrong<VisualBounds*> VisualBounds::_empty_;
uSStrong<VisualBounds*> VisualBounds::_infinite_;

// private VisualBounds() [instance] :14
void VisualBounds::ctor_()
{
}

// public Fuse.VisualBounds AddRect(float2 mn, float2 mx) [instance] :100
VisualBounds* VisualBounds::AddRect(::g::Uno::Float2 mn, ::g::Uno::Float2 mx)
{
    return Merge(VisualBounds::Rect1(::g::Uno::Float3__New4(mn, 0.0f), ::g::Uno::Float3__New4(mx, 0.0f)), NULL);
}

// public Fuse.VisualBounds AddRect(Uno.Rect r) [instance] :105
VisualBounds* VisualBounds::AddRect1(::g::Uno::Rect r)
{
    return AddRect(r.Minimum(), r.Maximum());
}

// public float3 get_AxisMax() [instance] :77
::g::Uno::Float3 VisualBounds::AxisMax()
{
    return _box.Maximum;
}

// public float3 get_AxisMin() [instance] :76
::g::Uno::Float3 VisualBounds::AxisMin()
{
    return _box.Minimum;
}

// public bool ContainsPoint(float2 pt) [instance] :233
bool VisualBounds::ContainsPoint(::g::Uno::Float2 pt)
{
    if (IsEmpty())
        return false;

    if (IsInfinite())
        return true;

    return (((((_box.Minimum.X <= pt.X) && (_box.Minimum.Y <= pt.Y)) && (_box.Maximum.X >= pt.X)) && (_box.Maximum.Y >= pt.Y)) && (_box.Minimum.Z <= 0.0f)) && (_box.Maximum.Z >= 0.0f);
}

// public Uno.Rect get_FlatRect() [instance] :82
::g::Uno::Rect VisualBounds::FlatRect()
{
    ::g::Uno::Float3 ind2;
    ::g::Uno::Float3 ind3;
    return ::g::Uno::Rect__New2((ind2 = AxisMin(), ::g::Uno::Float2__New2(ind2.X, ind2.Y)), (ind3 = Size(), ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
}

// public Fuse.VisualBounds InflateXY(float padding) [instance] :113
VisualBounds* VisualBounds::InflateXY(float padding)
{
    if (IsInfinite())
        return VisualBounds::_infinite_;

    if (IsEmpty())
        return VisualBounds::Rect(::g::Uno::Float2__New1(-padding), ::g::Uno::Float2__New1(padding));

    ::g::Fuse::Box add = _box;
    add.Minimum = ::g::Uno::Float3__op_Subtraction2(add.Minimum, ::g::Uno::Float3__New2(padding, padding, 0.0f));
    add.Maximum = ::g::Uno::Float3__op_Addition2(add.Maximum, ::g::Uno::Float3__New2(padding, padding, 0.0f));
    return VisualBounds::Box(add);
}

// public bool IntersectsRay(Fuse.Ray ray) [instance] :245
bool VisualBounds::IntersectsRay(::g::Fuse::Ray ray)
{
    if (IsEmpty())
        return false;

    if (IsInfinite())
        return true;

    float distance;
    return ::g::Fuse::Collision::RayIntersectsBox(ray, _box, &distance);
}

// public Fuse.VisualBounds IntersectXY(Fuse.VisualBounds nb) [instance] :209
VisualBounds* VisualBounds::IntersectXY(VisualBounds* nb)
{
    if (uPtr(nb)->IsEmpty() || IsEmpty())
        return VisualBounds::_empty_;

    if (uPtr(nb)->IsInfinite() || IsInfinite())
        return VisualBounds::_infinite_;

    ::g::Uno::Float3 mn = ::g::Uno::Math::Max5(AxisMin(), uPtr(nb)->AxisMin());
    ::g::Uno::Float3 mx = ::g::Uno::Math::Min5(AxisMax(), nb->AxisMax());

    if ((mn.X >= mx.X) || (mn.Y >= mx.Y))
        return VisualBounds::_empty_;

    if (mn.Z > mx.Z)
        mx.Z = mn.Z;

    return VisualBounds::Rect1(mn, mx);
}

// public bool get_IsEmpty() [instance] :24
bool VisualBounds::IsEmpty()
{
    return this == VisualBounds::_empty_;
}

// public bool get_IsFlat() [instance] :87
bool VisualBounds::IsFlat()
{
    return IsEmpty() || ((_box.Minimum.Z == 0.0f) && (_box.Maximum.Z == 0.0f));
}

// public bool get_IsInfinite() [instance] :35
bool VisualBounds::IsInfinite()
{
    return this == VisualBounds::_infinite_;
}

// public Fuse.VisualBounds Merge(Fuse.VisualBounds nb, [Fuse.FastMatrix trans]) [instance] :185
VisualBounds* VisualBounds::Merge(VisualBounds* nb, ::g::Fuse::FastMatrix* trans)
{
    if (uPtr(nb)->IsEmpty())
        return this;

    if (uPtr(nb)->IsInfinite() || IsInfinite())
        return VisualBounds::_infinite_;

    ::g::Fuse::Box add = (trans != NULL) ? VisualBounds::BoxTransform1(uPtr(nb)->_box, trans) : uPtr(nb)->_box;

    if (!IsEmpty())
    {
        add.Minimum = ::g::Uno::Math::Min5(_box.Minimum, add.Minimum);
        add.Maximum = ::g::Uno::Math::Max5(_box.Maximum, add.Maximum);
    }

    return VisualBounds::Box(add);
}

// public Fuse.VisualBounds MergeChild(Fuse.Visual child, Fuse.VisualBounds nb) [instance] :228
VisualBounds* VisualBounds::MergeChild(::g::Fuse::Visual* child, VisualBounds* nb)
{
    return Merge(nb, uPtr(child)->InternLocalTransformInternal());
}

// public Fuse.VisualBounds Scale(float3 factor) [instance] :128
VisualBounds* VisualBounds::Scale(::g::Uno::Float3 factor)
{
    if (IsInfinite() || IsEmpty())
        return this;

    ::g::Fuse::Box sc = _box;
    sc.Minimum = ::g::Uno::Float3__op_Multiply2(sc.Minimum, factor);
    sc.Maximum = ::g::Uno::Float3__op_Multiply2(sc.Maximum, factor);
    return VisualBounds::Box(sc);
}

// public float3 get_Size() [instance] :78
::g::Uno::Float3 VisualBounds::Size()
{
    return ::g::Uno::Float3__op_Subtraction2(_box.Maximum, _box.Minimum);
}

// public Fuse.VisualBounds Translate(float3 offset) [instance] :140
VisualBounds* VisualBounds::Translate(::g::Uno::Float3 offset)
{
    if (IsInfinite() || IsEmpty())
        return this;

    ::g::Fuse::Box add = _box;
    add.Minimum = ::g::Uno::Float3__op_Addition2(add.Minimum, offset);
    add.Maximum = ::g::Uno::Float3__op_Addition2(add.Maximum, offset);
    return VisualBounds::Box(add);
}

// public static Fuse.VisualBounds Box(Fuse.Box a) [static] :67
VisualBounds* VisualBounds::Box(::g::Fuse::Box a)
{
    VisualBounds* nb = VisualBounds::New1();
    nb->_box = a;
    return nb;
}

// public static Fuse.Box BoxTransform(Fuse.Box box, Fuse.FastMatrix matrix) [static] :299
::g::Fuse::Box VisualBounds::BoxTransform1(::g::Fuse::Box box, ::g::Fuse::FastMatrix* matrix)
{
    if (!uPtr(matrix)->HasNonTranslation())
        return ::g::Fuse::Box__New1(::g::Uno::Float3__op_Addition2(box.Minimum, uPtr(matrix)->Translation()), ::g::Uno::Float3__op_Addition2(box.Maximum, uPtr(matrix)->Translation()));

    ::g::Uno::Float3 A = uPtr(matrix)->TransformVector(::g::Uno::Float3__New2(box.Minimum.X, box.Minimum.Y, box.Minimum.Z));
    ::g::Uno::Float3 B = matrix->TransformVector(::g::Uno::Float3__New2(box.Maximum.X, box.Minimum.Y, box.Minimum.Z));
    ::g::Uno::Float3 C = matrix->TransformVector(::g::Uno::Float3__New2(box.Maximum.X, box.Maximum.Y, box.Minimum.Z));
    ::g::Uno::Float3 D = matrix->TransformVector(::g::Uno::Float3__New2(box.Minimum.X, box.Maximum.Y, box.Minimum.Z));
    ::g::Uno::Float3 E = matrix->TransformVector(::g::Uno::Float3__New2(box.Minimum.X, box.Minimum.Y, box.Maximum.Z));
    ::g::Uno::Float3 F = matrix->TransformVector(::g::Uno::Float3__New2(box.Maximum.X, box.Minimum.Y, box.Maximum.Z));
    ::g::Uno::Float3 G = matrix->TransformVector(::g::Uno::Float3__New2(box.Maximum.X, box.Maximum.Y, box.Maximum.Z));
    ::g::Uno::Float3 H = matrix->TransformVector(::g::Uno::Float3__New2(box.Minimum.X, box.Maximum.Y, box.Maximum.Z));
    float minX = VisualBounds::Min8(A.X, B.X, C.X, D.X, E.X, F.X, G.X, H.X);
    float minY = VisualBounds::Min8(A.Y, B.Y, C.Y, D.Y, E.Y, F.Y, G.Y, H.Y);
    float minZ = VisualBounds::Min8(A.Z, B.Z, C.Z, D.Z, E.Z, F.Z, G.Z, H.Z);
    float maxX = VisualBounds::Max8(A.X, B.X, C.X, D.X, E.X, F.X, G.X, H.X);
    float maxY = VisualBounds::Max8(A.Y, B.Y, C.Y, D.Y, E.Y, F.Y, G.Y, H.Y);
    float maxZ = VisualBounds::Max8(A.Z, B.Z, C.Z, D.Z, E.Z, F.Z, G.Z, H.Z);
    return ::g::Fuse::Box__New1(::g::Uno::Float3__New2(minX, minY, minZ), ::g::Uno::Float3__New2(maxX, maxY, maxZ));
}

// private static float Max8(float a, float b, float c, float d, float e, float f, float g, float h) [static] :285
float VisualBounds::Max8(float a, float b, float c, float d, float e, float f, float g, float h)
{
    float max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    if (d > max)
        max = d;

    if (e > max)
        max = e;

    if (f > max)
        max = f;

    if (g > max)
        max = g;

    if (h > max)
        max = h;

    return max;
}

// internal static Fuse.VisualBounds Merge(Uno.Collections.IEnumerable<Fuse.Visual> visuals, Fuse.VisualBounds.Type bt) [static] :330
VisualBounds* VisualBounds::Merge1(uObject* visuals, int bt)
{
    ::g::Fuse::Visual* ret5;
    bool hasAnyBounds = false;
    ::g::Fuse::Box box = ::g::Fuse::Box__New1(::g::Uno::Float3__New1(0.0f), ::g::Uno::Float3__New1(0.0f));
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(visuals), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[7/*Fuse.Visual*/], NULL)));

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[32/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[30/*Uno.Collections.IEnumerator*/])))
        {
            ::g::Fuse::Visual* elm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::TYPES[7/*Fuse.Visual*/], NULL)), &ret5), ret5);
            VisualBounds* lrb = (bt == 1) ? (VisualBounds*)uPtr(elm)->HitTestBounds() : (VisualBounds*)uPtr(elm)->LocalRenderBounds();

            if (lrb == VisualBounds::Empty())
                continue;

            if (lrb == VisualBounds::Infinite())
                return VisualBounds::Infinite();

            ::g::Fuse::Box b = VisualBounds::BoxTransform1(VisualBounds::op_Implicit(lrb), elm->InternLocalTransformInternal());

            if (!hasAnyBounds)
            {
                box = b;
                hasAnyBounds = true;
            }
            else
            {
                if (b.Minimum.X < box.Minimum.X)
                    box.Minimum.X = b.Minimum.X;

                if (b.Minimum.Y < box.Minimum.Y)
                    box.Minimum.Y = b.Minimum.Y;

                if (b.Minimum.Z < box.Minimum.Z)
                    box.Minimum.Z = b.Minimum.Z;

                if (b.Maximum.X > box.Maximum.X)
                    box.Maximum.X = b.Maximum.X;

                if (b.Maximum.Y > box.Maximum.Y)
                    box.Maximum.Y = b.Maximum.Y;

                if (b.Maximum.Z > box.Maximum.Z)
                    box.Maximum.Z = b.Maximum.Z;
            }
        }
    }

    if (!hasAnyBounds)
        return VisualBounds::Empty();
    else
        return VisualBounds::Box(box);
}

// private static float Min8(float a, float b, float c, float d, float e, float f, float g, float h) [static] :272
float VisualBounds::Min8(float a, float b, float c, float d, float e, float f, float g, float h)
{
    float min = a;

    if (b < min)
        min = b;

    if (c < min)
        min = c;

    if (d < min)
        min = d;

    if (e < min)
        min = e;

    if (f < min)
        min = f;

    if (g < min)
        min = g;

    if (h < min)
        min = h;

    return min;
}

// private VisualBounds New() [static] :14
VisualBounds* VisualBounds::New1()
{
    VisualBounds* obj4 = (VisualBounds*)uNew(VisualBounds_typeof());
    obj4->ctor_();
    return obj4;
}

// public static implicit operator Fuse.Box(Fuse.VisualBounds vb) [static] :46
::g::Fuse::Box VisualBounds::op_Implicit(VisualBounds* vb)
{
    return uPtr(vb)->_box;
}

// public static Fuse.VisualBounds Rect(float2 a, float2 b) [static] :62
VisualBounds* VisualBounds::Rect(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return VisualBounds::Rect1(::g::Uno::Float3__New4(a, 0.0f), ::g::Uno::Float3__New4(b, 0.0f));
}

// public static Fuse.VisualBounds Rect(float3 a, float3 b) [static] :54
VisualBounds* VisualBounds::Rect1(::g::Uno::Float3 a, ::g::Uno::Float3 b)
{
    VisualBounds* nb = VisualBounds::New1();
    nb->_box.Minimum = ::g::Uno::Math::Min5(a, b);
    nb->_box.Maximum = ::g::Uno::Math::Max5(a, b);
    return nb;
}

// public static Fuse.VisualBounds get_Empty() [static] :19
VisualBounds* VisualBounds::Empty()
{
    return VisualBounds::_empty_;
}

// public static Fuse.VisualBounds get_Infinite() [static] :30
VisualBounds* VisualBounds::Infinite()
{
    return VisualBounds::_infinite_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Visual.uno
// ---------------------------------------------------------

// public enum VisualContext :9
uEnumType* VisualContext_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.VisualContext", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Unknown", 0LL,
        "Graphics", 1LL,
        "Native", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Event.uno
// --------------------------------------------------------

// public abstract class VisualEvent<THandler, TArgs> :43
// {
static void VisualEvent_build(uType* type)
{
    ::STRINGS[80] = uString::Const("Invalid RaiseType for event");
    ::STRINGS[81] = uString::Const("/usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Event.uno");
    ::TYPES[89] = ::g::Uno::Collections::List_typeof();
    ::TYPES[49] = ::g::Uno::Exception_typeof();
    ::TYPES[7] = ::g::Fuse::Visual_typeof();
    ::TYPES[90] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()->Array(), NULL);
    ::TYPES[12] = uObject_typeof()->Array();
    type->SetDependencies(
        ::g::Fuse::AppBase_typeof(),
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Fuse::Properties_typeof(),
        ::g::Fuse::VisualListCache_typeof());
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        ::TYPES[89/*Uno.Collections.List`1*/]->MakeType(type->T(0), NULL), offsetof(VisualEvent, _globalHandlers), 0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(VisualEvent, _handle), 0);
}

VisualEvent_type* VisualEvent_typeof()
{
    static uSStrong<VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.DependencyCount = 4;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(VisualEvent);
    options.TypeSize = sizeof(VisualEvent_type);
    type = (VisualEvent_type*)uClassType::New("Fuse.VisualEvent`2", options);
    type->fp_build_ = VisualEvent_build;
    return type;
}

// protected generated VisualEvent() :43
void VisualEvent__ctor__fn(VisualEvent* __this)
{
    __this->ctor_();
}

// public void AddGlobalHandler(THandler handler) :58
void VisualEvent__AddGlobalHandler_fn(VisualEvent* __this, void* handler)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_globalHandlers), handler);
}

// public void AddHandler(Fuse.Visual visual, THandler handler) :47
void VisualEvent__AddHandler_fn(VisualEvent* __this, ::g::Fuse::Visual* visual, void* handler)
{
    uPtr(uPtr(visual)->Properties())->AddToList(__this->_handle, uBoxPtr(__this->__type->GetBase(VisualEvent_typeof())->T(0), handler));
}

// private void InvokeGlobalHandlers(Fuse.Visual visual, TArgs args) :68
void VisualEvent__InvokeGlobalHandlers_fn(VisualEvent* __this, ::g::Fuse::Visual* visual, ::g::Fuse::VisualEventArgs* args)
{
    __this->InvokeGlobalHandlers(visual, args);
}

// private void InvokeInternal(THandler handler, object sender, TArgs args) :145
void VisualEvent__InvokeInternal_fn(VisualEvent* __this, void* handler, uObject* sender, ::g::Fuse::VisualEventArgs* args)
{
    try
    {
        __this->Invoke_ex(handler, sender, args);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnRaise(object target, object[] args) :128
void VisualEvent__OnRaise_fn(VisualEvent* __this, uObject* target, uArray* args)
{
    __this->OnRaise(target, args);
}

// private void OnRaiseEnabled(object target, object[] args) :136
void VisualEvent__OnRaiseEnabled_fn(VisualEvent* __this, uObject* target, uArray* args)
{
    __this->OnRaiseEnabled(target, args);
}

// private void Raise(TArgs args, Fuse.VisualEventMode type, bool bubble, [Uno.Action<TArgs, Uno.Collections.IList<Fuse.Visual>> PostBubbleAction]) :93
void VisualEvent__Raise_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type, bool* bubble, uDelegate* PostBubbleAction)
{
    __this->Raise(args, *type, *bubble, PostBubbleAction);
}

// public void RaiseWithBubble(TArgs args, [Fuse.VisualEventMode type]) :77
void VisualEvent__RaiseWithBubble_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type)
{
    __this->RaiseWithBubble(args, *type);
}

// internal void RaiseWithBubble(TArgs args, Fuse.VisualEventMode type, Uno.Action<TArgs, Uno.Collections.IList<Fuse.Visual>> PostBubbleAction) :82
void VisualEvent__RaiseWithBubble1_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type, uDelegate* PostBubbleAction)
{
    __this->RaiseWithBubble1(args, *type, PostBubbleAction);
}

// public void RaiseWithoutBubble(TArgs args, [Fuse.VisualEventMode type]) :88
void VisualEvent__RaiseWithoutBubble_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type)
{
    __this->RaiseWithoutBubble(args, *type);
}

// public void RemoveGlobalHandler(THandler handler) :63
void VisualEvent__RemoveGlobalHandler_fn(VisualEvent* __this, void* handler)
{
    bool ret4;
    ::g::Uno::Collections::List__Remove_fn(uPtr(__this->_globalHandlers), handler, &ret4);
}

// public void RemoveHandler(Fuse.Visual visual, THandler handler) :52
void VisualEvent__RemoveHandler_fn(VisualEvent* __this, ::g::Fuse::Visual* visual, void* handler)
{
    uPtr(uPtr(visual)->Properties())->RemoveFromList(__this->_handle, uBoxPtr(__this->__type->GetBase(VisualEvent_typeof())->T(0), handler));
}

// protected generated VisualEvent() [instance] :43
void VisualEvent::ctor_()
{
    uType* __types[] = {
        __type->GetBase(VisualEvent_typeof())->Precalced(0/*Uno.Collections.List<THandler>*/),
    };
    _handle = ::g::Fuse::Properties::CreateHandle();
    _globalHandlers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
}

// private void InvokeGlobalHandlers(Fuse.Visual visual, TArgs args) [instance] :68
void VisualEvent::InvokeGlobalHandlers(::g::Fuse::Visual* visual, ::g::Fuse::VisualEventArgs* args)
{
    uT ret1(__type->GetBase(VisualEvent_typeof())->T(0), U_ALLOCA(__type->GetBase(VisualEvent_typeof())->T(0)->ValueSize));

    if (uPtr(_globalHandlers)->Count() > 0)

        for (int i = 0; i < uPtr(_globalHandlers)->Count(); i++)
            VisualEvent__InvokeInternal_fn(this, (::g::Uno::Collections::List__get_Item_fn(uPtr(_globalHandlers), uCRef<int>(i), &ret1), ret1), visual, args);
}

// private void OnRaise(object target, object[] args) [instance] :128
void VisualEvent::OnRaise(uObject* target, uArray* args)
{
    uT handler(__type->GetBase(VisualEvent_typeof())->T(0), U_ALLOCA(__type->GetBase(VisualEvent_typeof())->T(0)->ValueSize));
    handler = uUnboxAny(__type->GetBase(VisualEvent_typeof())->T(0), target);
    ::g::Fuse::Visual* visual = uCast< ::g::Fuse::Visual*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[7/*Fuse.Visual*/]);
    ::g::Fuse::VisualEventArgs* eventArgs = uCast< ::g::Fuse::VisualEventArgs*>(args->Strong<uObject*>(1), __type->GetBase(VisualEvent_typeof())->T(1));
    VisualEvent__InvokeInternal_fn(this, handler, visual, eventArgs);
}

// private void OnRaiseEnabled(object target, object[] args) [instance] :136
void VisualEvent::OnRaiseEnabled(uObject* target, uArray* args)
{
    uT handler(__type->GetBase(VisualEvent_typeof())->T(0), U_ALLOCA(__type->GetBase(VisualEvent_typeof())->T(0)->ValueSize));
    handler = uUnboxAny(__type->GetBase(VisualEvent_typeof())->T(0), target);
    ::g::Fuse::Visual* visual = uCast< ::g::Fuse::Visual*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[7/*Fuse.Visual*/]);
    ::g::Fuse::VisualEventArgs* eventArgs = uCast< ::g::Fuse::VisualEventArgs*>(args->Strong<uObject*>(1), __type->GetBase(VisualEvent_typeof())->T(1));

    if (uPtr(visual)->IsContextEnabled())
        VisualEvent__InvokeInternal_fn(this, handler, visual, eventArgs);
}

// private void Raise(TArgs args, Fuse.VisualEventMode type, bool bubble, [Uno.Action<TArgs, Uno.Collections.IList<Fuse.Visual>> PostBubbleAction]) [instance] :93
void VisualEvent::Raise(::g::Fuse::VisualEventArgs* args, int type, bool bubble, uDelegate* PostBubbleAction)
{
    ::g::Fuse::Visual* ret2;
    ::g::Fuse::Visual* ret3;
    ::g::Fuse::Visual* visual = uPtr(args)->Visual();
    uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = uDelegate::New(::TYPES[90/*Uno.Action<object, object[]>*/], (void*)VisualEvent__OnRaise_fn, this);
            break;
        }
        case 2:
        {
            handler = uDelegate::New(::TYPES[90/*Uno.Action<object, object[]>*/], (void*)VisualEvent__OnRaise_fn, this);
            break;
        }
        case 1:
        {
            handler = uDelegate::New(::TYPES[90/*Uno.Action<object, object[]>*/], (void*)VisualEvent__OnRaiseEnabled_fn, this);
            break;
        }
        default:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[80/*"Invalid Rai...*/], 0, ::STRINGS[81/*"/usr/local/...*/], 105);
            return;
        }
    }

    ::g::Uno::Collections::List* list = ::g::Fuse::VisualListCache::Acquire();

    while (visual != NULL)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(list), visual);

        if (!bubble)
            break;

        visual = uPtr(visual)->Parent();
    }

    for (int i = 0; i < uPtr(list)->Count(); ++i)
        uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret2), ret2))->Properties())->ForeachInList(_handle, handler, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 2, (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret3), ret3), args));

    if (::g::Uno::Delegate::op_Inequality(PostBubbleAction, NULL))
        uPtr(PostBubbleAction)->Invoke(2, args, (uObject*)list);

    InvokeGlobalHandlers(visual, args);
    ::g::Fuse::VisualListCache::Release(list);
}

// public void RaiseWithBubble(TArgs args, [Fuse.VisualEventMode type]) [instance] :77
void VisualEvent::RaiseWithBubble(::g::Fuse::VisualEventArgs* args, int type)
{
    Raise(args, type, true, NULL);
}

// internal void RaiseWithBubble(TArgs args, Fuse.VisualEventMode type, Uno.Action<TArgs, Uno.Collections.IList<Fuse.Visual>> PostBubbleAction) [instance] :82
void VisualEvent::RaiseWithBubble1(::g::Fuse::VisualEventArgs* args, int type, uDelegate* PostBubbleAction)
{
    Raise(args, type, true, PostBubbleAction);
}

// public void RaiseWithoutBubble(TArgs args, [Fuse.VisualEventMode type]) [instance] :88
void VisualEvent::RaiseWithoutBubble(::g::Fuse::VisualEventArgs* args, int type)
{
    Raise(args, type, false, NULL);
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Event.uno
// --------------------------------------------------------

// public class VisualEventArgs :161
// {
static void VisualEventArgs_build(uType* type)
{
    ::STRINGS[82] = uString::Const("visual");
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(VisualEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(VisualEventArgs, _IsHandled), 0,
        ::g::Fuse::Visual_typeof(), offsetof(VisualEventArgs, _Visual), 0);
}

VisualEventArgs_type* VisualEventArgs_typeof()
{
    static uSStrong<VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VisualEventArgs);
    options.TypeSize = sizeof(VisualEventArgs_type);
    type = (VisualEventArgs_type*)uClassType::New("Fuse.VisualEventArgs", options);
    type->fp_build_ = VisualEventArgs_build;
    type->fp_Serialize = VisualEventArgs__Serialize_fn;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public VisualEventArgs(Fuse.Visual visual) :167
void VisualEventArgs__ctor_1_fn(VisualEventArgs* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_1(visual);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :175
void VisualEventArgs__FuseScriptingIScriptEventSerialize_fn(VisualEventArgs* __this, uObject* s)
{
    __this->Serialize(s);
}

// public generated bool get_IsHandled() :163
void VisualEventArgs__get_IsHandled_fn(VisualEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsHandled();
}

// public generated void set_IsHandled(bool value) :163
void VisualEventArgs__set_IsHandled_fn(VisualEventArgs* __this, bool* value)
{
    __this->IsHandled(*value);
}

// public VisualEventArgs New(Fuse.Visual visual) :167
void VisualEventArgs__New2_fn(::g::Fuse::Visual* visual, VisualEventArgs** __retval)
{
    *__retval = VisualEventArgs::New2(visual);
}

// private virtual void Serialize(Fuse.Scripting.IEventSerializer s) :180
void VisualEventArgs__Serialize_fn(VisualEventArgs* __this, uObject* s)
{
}

// public generated Fuse.Visual get_Visual() :165
void VisualEventArgs__get_Visual_fn(VisualEventArgs* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :165
void VisualEventArgs__set_Visual_fn(VisualEventArgs* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public VisualEventArgs(Fuse.Visual visual) [instance] :167
void VisualEventArgs::ctor_1(::g::Fuse::Visual* visual)
{
    ctor_();

    if (visual == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[82/*"visual"*/]));

    Visual(visual);
}

// public generated bool get_IsHandled() [instance] :163
bool VisualEventArgs::IsHandled()
{
    return _IsHandled;
}

// public generated void set_IsHandled(bool value) [instance] :163
void VisualEventArgs::IsHandled(bool value)
{
    _IsHandled = value;
}

// public generated Fuse.Visual get_Visual() [instance] :165
::g::Fuse::Visual* VisualEventArgs::Visual()
{
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :165
void VisualEventArgs::Visual(::g::Fuse::Visual* value)
{
    _Visual = value;
}

// public VisualEventArgs New(Fuse.Visual visual) [static] :167
VisualEventArgs* VisualEventArgs::New2(::g::Fuse::Visual* visual)
{
    VisualEventArgs* obj1 = (VisualEventArgs*)uNew(VisualEventArgs_typeof());
    obj1->ctor_1(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Event.uno
// --------------------------------------------------------

// public delegate void VisualEventHandler(object sender, Fuse.VisualEventArgs args) :185
uDelegateType* VisualEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.VisualEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::VisualEventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Event.uno
// --------------------------------------------------------

// public enum VisualEventMode :8
uEnumType* VisualEventMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.VisualEventMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "Enabled", 1LL,
        "Force", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Event.uno
// --------------------------------------------------------

// internal static class VisualListCache :21
// {
// static generated VisualListCache() :21
static void VisualListCache__cctor__fn(uType* __type)
{
    VisualListCache::_visualListCache_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[91/*Uno.Collections.List<Uno.Collections.List<Fuse.Visual>>*/]));
}

static void VisualListCache_build(uType* type)
{
    ::TYPES[91] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[91/*Uno.Collections.List<Uno.Collections.List<Fuse.Visual>>*/], (uintptr_t)&VisualListCache::_visualListCache_, uFieldFlagsStatic);
}

uClassType* VisualListCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.VisualListCache", options);
    type->fp_build_ = VisualListCache_build;
    type->fp_cctor_ = VisualListCache__cctor__fn;
    return type;
}

// public static Uno.Collections.List<Fuse.Visual> Acquire() :25
void VisualListCache__Acquire_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = VisualListCache::Acquire();
}

// public static void Release(Uno.Collections.List<Fuse.Visual> list) :36
void VisualListCache__Release_fn(::g::Uno::Collections::List* list)
{
    VisualListCache::Release(list);
}

uSStrong< ::g::Uno::Collections::List*> VisualListCache::_visualListCache_;

// public static Uno.Collections.List<Fuse.Visual> Acquire() [static] :25
::g::Uno::Collections::List* VisualListCache::Acquire()
{
    ::g::Uno::Collections::List* ret1;

    if (uPtr(VisualListCache::_visualListCache_)->Count() > 0)
    {
        ::g::Uno::Collections::List* l = (::g::Uno::Collections::List__get_Item_fn(uPtr(VisualListCache::_visualListCache_), uCRef<int>(uPtr(VisualListCache::_visualListCache_)->Count() - 1), &ret1), ret1);
        uPtr(VisualListCache::_visualListCache_)->RemoveAt(uPtr(VisualListCache::_visualListCache_)->Count() - 1);
        return l;
    }

    return (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Visual>*/]);
}

// public static void Release(Uno.Collections.List<Fuse.Visual> list) [static] :36
void VisualListCache::Release(::g::Uno::Collections::List* list)
{
    uPtr(list)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(VisualListCache::_visualListCache_), list);
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/SystemFont.uno
// --------------------------------------------------------------

// public enum SystemFont.Weight :38
uEnumType* SystemFont__Weight_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.SystemFont.Weight", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "UltraLight", 0LL,
        "Thin", 1LL,
        "Light", 2LL,
        "Normal", 3LL,
        "Medium", 4LL,
        "SemiBold", 5LL,
        "Bold", 6LL,
        "Heavy", 7LL,
        "Black", 8LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno
// --------------------------------------------------------------

// private sealed class TranslationModes.WidthMode :128
// {
static void TranslationModes__WidthMode_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::TranslationModes__SizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(::g::Fuse::TranslationModes__SizeMode_type, interface1));
}

::g::Fuse::TranslationModes__SizeMode_type* TranslationModes__WidthMode_typeof()
{
    static uSStrong< ::g::Fuse::TranslationModes__SizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::TranslationModes__SizeMode_typeof();
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TranslationModes__WidthMode);
    options.TypeSize = sizeof(::g::Fuse::TranslationModes__SizeMode_type);
    type = (::g::Fuse::TranslationModes__SizeMode_type*)uClassType::New("Fuse.TranslationModes.WidthMode", options);
    type->fp_build_ = TranslationModes__WidthMode_build;
    type->fp_ctor_ = (void*)TranslationModes__WidthMode__New2_fn;
    type->fp_GetAbsVector = (void(*)(::g::Fuse::TranslationModes__SizeMode*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__WidthMode__GetAbsVector_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__WidthMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::TranslationModes__SizeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::TranslationModes__SizeMode__Unsubscribe_fn;
    return type;
}

// public generated WidthMode() :128
void TranslationModes__WidthMode__ctor_1_fn(TranslationModes__WidthMode* __this)
{
    __this->ctor_1();
}

// public override sealed float3 GetAbsVector(Fuse.Translation t) :130
void TranslationModes__WidthMode__GetAbsVector_fn(TranslationModes__WidthMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__op_Multiply(::g::Fuse::TranslationModes::SizeOf(uPtr(t)->RelativeNode()).X, uPtr(t)->Vector()), void();
}

// public generated WidthMode New() :128
void TranslationModes__WidthMode__New2_fn(TranslationModes__WidthMode** __retval)
{
    *__retval = TranslationModes__WidthMode::New2();
}

// public generated WidthMode() [instance] :128
void TranslationModes__WidthMode::ctor_1()
{
    ctor_();
}

// public generated WidthMode New() [static] :128
TranslationModes__WidthMode* TranslationModes__WidthMode::New2()
{
    TranslationModes__WidthMode* obj1 = (TranslationModes__WidthMode*)uNew(TranslationModes__WidthMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/WrapException.uno
// -----------------------------------------------------------------

// internal sealed class WrapException :12
// {
static void WrapException_build(uType* type)
{
    ::STRINGS[83] = uString::Const("Wrapped Exception");
    type->SetFields(4);
}

::g::Uno::Exception_type* WrapException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(WrapException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.WrapException", options);
    type->fp_build_ = WrapException_build;
    type->fp_get_Message = (void(*)(::g::Uno::Exception*, uString**))WrapException__get_Message_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))WrapException__ToString_fn;
    return type;
}

// public WrapException(Uno.Exception inner) :14
void WrapException__ctor_3_fn(WrapException* __this, ::g::Uno::Exception* inner)
{
    __this->ctor_3(inner);
}

// public override sealed string get_Message() :38
void WrapException__get_Message_fn(WrapException* __this, uString** __retval)
{
    return *__retval = uPtr(__this->InnerException())->Message(), void();
}

// public WrapException New(Uno.Exception inner) :14
void WrapException__New4_fn(::g::Uno::Exception* inner, WrapException** __retval)
{
    *__retval = WrapException::New4(inner);
}

// public override sealed string ToString() :31
void WrapException__ToString_fn(WrapException* __this, uString** __retval)
{
    return *__retval = uPtr(__this->InnerException())->ToString(), void();
}

// public static Uno.Exception Unwrap(Uno.Exception e) :21
void WrapException__Unwrap_fn(::g::Uno::Exception* e, ::g::Uno::Exception** __retval)
{
    *__retval = WrapException::Unwrap(e);
}

// public WrapException(Uno.Exception inner) [instance] :14
void WrapException::ctor_3(::g::Uno::Exception* inner)
{
    ctor_2(::STRINGS[83/*"Wrapped Exc...*/], inner);
}

// public WrapException New(Uno.Exception inner) [static] :14
WrapException* WrapException::New4(::g::Uno::Exception* inner)
{
    WrapException* obj1 = (WrapException*)uNew(WrapException_typeof());
    obj1->ctor_3(inner);
    return obj1;
}

// public static Uno.Exception Unwrap(Uno.Exception e) [static] :21
::g::Uno::Exception* WrapException::Unwrap(::g::Uno::Exception* e)
{
    while (uIs(e, WrapException_typeof()) && (uPtr(e)->InnerException() != NULL))
        e = uPtr(e)->InnerException();

    return e;
}
// }

}} // ::g::Fuse
