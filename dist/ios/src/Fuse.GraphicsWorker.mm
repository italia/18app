// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/GraphicsWorker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.WrapException.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.AutoResetEvent.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.EventWaitHandle.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadStart.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[4];
static uType* TYPES[6];

namespace g{
namespace Fuse{

// public static class GraphicsWorker :14
// {
// static generated GraphicsWorker() :14
static void GraphicsWorker__cctor__fn(uType* __type)
{
    GraphicsWorker::_exceptionQueue_ = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[0/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/]));
}

static void GraphicsWorker_build(uType* type)
{
    ::STRINGS[0] = uString::Const("_exceptionQueue mismatch");
    ::STRINGS[1] = uString::Const("GraphicsWorker failed");
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.Common/1.3.1/GraphicsWorker.uno");
    ::STRINGS[3] = uString::Const("Run");
    ::TYPES[0] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::TYPES[2/*Uno.Action*/], NULL);
    ::TYPES[5] = ::g::Uno::Threading::ThreadStart_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(0,
        ::TYPES[0/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/], (uintptr_t)&GraphicsWorker::_exceptionQueue_, uFieldFlagsStatic,
        ::g::Uno::Threading::AutoResetEvent_typeof(), (uintptr_t)&GraphicsWorker::_resetEvent_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&GraphicsWorker::_terminating_, uFieldFlagsStatic,
        ::g::Uno::Threading::Thread_typeof(), (uintptr_t)&GraphicsWorker::_thread_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.Threading.ConcurrentQueue<Uno.Action>*/], (uintptr_t)&GraphicsWorker::_work_, uFieldFlagsStatic,
        ::g::ObjC::Object_typeof(), (uintptr_t)&GraphicsWorker::_workerContext_, uFieldFlagsStatic);
}

uClassType* GraphicsWorker_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.GraphicsWorker", options);
    type->fp_build_ = GraphicsWorker_build;
    type->fp_cctor_ = GraphicsWorker__cctor__fn;
    return type;
}

// private static extern ObjC.Object CreateContext() :42
void GraphicsWorker__CreateContext_fn(::g::ObjC::Object** __retval)
{
    *__retval = GraphicsWorker::CreateContext();
}

// public static void Dispatch(Uno.Action a) :16
void GraphicsWorker__Dispatch_fn(uDelegate* a)
{
    GraphicsWorker::Dispatch(a);
}

// public static void DispatchException() :80
void GraphicsWorker__DispatchException_fn()
{
    GraphicsWorker::DispatchException();
}

// private static void OnTerminating(Fuse.Platform.ApplicationState newState) :71
void GraphicsWorker__OnTerminating_fn(int* newState)
{
    GraphicsWorker::OnTerminating(*newState);
}

// private static void Run() :88
void GraphicsWorker__Run_fn()
{
    GraphicsWorker::Run();
}

// private static extern void SetCurrentContext(ObjC.Object context) :48
void GraphicsWorker__SetCurrentContext_fn(::g::ObjC::Object* context)
{
    GraphicsWorker::SetCurrentContext(context);
}

// private static void Start() :53
void GraphicsWorker__Start_fn()
{
    GraphicsWorker::Start();
}

uSStrong< ::g::Uno::Threading::ConcurrentQueue*> GraphicsWorker::_exceptionQueue_;
uSStrong< ::g::Uno::Threading::AutoResetEvent*> GraphicsWorker::_resetEvent_;
bool GraphicsWorker::_terminating_;
uSStrong< ::g::Uno::Threading::Thread*> GraphicsWorker::_thread_;
uSStrong< ::g::Uno::Threading::ConcurrentQueue*> GraphicsWorker::_work_;
uSStrong< ::g::ObjC::Object*> GraphicsWorker::_workerContext_;

// private static extern ObjC.Object CreateContext() [static] :42
::g::ObjC::Object* GraphicsWorker::CreateContext()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return [[EAGLContext alloc] initWithAPI:kEAGLRenderingAPIOpenGLES2 sharegroup:[EAGLContext currentContext].sharegroup];
        } ());
        
    }
    
}

// public static void Dispatch(Uno.Action a) [static] :16
void GraphicsWorker::Dispatch(uDelegate* a)
{
    GraphicsWorker::Start();
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(GraphicsWorker::_work_), a);
    uPtr(GraphicsWorker::_resetEvent_)->Set();
}

// public static void DispatchException() [static] :80
void GraphicsWorker::DispatchException()
{
    bool ret1;
    ::g::Uno::Exception* e;

    if (!(::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(GraphicsWorker::_exceptionQueue_), (void**)(&e), &ret1), ret1))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"_exceptionQ...*/]));

    U_THROW(::g::Fuse::WrapException::New4(e));
}

// private static void OnTerminating(Fuse.Platform.ApplicationState newState) [static] :71
void GraphicsWorker::OnTerminating(int newState)
{
    GraphicsWorker::_terminating_ = true;
    uPtr(GraphicsWorker::_resetEvent_)->Set();
    uPtr(GraphicsWorker::_thread_)->Join();
}

// private static void Run() [static] :88
void GraphicsWorker::Run()
{
    bool ret2;
    GraphicsWorker::SetCurrentContext(GraphicsWorker::_workerContext_);

    while (!GraphicsWorker::_terminating_)
    {
        uAutoReleasePool ____pool;
        uDelegate* a;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(GraphicsWorker::_work_), (void**)(&a), &ret2), ret2))
        {
            try
            {
                uPtr(a)->InvokeVoid();
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;
                ::g::Fuse::Diagnostics::UnknownException(::STRINGS[1/*"GraphicsWor...*/], e, a, ::STRINGS[2/*"/usr/local/...*/], 109, ::STRINGS[3/*"Run"*/]);
                ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(GraphicsWorker::_exceptionQueue_), e);
                ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)GraphicsWorker__DispatchException_fn));
            }

            continue;
        }

        uPtr(GraphicsWorker::_resetEvent_)->WaitOne();
    }

    GraphicsWorker::_workerContext_ = NULL;
}

// private static extern void SetCurrentContext(ObjC.Object context) [static] :48
void GraphicsWorker::SetCurrentContext(::g::ObjC::Object* context)
{
    @autoreleasepool
    {
        [] (::id context) -> void
        {
            [EAGLContext setCurrentContext: context];
        } (::g::ObjC::Object::GetHandle(context));
        
    }
    
}

// private static void Start() [static] :53
void GraphicsWorker::Start()
{
    if (GraphicsWorker::_thread_ != NULL)
        return;

    ::g::Fuse::Platform::Lifecycle::add_Terminating(uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)GraphicsWorker__OnTerminating_fn));
    GraphicsWorker::_workerContext_ = GraphicsWorker::CreateContext();
    GraphicsWorker::_work_ = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[4/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    GraphicsWorker::_resetEvent_ = ::g::Uno::Threading::AutoResetEvent::New2(false);
    GraphicsWorker::_thread_ = ::g::Uno::Threading::Thread::New2(uDelegate::New(::TYPES[5/*Uno.Threading.ThreadStart*/], (void*)GraphicsWorker__Run_fn));
    uPtr(GraphicsWorker::_thread_)->Start();
}
// }

}} // ::g::Fuse
